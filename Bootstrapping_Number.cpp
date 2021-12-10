#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

/*
Neelix has been working on making the Altonian warp bubble power itself up. While waiting for the system checks to complete, he saw a number on his screen and wondered if there is a number that powers itself up to this number.
Input

The first and only input line consists of a single integer n

, the number Neelix saw on his screen.
Output

Output the number x
, where xx=n. Your answer must have an absolute or relative error of at most 10−6

.
Limits

    1≤n≤10000000000
*/

long double g(long double x, long double n){
    return x*log(x) - n;
}

int main()
{
    long double n;
    long double x;
    cin >> n;
    x = sqrt(n);
    n = log(n);
    for(int i = 0;i < 10000; i++){
        x = x - 0.01*g(x, n);
    }
    cout << setprecision(16) <<x << endl;
}