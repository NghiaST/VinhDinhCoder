#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005];
long long res, x, y, minn = 1, maxx = 1;
int main()
{
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	FOR(i, 1, n) {
		if (a[i] < a[minn]) minn = i;
		if (a[i] > a[maxx]) maxx = i;
	}
	swap(a[minn], a[maxx]);
	FOR(i,1,n) cout << a[i] << ' ';
}
    
