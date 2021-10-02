#include <iostream> 
using namespace std; 

/*
According to Wikipedia, FizzBuzz is a group word game for children to teach them about division. This may or may not be true, but this question is generally used to torture screen young computer science graduates during programming interviews.

Basically, this is how it works: you print the integers from 1
to N, replacing any of them divisible by X with Fizz or, if they are divisible by Y, with Buzz. If the number is divisible by both X and Y

, you print FizzBuzz instead.

Check the samples for further clarification.
Input

Input contains a single test case. Each test case contains three integers on a single line, X
, Y and N (1≤X<Y≤N≤100

).
Output

Print integers from 1
to N in order, each on its own line, replacing the ones divisible by X with Fizz, the ones divisible by Y with Buzz and ones divisible by both X and Y with FizzBuzz.
*/


int main()
{
    int X, Y, N;
    cin >> X >> Y >> N;
    for(int i = 1; i<=N; ++i){
        if(i % X == 0){
            if(i % Y == 0){
                cout << "FizzBuzz"<<"\n";
            }else{
                cout << "Fizz" <<"\n";
            }
        }
        else if(i % Y == 0){
            cout << "Buzz" <<"\n";
        }
        else{
            cout << i <<"\n";
        }
    }
}