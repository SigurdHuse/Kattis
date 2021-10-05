#include <iostream> 
using namespace std; 

int main()
{
    int time = 0, last = 0, n, tmp;
    cin >> n;
    if(n % 2 == 1){
        cout << "Still Running";
        return 0;
    }
    else{
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(i % 2 == 0){
                last = tmp;
            }
            else{
                time += tmp - last;
            }
        }
         cout << time;
    }
}