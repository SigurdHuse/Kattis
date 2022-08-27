#include <iostream>
#include <cmath>
#include <tuple>
#include <string> 
using namespace std; 

/*
Born in Warsaw, Benoît Mandelbrot (1924–2010) is considered the father of fractal geometry. He studied mathematical processes that described self-similar and natural shapes known as fractals. Perhaps his most well-known contribution is the Mandelbrot set, which is pictured below (the set contains the black points):

The Mandelbrot set is typically drawn on the complex plane, a 2-dimensional plane representing all complex numbers. The horizontal axis represents the real portion of the number, and the vertical axis represents the imaginary portion. A complex number c=x+yi
(at position (x,y)

on the complex plane) is not in the Mandelbrot set if the following sequence diverges:
zn+1←z2n+c

beginning with z0=0
. That is, limn→∞|zn|=∞. If the sequence does not diverge, then c

is in the set.

Recall the following facts about imaginary numbers and their arithmetic:
i=−1−−−√,i2=−1,(x+yi)2=x2−y2+2xyi,|x+yi|=x2+y2−−−−−−√

where x
and y are real numbers, and |⋅| is known as the modulus of a complex number (in the complex plane, the modulus of x+yi is equal to the straight-line distance from the origin to the the point (x,y)

).

Write a program which determines if the sequence zn
diverges for a given value c within a fixed number of iterations. That is, is c in the Mandelbrot set or not? To detect divergence, just check to see if |zn|>2 for any zn that we compute – if this happens, the sequence is guaranteed to diverge.
*/

tuple<double,double> squared(double x, double y){
    return make_tuple(pow(x,2) - pow(y,2), 2*x*y);
}

double abs_c(double x, double y){
    return sqrt(pow(x,2) + pow(y,2));
}

int main()
{
    double x, y;
    int r;
    tuple<double,double> tmp;
    string state;
    int cnt = 1;
    while(cin >> x >> y >> r){
        tmp = make_tuple(x,y);
        for(int i = 0; i < r-1; i++){
            tmp = squared(x,y);
            x = get<0>(tmp) + x;
            y = get<1>(tmp) + y;
            if(abs_c(x,y)>3){
                break;
            }
        }
        //cout <<"  "<< x << "  "<< y << endl;
        if(abs_c(x,y)>2){
            state = "OUT";
        }
        else{
            state= "IN";
        }
        cout << "Case " << cnt << ": " << state << endl;
        cnt ++; 
    }
    
}