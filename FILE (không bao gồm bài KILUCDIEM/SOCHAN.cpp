#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
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
