#include <iostream> 
using namespace std; 

int main()
{
    int X, N, tmp, total = 0;
    cin >> X >> N;
    while(cin >> tmp){
        total += X - tmp;
    }
    cout << total + X;
}