#include <iostream> 
#include <string>
using namespace std; 

/*
The impossible has happened. Bear G. has fallen into his own trap. Lured by a delicious box of Domaćica, without even thinking, he rushed and fell into his trap. In order to get out of the trap, he must solve the following task with your help. You are given three integers L, D and X

.

    determine the minimal integer N

such that L≤N≤D and the sum of its digits is X

determine the maximal integer M
such that L≤M≤D and the sum of its digits is X

Bear will be able to escape from the trap if he correctly determines numbers N
and M. The numbers N and M

will always exist.
Input

The first line of input contains the integer L
(1≤L≤10000), the number from the task. The second line of input contains the integer D (1≤D≤10000, L≤D), the number from the task. The third line of input contains the integer X (1≤X≤36

), the number from the task.
Output

The first line of output must contain the integer N
from the task. The second line of output must contain the integer M from the task.
*/

int digit_sum(int x){
    string st = to_string(x);
    int s = 0;
    for(int i = 0; i < st.size(); i ++){
        s += (int)st[i] - '0';
    }
    return s;
}

int main()
{
    int L, D, X;
    cin >> L >> D >>X;
    for(int N = L; N <= D; ++N){
        if(digit_sum(N) == X){
            cout << N <<"\n";
            break;
        }
    }
    for(int M = D; M >= L; --M){
        if(digit_sum(M) == X){
            cout << M <<"\n";
            break;
        }
    }
}