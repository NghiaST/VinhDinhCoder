#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
using namespace std;
long long n, x;
long long a[25];
int main()
{
	a[0] = 1;
	FOR(i, 1, 20) a[i] = a[i-1]*i;
	cin >> n;
	while (n--) {
		cin >> x;
		cout << a[x] << '\n';
	}
}
    
