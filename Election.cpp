#include <iostream>
#include <unordered_map> 
#include <string>
#include <tuple>
using namespace std; 

/*
Canada has a multi-party system of government. Each candidate is generally associated with a party, and the party whose candidates win the most ridings generally forms the government. Some candidates run as independents, meaning they are not associated with any party. Your job is to count the votes for a particular riding and to determine the party with which the winning candidate is associated.
Input

The first line of input contains a positive integer n
satisfying 2≤n≤20, the number of candidates in the riding. n

pairs of lines follow: the first line in each pair is the name of the candidate; the second line is the name of the party, or the word “independent” if the candidate has no party. No candidate name is repeated and no party name appears more than once in this part of the input.

The next line contains a positive integer m≤10000
, and is followed by m

lines each indicating the name of a candidate for which a ballot is cast. Any names not in the list of candidates should be ignored.

Each name line consists of at least 1
and at most 80 characters, uses only ASCII characters 32 to 126

(inclusive), and does not contain any leading or trailing blanks.
Output

Output consists of a single line containing one of:

    The name of the party with whom the winning candidate is associated, if there is a winning candidate and that candidate is associated with a party.

    The word “independent” if there is a winning candidate and that candidate is not associated with a party.

    The word “tie” if there is no winner; that is, if no candidate receives more votes than every other candidate.

*/

int main()
{
    unordered_map<string, tuple<int,string>> m;
    int n, mx = 0;
    bool tie = 0;
    char name[256], party[256]; 
    string winner;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin.getline(name,256);
        cin.getline(party,256);
        cout << name << party<<endl;
        m[name] = make_tuple(0,party);
    }
    cin >> n;
    for(int k = 0; k< n; k++){
        cin.getline(name,256);
        get<0>(m[name]) += 1;
        if(get<0>(m[name]) > mx){
            mx = get<0>(m[name]);
            winner = name;
            tie = 0;
        }
        else if(get<0>(m[name]) == mx){
            if(name == winner){
                tie = 1;
            }
        }
    }
    if(tie){
        cout << "tie" <<endl;
    }
    else{
        cout << get<1>(m[winner])<< endl;
    }
}