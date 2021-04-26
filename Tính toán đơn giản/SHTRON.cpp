#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9;
long long f[2], a[2], res[3], x;
string Q;
int main()
{
	cin >> a[0];
	a[0] = a[0]*a[0];
	a[1] = a[0] / mod;
	a[0] %= mod;
	f[0] = 358979323;
	f[1] = 314159265;
	res[0] = a[0] * f[0];
	res[1] = a[1] * f[0] + a[0] * f[1];
	res[2] = a[1] * f[1];
	res[1] += res[0] / mod; res[0] %= mod;
	res[2] += res[1] / mod; res[1] %= mod;
	int n = 2; while (n > 0 && !res[n]) n--;
	Q = to_string(res[n]);
    while (n--) {
        string s = to_string(res[1]);
        while (s.size() < 9) s = '0' + s;
        Q += s;
    }
    long long v = 0;
    n = Q.size() - 17;
    for(int i=0; i<n; i++) v = v * 10 + Q[i] - '0';
    if (Q[n] >= '5') v++;
    cout << v;
}
