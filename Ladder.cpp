#include <iostream> 
#include <math.h>
using namespace std; 

/*
You are attempting to climb up the roof to fix some leaks, and have to go buy a ladder. The ladder needs to reach to the top of the wall, which is h centimeters high, and in order to be steady enough for you to climb it, the ladder can be at an angle of at most v

degrees from the ground. How long does the ladder have to be?
Input

The input consists of a single line containing two integers h
and v, with meanings as described above. You may assume that 1≤h≤10000 and that 1≤v≤89

.
Output

Write a single line containing the minimum possible length of the ladder in centimeters, rounded up to the nearest integer.
*/

#define PI 3.14159265

int main()
{
    int h, v;
    cin >> h >> v;
    int res = ceil(h / sin(v*PI/180));
    cout << res;
}