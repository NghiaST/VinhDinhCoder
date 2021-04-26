#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, m, k, x;
long long res;
int main()
{
	cin >> n;
	FOR(i,1,n) {
		res = 0;
		FOR(j,1,n) {
			cin >> x;
			if (x%2 == 0) res += x;
		}
		cout << res << '\n';
	}
}
    
