#include <iostream> 
using namespace std; 

/*
The factorial of N, written as N!, is defined as the product of all the integers from 1 to N. For example, 3!=1×2×3=6

.

This number can be very large, so instead of computing the entire product, just compute the last digit of N!
(when N! is written in base 10

).
Input

The first line of input contains a positive integer 1≤T≤10
, the number of test cases. Each of the next T lines contains a single positive integer N. N is at most 10

.
Output

For each value of N, print the last digit of N!.
*/

int main()
{
    int T, N;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> N;
        if(N == 0 || N == 1){
            cout << 1 << "\n";
        }
        else if(N == 2){
            cout << 2 << "\n";
        }
        else if(N == 3){
            cout << 6 << "\n";
        }
        else if(N == 4){
            cout << 4 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
}