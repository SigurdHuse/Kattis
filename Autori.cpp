#include <iostream>
#include <string> 
using namespace std; 

int main()
{
    string in;
    cin >> in;
    string out = "";
    out += in[0];
    for(int i = 0; i < in.size(); ++i){
        if((int)in[i] == 45){
            out += in[i+1];
        }
    }
    cout << out;
}