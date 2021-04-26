#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005];
long long res, x, y, d1;
int main()
{
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	FOR(i, 1, n) if (a[i] % 2 == 0) x = a[i]; else y = a[i], d1++;
	if (d1 > 1) cout << x; else cout << y;
}
    
