#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	sort(all(v));
	
	priority_queue<int, vector<int>, greater<int>> q;
	
	int ans = 0;
	q.push(v[0].f + v[0].s);
	for(int i = 1; i < n; ++i){
		//cout << v[i].f << " " << q.top() << endl;
		while(!q.empty() && v[i].f > q.top() + m){
			q.pop();
		}
		if(!q.empty() && v[i].f >= q.top()){
			ans++;
			q.pop();
		}
		//cout << v[i].f << " " << q.top() << endl;
		q.push(v[i].f + v[i].s);
	}
	
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

