#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, m, a[100005], res, k, x;
int main()
{
	cin >> n >> m;
	FOR(i,1,n) FOR(j,1,m) {
		cin >> x;
		if (x%3==0) res++;
	}
	cout << res;
}
    
