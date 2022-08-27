#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

vector<vector<double>> npr(21, vector<double>(21));

void fill(){
	npr[0][0] = 1;
	for(int n = 1; n < 21; ++n){
		for(int k = 0; k <= n; ++k){
			if(k == 0 || k == n) npr[n][k] = 1;
			else npr[n][k] = npr[n-1][k] + npr[n-1][k-1];
		}
	}
}

void solve(){
	double r, s, x, y, w;
	cin >> r >> s >> x >> y >> w;
	double exp = 0, p = (s - r + 1)/s;
	
	for(double k = x; k <= y; ++k){
		exp += npr[y][k]*pow(p,k)*pow(1-p,y-k);
	}
	cout << (1.0/exp >= w ? "no" : "yes") << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill();
	while(tt--){
		solve();
	}
}

