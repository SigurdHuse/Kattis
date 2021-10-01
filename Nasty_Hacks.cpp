#include <iostream> 
using namespace std; 

int main()
{
    int r,e,c,s;
    cin >> r;
    while(cin >> r >>e >> c){
        if(e - c > r){
            cout << "advertise"<<"\n";
        }
        else if(e- c == r){
            cout << "does not matter"<<"\n";
        }
        else{
            cout << "do not advertise"<<"\n";
        }
    }
}