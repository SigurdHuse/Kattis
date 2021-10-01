#include <iostream> 
#include <cmath>
using namespace std; 

long long int points(long long int n){
    if(n == 0){
        return 4;
    }
    if(n == 1){
        return 9;
    }
    return (points(n-1) - pow(2,n-2)*pow(2,n-2))*2 + pow(2,n-1)*pow(2,n-1);
}


int main()
{
    cout << points(2) << endl;
}