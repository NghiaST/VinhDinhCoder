#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n;
double a[100005];
long long res, x, y;
int main()
{
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	a[0] = a[n+1] = 2e9;
	FOR(i, 1, n) if (a[i] < a[i-1] && a[i] < a[i+1]) res++;
	cout << res;
}
    
