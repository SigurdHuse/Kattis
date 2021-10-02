#include <iostream>
#include <unordered_set> 
using namespace std; 

int main()
{
    int tmp;
    unordered_set<int> s;
    while(cin >> tmp){
        s.insert(tmp % 42);
    }
    cout << s.size();
}