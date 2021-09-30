#include <iostream> 
#include <set>
#include <string>
using namespace std; 

int main()
{
    int cases, number, city_count;
    string city;
    set<string> s;

    cin >> cases;


    for(int i = 0; i < cases; i++){
        cin >> number;
        city_count = 0;
        for(int k = 0; k < number; k++){
            cin >> city;
            if(s.count(city) == 0){
                city_count ++;
                s.insert(city);
            }
        }
        s.clear();
        cout << city_count<<"\n";
    }
}