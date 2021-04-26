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
	sort(a+1, a+n+1);
	FOR(i, 1, n) cout << a[i] <<' ';
}
    
