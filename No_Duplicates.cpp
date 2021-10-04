#include <iostream>
#include <unordered_set>
#include <string>
#include <string.h> 
using namespace std; 

int main()
{
    string sentence, word = "";
    getline(cin, sentence);
    unordered_set<string> s;
    for(auto i : sentence){
        if(i != ' '){
            word += i;
        }
        else{
            if(s.count(word) > 0){
                cout << "no";
                return 0;
            }
            s.insert(word);
            word = "";
        }
        
    }
    cout << "yes";

}