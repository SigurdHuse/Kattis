#include <iostream> 
using namespace std; 

int main()
{
    int tmp, cnt = 0;
    cin >> tmp;
    while(cin >> tmp){
        if(tmp < 0){
            cnt ++;
        }
    }
    cout << cnt;

}