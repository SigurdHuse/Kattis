#include <iostream> 
#include <string>
using namespace std; 

int main()
{
    string s; 
    cin >> s;
    if(s.size() == 1){
        cout << "no hiss";
        return 0;
    }
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 's'){
            if(s[i+1]=='s'){
                cout << "hiss";
                return 0;
            }
        }
    }
    cout << "no hiss";
}