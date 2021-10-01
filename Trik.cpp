#include <iostream> 
#include <string>
#include <algorithm>
using namespace std; 

int main()
{   
    string moves;
    cin >> moves;
    bool arr[3]{1,0,0};

    for(char i : moves){
        if(i == 'A'){
            swap(arr[0], arr[1]);
        }
        else if(i == 'B'){
            swap(arr[1], arr[2]);
        }
        else{
            swap(arr[0], arr[2]);
        }
    }
    
    
    auto index = find(arr, arr + 3, 1);
    cout << distance(arr, index) + 1;
}