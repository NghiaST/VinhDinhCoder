#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
#define FORD(i, r, l) for(int i = r; i >= l; i--)
#define N 10005
using namespace std;
int n, a[N], b[N], l, r, ok;

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
    FOR(i,2,10000) if (!a[i]) FOR(j,i,10000/i) a[i*j] = true;
    ///FOR(i,2,10000) a[i] = a[i-1] + (a[i] ^ 1);
    FOR(i,2,10000) if (!a[i]) b[++r] = i;
    cin >> n;
    update(n);
    if (n < 2) n = 2;
    while (!ok) {
        string s = to_string(n);
        int p = s.length();
        if (p%2 == 0) {
            int v = n, q = 1;
            REP(i,0,p/2) v /= 10, q *= 10;
            while (v < q) {
                int w = v, t = v;
                REP(i, 0, p/2) w = w*10 + t%10, t /= 10;
                if (nto(w)) { ok = true; n = w; break; }
                v++;
            }
            if (!ok) n = q*q;
        } else {
            int v = n, q = 1;
            REP(i,0,p/2) v /= 10, q *= 10; q *= 10;
            while (v < q) {
                int w = v, t = v / 10;
                REP(i, 0, p/2) w = w*10 + t%10, t /= 10;
                if (nto(w)) { ok = true; n = w; break; }
                v++;
            }
            if (!ok) n = q*q*10;
        }
    }
    cout << n;
}
    
