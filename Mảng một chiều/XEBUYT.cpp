#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005];
long long res, x, y, sum;
int main()
{
	cin >> n;
	FOR(i, 1, n) {
		cin >> x >> y;
		sum += y - x;
		res = max(res, sum);
	}
	cout << res;
}
    
