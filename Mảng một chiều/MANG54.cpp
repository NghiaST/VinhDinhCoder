#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[1000005], res, x, y;
int main()
{
	cin >> n; res = -2e9;
	FOR(i, 1, n) {
		cin >> x;
		if (res < x) res = x, y = i;
	}
	cout << res << ' ' << y;
}
    
