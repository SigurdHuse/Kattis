#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, m; cin >> n >> m;
	ll ans = 0;
	for(ll i = 1; i*i <= m; ++i){
		if(m % i == 0 && m/i <= n){
			//cout << i << endl;
			if(i == m/i) ans++; 
			else ans+= 2;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

