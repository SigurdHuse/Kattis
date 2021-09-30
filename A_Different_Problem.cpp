#include <iostream> 
using namespace std; 

long long int logic(long long int one, long long int two){
    if(one > two){
        return one - two;
    }else{
        return two -one;
    }
}

int main()
{
    unsigned long long int one, two;
    while(cin >> one >> two){
        cout << logic(one, two)<<"\n";
    }
}