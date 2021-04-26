#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005];
long long res, x, y;
int main()
{
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	cin >> x;
	FOR(i, 1, n) if (x == a[i]) { cout << i; return 0; }
}
    
