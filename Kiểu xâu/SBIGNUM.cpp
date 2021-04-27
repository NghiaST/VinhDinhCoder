#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
int n, m;
long long a[100005], res, k, x;
string s, q, sum;
int main()
{
    cin >> s >> q;
	while (s.length() < q.length()) s = '0' + s;
	while (s.length() > q.length()) q = '0' + q;
	REPD(i, s.length(), 0) {
        k += s[i] + q[i] - 96;
        sum = (char) (k%10 + '0') + sum;
        k /= 10;
	}
	if (k) sum = '1' + sum;
	cout << sum;
}
    
