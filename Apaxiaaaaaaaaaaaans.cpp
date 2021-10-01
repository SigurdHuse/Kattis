#include <iostream> 
#include <string>
using namespace std; 

int main()
{
    string name;
    char last = 'A';
    cin >> name;

    int index = 0, cnt;
    auto i = name.begin();

    while((i + 1) != name.end()){
        cnt = 0;
        while(*i == last){
            cnt ++;
            if((i + 1) != name.end()){
                i++;
            } 
        }
        name.erase(i -cnt,i);
        last = *i;
        if((i + 1) != name.end()){
            i++;
        }
    }
    
    while(*i == last){ 
        name.erase(i-1,i);
        if(i != name.end()){
            i ++;
        } 
        
    }
    cout<<name<<endl;
    /*
    for(auto i = name.begin(); i != name.end(); ++i){
        cnt = 0;
        while(*i == *(i + 1)){
            cnt ++;
            if(i != name.end()){
                i++;
            }
        }   
        name.erase(i -cnt, i);   
    }
    */
    
    
}  