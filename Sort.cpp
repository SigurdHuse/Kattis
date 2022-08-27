#include <iostream>
#include <map>
#include <algorithm> 
using namespace std; 

int main()
{
    map <long int, int> m;
    int n;
    long long int tmp;
    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> tmp;
        if(m.count(tmp)){
            m[tmp] ++;
        }
        else{
            m[tmp] = 1;
        }
    }
    sort(m.begin(),m.end());
    for()
}