#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
#define FORD(i, r, l) for(int i = r; i >= l; i--)
#define N 1500005
using namespace std;
int n, a[N], b[N], t, r;

void update(int &x) {
    string s = to_string(x);
    int p = s.length();
    int v1=0, v2=0, v3 = 0;
    FORD(i, (p-1)/2, 0) v1 = v1*10 + s[i] - '0';
    REP(i, p - (p-1)/2 - 1, p) v2 = v2*10 + s[i] - '0';
    FOR(i, 0, (p-1)/2) v3 = v3*10 + s[i] - '0';
    if (v1 < v2) v3++;
    x = v3;
    if (p & 1) v3 /= 10;
    while (v3 > 0) {
        x = x*10 + v3%10;
        v3 /= 10;
    }
}

bool nto(int x) {
    for(int i=1; b[i]*b[i] <= x; i++) if (x % b[i] == 0) return false;
    return true;
}

int main()
{
    FOR(i,2,1500000) if (!a[i]) FOR(j,i,1500000/i) a[i*j] = true;
    FOR(i,8,1500000) if (!a[i] && !a[i-6]) b[++r] = i;
    scanf("%d", &t);
    while (t--) scanf("%d", &n), cout << b[n] - 6 << ' ' << b[n] << '\n';
}
    
