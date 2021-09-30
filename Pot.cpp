#include <iostream> 
#include <string>
#include <cmath>
using namespace std; 

long int converter(int x){
    string str = to_string(x);
    int power = str.back() - '0';
    int number = stoi(str.substr(0,str.size() - 1));
    return pow(number,power);
}
    


int main()
{
    int x;
    long long int s = 0;
    cin >> x;
    while(cin >> x){
        s += converter(x);
    }
    cout << s;
}