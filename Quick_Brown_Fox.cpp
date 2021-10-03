#include <iostream>
#include <string>
#include <bitset>
#include <ctype.h>
#include <stdio.h>
#include <algorithm>   
using namespace std; 

int main()
{
    int N;
    cin >> N;

    string word,missing;

    for(int i = 0; i < N; i++){
        bitset<128> values;
        word = ""; missing = "";
        
        getline(cin, word);
        //cout << "The word is:   "<<word << "DNE" << "\n";
        for(char o : word){
            if(isalpha(o)){
                values[(int)tolower(o) - '0'] = 1;
            }
        }
        //cout << values;
        for(int n = 97; n <= 122; n++){
            if(values[n] == 1){
                missing += (char)n + '0';
            }
        }
        sort(missing.begin(), missing.end());
        if(missing == ""){
            cout << "pangram" << "\n";
        }
        else{
            cout << "missing "<< missing << "\n";
        }
        
        
    }
    
}