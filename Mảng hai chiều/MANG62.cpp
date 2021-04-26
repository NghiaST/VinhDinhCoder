#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, m, a[100005], res, k, x;
int main()
{
	cin >> n;
	FOR(i,1,n) {
		res = -2e9;
		FOR(j,1,n) {
			cin >> x;
			res = max(res, x);
		}
		 cout << res << '\n';
	}
}
    
