#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005], res, x, y;
int main()
{
	cin >> n;
	while (n--) {
		cin >> x;
		if ((x & 1) == 0) res++;
	}
	cout << res;
}
    
