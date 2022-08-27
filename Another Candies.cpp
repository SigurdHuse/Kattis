#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n; cin >> n;
	ll tmp = n;
	ll a, s = 0;
	while(tmp--){
		cin >> a;
		s += a;
		s %= n;
	}
	cout << (s == 0 ? "YES" : "NO") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

