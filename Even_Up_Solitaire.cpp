#include <iostream>
#include <vector> 
using namespace std; 

int main()
{
    int n, tmp, cnt = 1, last;
    cin >> n;
    cin >> last;
    for(int i = 0; i < n-1; i++){
        cin >> tmp;
        if(!(((last + tmp) % 2))){
            //cnt --;
            n--;
            cin >> last;
        }
        else{
            cnt ++;
            last = tmp;
        }
    }
    cout << cnt << endl;
}