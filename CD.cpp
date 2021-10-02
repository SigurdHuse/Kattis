#include <iostream> 
#include <unordered_set>
using namespace std; 

/*
Jack and Jill have decided to sell some of their Compact Discs, while they still have some value. They have decided to sell one of each of the CD titles that they both own. How many CDs can Jack and Jill sell?

Neither Jack nor Jill owns more than one copy of each CD.
Input

The input consists of a sequence of test cases. The first line of each test case contains two positive integers N
and M, each at most one million, specifying the number of CDs owned by Jack and by Jill, respectively. This line is followed by N lines listing the catalog numbers of the CDs owned by Jack in increasing order, and M

more lines listing the catalog numbers of the CDs owned by Jill in increasing order. Each catalog number is a positive integer no greater than one billion. The input is terminated by a line containing two zeros. This last line is not a test case and should not be processed.
Output

For each test case, output a line containing one integer, the number of CDs that Jack and Jill both own.
*/

int main()
{
    long int N, M, tmp;
    cin >> N >> M;
    
    while(N > 0 || M > 0){
        int cnt= 0;
        unordered_set<int> s;
        for(int i = 0; i < N; i++){
            cin >> tmp;
            s.insert(tmp);
        }
        for(int k = 0; k <M; k++){
            cin >> tmp;
            if(s.count(tmp) == 1){
                cnt++;
            }
        } 
        cout << cnt << "\n";
        cin >> N >> M;
    }
        
}