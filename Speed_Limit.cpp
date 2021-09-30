#include <iostream> 
using namespace std; 

int main()
{
    int n, t, last, s, speed;

    while(cin >> n){
        if(n == -1){
            return 0;
        }
        last = 0;
        s = 0;
        for(int i = 0 ; i < n; i++){
            cin >> speed >> t;
            s += speed* (t -last);
            last = t;
        }
        cout << s << " miles"<<"\n";
    }
}