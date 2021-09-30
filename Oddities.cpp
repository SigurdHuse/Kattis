#include <iostream> 
using namespace std; 

int main()
{
    int x;
    cin >> x;
    while(cin >> x){
        if(x % 2){
            cout << x <<" is odd"<<"\n";
        }else{
            cout << x <<" is even"<<"\n";
        }
    }
}