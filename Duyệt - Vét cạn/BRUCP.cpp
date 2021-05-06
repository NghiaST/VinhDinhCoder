#include <iostream>
#include <cmath>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
int n, res, x, y;
pair<int,int> f[500005];

int main() {
    cin >> n;
    FORD(i, n>>1, 1)
    FORD(j, min((int) sqrt(n + i*i), (n>>1)/i), i+1) {
        x = j*j - i*i;
        y = 2*i*j;
        if (x > y) swap(x, y);
        if (x <= 0 || y > n || __gcd(x,y) > 1) continue;
        FORD(w, n/y, 1) f[++res] = make_pair(x*w, y*w);
    }
    sort(f+1, f+res+1);
    FOR(i, 1, res) cout << f[i].first << ' ' << f[i].second << '\n';
}
    
