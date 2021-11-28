#include <iostream>
#include <string> 
using namespace std; 

int main()
{
    int tmp;
    cin >> tmp;
    string s = to_string(tmp);
    cout << s[1] << s[0];
}