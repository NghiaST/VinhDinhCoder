#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, m;
long long a[100005], res, k, x;
int main()
{
	cin >> n >> m;
	FOR(i,1,n) FOR(j,1,m) cin >> a[(i-1)*m+j];
	sort(a+1, a+m*n+1);
	FOR(i,1,n) {
		FOR(j,1,m) cout << a[(i-1)*m+j] << ' ';
		cout << '\n';
	}
}
    
