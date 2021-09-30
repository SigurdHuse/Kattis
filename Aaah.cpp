#include <iostream> 
#include <string>
using namespace std; 

int main()
{
    string now, wanted;
    cin >> now >> wanted;
    if(now.size() >= wanted.size()){
        cout << "go";
    }else{
        cout << "no";
    }
}