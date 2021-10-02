#include <iostream>
#include <unordered_set> 
using namespace std; 

/*
You are hosting a party with G
guests and notice that there is an odd number of guests! When planning the party you deliberately invited only couples and gave each couple a unique number C

on their invitation. You would like to single out whoever came alone by asking all of the guests for their invitation numbers.
Input

The first line of input gives the number of cases, N
. N

test cases follow. For each test case there will be:

    One line containing the value G

the number of guests.

One line containing a space-separated list of G
integers. Each integer C

    indicates the invitation code of a guest.

You may assume that 1≤N≤50,0<C<231,3≤G<1000

.
Output

For each test case, output one line containing “Case #x
: ” followed by the number C of the guest who is alone.
*/

int main()
{
    int N, G, C;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> G;
        unordered_set<int> numbers;
        for(int k = 0; k <G; k++){
            cin >> C;
            if(numbers.count(C) == 1){
                numbers.erase(C);
            }else{
                numbers.insert(C);
            }
        }
        cout << "Case #" << i << ": "<<*begin(numbers)<<"\n";
    }
}