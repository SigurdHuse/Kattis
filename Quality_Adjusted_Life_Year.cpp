#include <iostream> 
using namespace std; 

int main()
{
    double N = 0, q, y;
    cin >> q;
    while(cin >> q >> y){
        N += q * y;
    }
    cout << N;
}