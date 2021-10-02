#include <iostream> 
#include <cmath>
using namespace std; 

/*


Young Mirko threw matches all over the floor of his room.

His mom did not like that and ordered him to put all the matches in a box. Mirko soon noticed that not all of the matches on the floor fit in the box, so he decided to take the matches that don’t fit and throw them in the neighbour’s garbage, where his mom (hopefully) won’t find them.

Help Mirko determine which of the matches fit in the box his mom gave him. A match fits in the box if its entire length can lie on the bottom of the box. Mirko examines the matches one by one.
Input

The first line of input contains an integer N
(1≤N≤50), the number of matches on the floor, and two integers W and H, the dimensions of the box (1≤W≤100, 1≤H≤100

).

Each of the following N
lines contains a single integer between 1 and 1000

(inclusive), the length of one match.
Output

For each match, in the order they were given in the input, output on a separate line “DA” if the match fits in the box or “NE” if it does not.
*/


int main()
{
    int N, W, H;
    cin >> N >> W >> H;
    int max = sqrt(W*W + H*H);
    for(int i = 0; i < N; ++i){
        cin >> W;
        if(W <= max){
            cout << "DA"<<"\n";
        }
        else{
            cout << "NE"<<"\n";
        }
    }
}