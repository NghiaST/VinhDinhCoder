#include <iostream>
using namespace std;
int n, k, old, x, f[100005];
long long res;
int main()
{
    scanf("%d%d%d", &n, &k, &old);
    for(int i=1, preold=0; i<n; i++) {
        scanf("%d", &x);
        if (old==x) continue;
        else {
            if (preold == x) f[old]+=2;
            else f[old]++;
            preold = old;
            old = x;
        }
    }
    f[old]++;
    int res=0;
    for(int i=1; i<=k; i++) if (f[res] < f[i]) res = i;
    if (!res) cout << -1; else cout << res;
}
    
