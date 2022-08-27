#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int n; 

bool check_board(int x, int y, const vector<vector<bool>>& board){
	for(int xx = x+1, yy = y+1; xx < n && yy < n; ++xx, yy++){
		if(board[xx][yy]) return 1;
	}
	
	for(int xx = x-1, yy = y-1; xx >= 0 && yy >= 0; --xx, yy--){
		if(board[xx][yy]) return 1;
	}
	
	for(int xx = x-1, yy = y+1; xx >= 0 && yy < n; --xx, yy++){
		if(board[xx][yy]) return 1;
	}
	
	for(int xx = x+1, yy = y-1; xx < n && yy >= 0; ++xx, yy--){
		if(board[xx][yy]) return 1;
	}
	
	for(int xx = x+1; xx < n; ++xx) if(board[xx][y]) return 1;
	for(int xx = x-1; xx >= 0; --xx) if(board[xx][y]) return 1;
	for(int yy = y+1; yy < n; ++yy) if(board[x][yy]) return 1;
	for(int yy = y-1; yy >= 0; --yy) if(board[x][yy]) return 1;
	
	
	return 0;
}


void solve(){
	cin >> n;
	vector<vector<bool>> v(n, vector<bool>(n));
	int x,y;
	for(int i = 0;i < n; ++i){
		cin >> x >> y;
		v[x][y] = 1;
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(v[i][j]){
				if(check_board(i,j,v)){
					cout << "INCORRECT" << endl;
					return;
				}
			}
		}
	}
	cout << "CORRECT" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

