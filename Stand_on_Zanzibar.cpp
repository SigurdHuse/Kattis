#include <iostream> 
using namespace std; 

int main()
{
    int T, tmp, s, other;
    cin >> T;
    for(int i = 0;i < T; i++){
        s = 1; tmp = 1; other = 0;
        while(tmp != 0){
            cin >> tmp;
            if(tmp > 2*s){
                other += tmp - 2*s;
                s = tmp;
            }
            else{
                s = tmp;
            }
        }
        cout << other << "\n";
    }
}