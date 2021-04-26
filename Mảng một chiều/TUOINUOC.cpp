#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005], res, k;
int main()
{
	cin >> k >> n;
	FOR(i,1,n) cin >> a[i];
	res = max(a[1], k - a[n] + 1);
	FOR(i,2,n) res = max(res, (a[i] - a[i-1]) / 2 + 1);
	cout << res;
}
    
