#include <iostream> 
using namespace std; 

int main()
{
    int board[4][4];
    int tmp;
    for(int i = 0;i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> tmp;
            board[i][j] = tmp;
        }
    }
    cin >> tmp;
    if(tmp == 3){ //down
        for(int i = 0; i < 4; i++){
            int j = 0;
            while(j < 3){
                if(board[j][i] == board[j+1][i]){
                    board[j+1][i] *= 2;
                    board[j][i] = 0;
                    j += 2;
                }
                j++;
            }
        }
    }

    for(int i = 0;i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}