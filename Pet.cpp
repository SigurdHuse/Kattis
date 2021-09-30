#include <iostream> 
using namespace std; 

int main()
{
    int s, winner, max = 0, tmp;
    for(int i = 1; i < 6; i++){
        s = 0;
        for(int k = 1; k < 5; k ++){
            cin >> tmp;
            s += tmp;
        }
        if(s > max){
            max = s;
            winner = i;
        }
    }
    cout << winner << " " << max;
}