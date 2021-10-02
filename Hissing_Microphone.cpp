#include <iostream> 
#include <string>
using namespace std; 

/*
A known problem with some microphones is the “hissing s”. That is, sometimes the sound of the letter s is particularly pronounced; it stands out from the rest of the word in an unpleasant way.

Of particular annoyance are words that contain the letter s twice in a row. Words like amiss, kiss, mississippi and even hiss itself.
Input

The input contains a single string on a single line. This string consists of only lowercase letters (no spaces) and has between 1
and 30

characters.
Output

Output a single line. If the input string contains two consecutive occurrences of the letter s, then output hiss. Otherwise, output no hiss.
*/

int main()
{
    string s; 
    cin >> s;
    if(s.size() == 1){
        cout << "no hiss";
        return 0;
    }
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 's'){
            if(s[i+1]=='s'){
                cout << "hiss";
                return 0;
            }
        }
    }
    cout << "no hiss";
}