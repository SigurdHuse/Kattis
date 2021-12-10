#include <iostream> 
#include <iomanip>  
using namespace std; 

/*
Lotte is competing in a programming contest. Her team has already solved k out of the n problems in the problem set, but as the problems become harder, she begins to lose focus and her mind starts to wander.

She recalls hearing the judges talk about the difficulty of the problems, which they rate on an integer scale from 0
to 100, inclusive. In fact, one of the judges said that “the problem set has never been so tough, the average difficulty of the problems in the problem set is d

!”

She starts thinking about the problems her team has solved so far, and comes up with an estimate s

for their average difficulty. In hope of gaining some motivation, Lotte wonders if she can use this information to determine the average difficulty of the remaining problems.
Input

The input consists of:

    One line with two integers n

and k (2≤n≤106, 0<k<n

), the total number of problems and the number of problems Lotte’s team has solved so far.

One line with two integers d
and s (0≤d,s≤100

    ), the average difficulty of all the problems and Lotte’s estimate of the average difficulty of the problems her team has solved.

Output

Assuming Lotte’s estimate is correct, output the average difficulty of the unsolved problems, or “impossible” if the average difficulty does not exist. Your answer should have an absolute or relative error of at most 10−6
.
*/

int main()
{
    double n, k, d, s;
    cin >> n >> k >> d >>s;

    double ans = s + (d-s)*n/(n - k);
    if(ans > 100.0 | ans < 0.0){
        cout << "impossible" << endl;
    } 
    else{
        cout << setprecision(16) <<ans << endl;
    }
    
}