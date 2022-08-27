#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502;

void solve(){
	double a, r; cin >> a >> r;
	r /= PI;
	r /= 2;
	double max_area = PI * r * r;
	
	cout << (a <= max_area ? "Diablo is happy!" : "Need more materials!") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

