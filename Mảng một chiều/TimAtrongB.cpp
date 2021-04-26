#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
long long n, a[100005], b[100005];
long long res, x, y, sum;
int main()
{
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	FOR(i, 1, n) {
		cin >> b[i];
	}
	int x = 1;
	for(int i = 1; i <=n; i++) {
		while (x < n && a[i] > b[x]) x++;
		if (a[i] == b[x]) res++;
	}
	cout << res;
}
    
