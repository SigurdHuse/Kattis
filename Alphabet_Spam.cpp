#include <iostream> 
#include <string>
#include <iomanip>
using namespace std; 

/*
About 90 percent of the 300 billion emails sent every day are spam. Thus, a fast spam detection mechanism is crucial for large email providers. Lots of spammers try to circumvent spam detection by rewriting words like “M0n3y”, “Ca$h”, or “Lo||ery”.

A very simple and fast spam detection mechanism is based on the ratios between whitespace characters, lowercase letters, uppercase letters, and symbols. Symbols are defined as characters that do not fall in one of the first three groups.
Input

The input consists of:

    one line with a string consisting of at least 1

and at most 100000

    characters.

A preprocessing step has already transformed all whitespace characters to underscores (_), and the line will consist solely of characters with ASCII codes between 33 and 126 (inclusive).
Output

Output four lines, containing the ratios of whitespace characters, lowercase letters, uppercase letters, and symbols (in that order). Your answer should have an absolute or relative error of at most 10−6
.
*/

int main()
{
    string sentence;
    long double up = 0, lower =0, white = 0, symbol = 0;
    int tmp;
    cin >> sentence;
    long double other = sentence.size();
    for(char i : sentence){
        tmp = (int)i;
        //cout << i <<tmp <<endl;
        if(tmp >= 65 and tmp <= 90){
            up++;
        }
        else if(tmp >= 97 and tmp <= 122){
            lower++;
        }
        else if(tmp == 95){
            white++;
        }
        else{
            symbol ++;
        }
    }

    cout << setprecision(20) << white/other << "\n";
    cout << setprecision(20) << lower/other << "\n";
    cout << setprecision(20) << up/other << "\n";
    cout << setprecision(20) << symbol/other << "\n";
}