#include <iostream>
#include <algorithm>
#include <string> 
using namespace std; 

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