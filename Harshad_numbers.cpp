#include <iostream> 
#include <string>
using namespace std; 

/*
We’re all familiar with harshad numbers. For this problem, you will ... what’s that? You aren’t familiar with harshad numbers? They’re also known as Niven numbers – does that ring a bell?? Anything???

Well, it’s a simple enough concept. A harshad number is a number which is evenly divisible by the sum of its digits. For example, 24
is a harshad number: the sum of its digits is 2+4=6 and 24 is divisible by 6. 156 is also a harshad number, since 1+5+6=12 and 156=(12)(13). 157 is NOT a harshad number since it is not divisible by 1+5+7=13

.

OK, let’s start over.

We’re all familiar with harshad numbers. For this problem, you will be given a number n
and must find the smallest harshad number ≥n

.
Input

Input consists of a single line containing a positive integer n≤1000000000

.
Output

Display the smallest harshad number greater than or equal to n
.
*/

int digit_sum(long int n){
    string str = to_string(n);
    int s = 0;
    for(char i : str){
        s += (int)i - 48;
    }
    return s;
}


int main()
{ 
    long int n;
    cin >> n;
    while(2 > 1){
        if(n % digit_sum(n) == 0){
            cout << n << endl;
            return 0;
        }
        else{
            n++;
        }
    }
}