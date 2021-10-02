#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std; 

/*
You will be given three integers A, B and C. The numbers will not be given in that exact order, but we do know that A is less than B and B less than C

. In order to make for a more pleasant viewing, we want to rearrange them in a given order.
Input

The first line contains the three positive integers A
,B and C, not necessarily in that order. The three numbers will be less than or equal to 100

The second line contains three uppercase letters ’A’, ’B’ and ’C’ (with no spaces between them) representing the desired order.
Output
Output A, B and C in the desired order on a single line, separated by single spaces.
*/

int main()
{
    vector<int> numbers;
    int tmp;
    for(int i = 0; i < 3; ++i){
        cin >> tmp;
        numbers.push_back(tmp);
    }
    sort(numbers.begin(),numbers.end());

    char c;
    while(cin >> c){
        if(c == 'A'){
            cout << numbers[0] << " ";
        }
        else if(c == 'B'){
            cout << numbers[1] << " ";
        }
        else{
            cout << numbers[2] << " ";
        }
    }
}