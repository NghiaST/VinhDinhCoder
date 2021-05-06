#include <iostream>
#include <algorithm>
#include <cstring>
#define setBIT(x, i) (x|(1<<i))
#define getBIT(x, i) ((x>>i)&1)
using namespace std;

long long n, res, cnt, a[20], Q[32768];
bool avail[32768];
string s[32768];

void dp(int x, long long val, long long sum, int d) {
    if (x == n) {
        if (val || res > sum) return;
        if (res < sum) res = sum, cnt = 0;
        if (!avail[d]) {
            avail[d] = true;
            Q[cnt++] = d;
        }
        return;
    }
    dp(x+1, val, sum, setBIT(d, n-x-1));
    dp(x+1, val+a[x], sum+a[x], d);
    dp(x+1, val-a[x], sum+a[x], d);
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    dp(0,0,0,0);
    cout << res << '\n';
    if (Q[0] == 0) { cout << "OK"; return 0; }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) if (getBIT(Q[i], n-j-1)) s[i] += to_string(j+1) + ' ';
    }
    sort(s, s+cnt);
    for(int i=0; i<cnt; i++) cout << s[i] << '\n';
}
    
