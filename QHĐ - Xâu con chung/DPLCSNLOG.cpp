#include <iostream>
#include <algorithm>
#define N 100005
using namespace std;
int n, m, res, a[N], b[N], *fa[N], *fb[N], nxt[N], f[N];

void update(int x, int val) {
    for(++x; x<=m; x+=x&-x) f[x] = max(f[x], val);
}

int getBIT(int x) {
    int val = 0;
    for(; x; x-=x&-x) val = max(val, f[x]);
    return val;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> a[i], fa[i] = &a[i];
    for(int i=0; i<m; i++) cin >> b[i], fb[i] = &b[i];
    sort(fa, fa+n, [] (int *A, int *B) {return *A < *B;});
    sort(fb, fb+m, [] (int *A, int *B) {return *A < *B;});
    for(int i=0, l=0; i<n; i++) {
        while (l<m && *fa[i] > *fb[l]) l++;
        if (l<m && *fa[i] == *fb[l]) nxt[fa[i]-a] = fb[l++]-b+1;
    }
    for(int i=0; i<n; i++) if (nxt[i]) {
        int val = getBIT(nxt[i]) + 1;
        res = max(res, val);
        update(nxt[i], val);
    }
    cout << res;
}
    
