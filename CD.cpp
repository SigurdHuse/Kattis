#include <iostream> 
#include <unordered_set>
using namespace std; 

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