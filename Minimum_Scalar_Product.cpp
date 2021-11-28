#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std; 

/*
You are given two vectors v1=(x1,x2,…,xn) and v2=(y1,y2,…,yn). The scalar product of these vectors is a single number, calculated as x1y1+x2y2+…+xnyn

.

Suppose you are allowed to permute the coordinates of each vector as you wish. Choose two permutations such that the scalar product of your two new vectors is the smallest possible, and output that minimum scalar product.
Input

The first line of the input file contains the number of testcases, T≤10
. For each test case, the first line contains integer number n. The next two lines contain n integers each, giving the coordinates of v1 and v2

respectively.

You may assume that 1≤n≤800
and −100000≤xi,yi≤100000.
*/


int main()
{
    int tmp, v, n;
    long long int s;
    cin >> tmp;
    for(int i = 0; i < tmp; i++){
        cin >> n;
        s = 0;
        vector<int> x, y;
        for(int k = 0; k <n; k++){
            cin >> v;
            x.push_back(v);
        }
        for(int k = 0; k <n; k++){
            cin >> v;
            y.push_back(v);
        }
        sort(y.begin(),y.end());
        sort(x.begin(),x.end());
        auto y_b = y.begin(), x_e = (x.end() - 1);

        while(y_b != y.end()){
            s += (*x_e)*(*y_b);
            x_e --;
            y_b++;
        }
        cout << "Case #"<<i+1<<": " << s << endl;
    }
        

}