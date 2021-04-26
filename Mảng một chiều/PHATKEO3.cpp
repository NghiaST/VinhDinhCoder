#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005], b[100005];
long long res, x, y, sum;
int main()
{
	cin >> n;
	cout << n + n*(n-1)/2*3 << '\n';
	x = -2;
	while (n--) cout << (x += 3) << ' ';
}
    
