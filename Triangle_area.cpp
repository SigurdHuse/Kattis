#include <iostream> 
#include <iomanip> 
using namespace std; 

/*
Per-Magnus managed to solve his addition homework thanks to you, but now he is unfortunately posed with an even greater problem.

He has been given a triangular cake by his mother, and wonders what the area of it is. It turns out Per-Magnus forgot the formula for computing it!

Per-Magnus managed to measure the base and height of the triangle with a ruler. Given this, compute the area of the triangular cake.
Input

The input consists of a single line with two integers 1≤h≤1000
and 1≤b≤1000

, the height and base of the triangle.
Output

Output a single number, the area of the triangle. Your answer must be correct within an absolute or relative error of 10−7
.
*/

int main()
{
    long double a, b;
    cin >> a >> b;
    cout << setprecision(16)<< a/(2.0*b);
}