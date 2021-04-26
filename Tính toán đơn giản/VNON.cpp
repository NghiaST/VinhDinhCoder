#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
long long mod = 1e9;
long long f[2], a[2], res[6], h, R;

string operator * (string x, long long y) {
    string z = "";
    int nho = 0;
    for(int i = x.size() - 1; i >= 0; i--) {
        nho += (x[i] - '0') * y;
        z = (char) (nho % 10 + '0') + z;
        nho /= 10;
    }
    if (nho) z = to_string(nho) + z;
    return z;
}

int main()
{
	cin >> h >> R;
	string Q = "104719755119659775";
	Q = Q * h * R * R;
    for(int i = 0; i < Q.size() - 17; i++) cout << Q[i];
    cout << '.';
    for(int i = Q.size() - 17; i < Q.size() - 9; i++) cout << Q[i];
}
