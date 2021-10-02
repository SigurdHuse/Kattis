#include <iostream> 
using namespace std; 

/*
Write a program that computes the difference between non-negative integers.
Input
Each line of the input consists of a pair of integers. Each integer is between 0
and 1015
(inclusive). The input is terminated by end of file.
Output
For each pair of integers in the input, output one line, containing the absolute value of their difference.
*/


long long int logic(long long int one, long long int two){
    if(one > two){
        return one - two;
    }else{
        return two -one;
    }
}

int main()
{
    unsigned long long int one, two;
    while(cin >> one >> two){
        cout << logic(one, two)<<"\n";
    }
}