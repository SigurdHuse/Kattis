#include <iostream> 
#include <iomanip> 
using namespace std; 

/*
A common method for determining your own heart rate is to place your index and third finger on your neck to the side of your windpipe. You then count how many beats you feel in a span of 15 seconds, multiply that number by four and that gives you a measure of your heart rate in beats per minute (BPM). This method gives a good estimate, but is not quite accurate. In general, if you measure b beats in p seconds the BPM is calculated as 60bp

.

For this problem, we assume that all heart rates are constant and do not change. If t
is the amount of time (in seconds) between each beat of your heart, we define your Actual Beats Per Minute (ABPM) as 60t

.
Input

The input starts with an integer N
(1≤N≤1000) indicating the number of cases to follow. Each of the next N lines specify one case, consisting of the integer b (2≤b≤1000) as well as p (0<p<1000) as described above. The value of p

is a real number specified to 4 decimal places.
Output

For each case, print on a single line the minimum possible ABPM, the calculated BPM, and the maximum possible ABPM, separated by a space. Your answer will be considered correct if its absolute or relative error does not exceed 10−4
.
*/

int main()
{
    int N, b;
    double p,t;
    cin>> N;
    for(int i = 0; i < N; i++){
        cin >> b >> p;
        t = 60/p;
        cout << setprecision(10) << 60*p/b <<" "<<60*b/p << " " << 60*b/t;
    }

}