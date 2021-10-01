#include <iostream> 
#include <cmath>
using namespace std; 

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