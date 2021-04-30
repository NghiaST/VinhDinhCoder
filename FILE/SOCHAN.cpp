#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
long long n, x, sum;
long long a[100005];
int main()
{
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (x % 2 == 0) a[sum++] = x;
	}
	cout << sum << '\n';
	REP(i, 0, sum) cout << a[i] << ' ';
}
    
