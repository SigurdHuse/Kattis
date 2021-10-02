#include <iostream>
#include <algorithm>
#include <string> 
using namespace std; 

/*
Mirko has a younger brother, Filip, who just started going to school and is having trouble with numbers. To help him get the hang of the number scale, his teacher writes two three-digit numbers. She asks Filip to compare those numbers, but instead of interpreting them with the leftmost most significant digit, he needs to interpret them the other way around, with the most significant digit being the rightmost one. He then has to tell the teacher the larger of the two numbers.

Write a program that will check Filip’s answers.
Input

The first and only line of input contains two three-digit numbers, A
and B. A and B

will not be equal and will not contain any zeroes.
Output

The first and only line of output should contain the larger of the numbers in the input, compared as described in the task. The number should be written reversed, to display to Filip how he should read it.
*/

int main()
{
    int one, two;
    cin >> one >> two;
    string s_1 = to_string(one), s_2 = to_string(two);
    //cout << s_1 << "  " << s_2 << endl;
    reverse(s_1.begin(), s_1.end());
    reverse(s_2.begin(), s_2.end());
    if(stoi(s_1) > stoi(s_2)){
        cout << s_1;
    }else{
        cout << s_2;
    }
}