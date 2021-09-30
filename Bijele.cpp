#include <iostream> 
using namespace std; 

int main()
{
    int cnt = 0, in[6], tmp;
    int arr[6]{1,1,2,2,2,8};
    while(cin >> tmp){
        in[cnt] = tmp;
        cnt ++;
    }
    for(int i = 0; i < 6; i++){
        cout << arr[i] - in[i] << " "; 
    }
}