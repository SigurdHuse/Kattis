#include <iostream> 
using namespace std; 

int main()
{
    int articles, goal;
    cin >>articles >> goal;
    if(articles == 1){
        cout << goal;
        return 0;
    }
    int start = articles * goal;

    while(start % articles != 1){
        start --;
    } 
    cout << start;
}