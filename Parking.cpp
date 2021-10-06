#include <iostream> 
using namespace std; 

/*
When shopping on Long Street, Michael usually parks his car at some random location, and then walks to the stores he needs. Can you help Michael choose a place to park which minimises the distance he needs to walk on his shopping round?

Long Street is a straight line, where all positions are integer. You pay for parking in a specific slot, which is an integer position on Long Street. Michael does not want to pay for more than one parking though. He is very strong, and does not mind carrying all the bags around.
Input

The first line of input gives the number of test cases, 1≤t≤100
. There are two lines for each test case. The first gives the number of stores Michael wants to visit, 1≤n≤20, and the second gives their n integer positions on Long Street, 0≤xi≤99

.
Output

Output for each test case a line with the minimal distance Michael must walk given optimal parking.
*/

int main()
{
    int n, small, large, tmp, stores;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> stores;
        small = 100; large= 0;
        for(int k = 0; k < stores; k++){
            cin >> tmp;
            large = max(large, tmp);
            small = min(small, tmp);
        }
        cout << (large- small)*2<<"\n";
    }
}