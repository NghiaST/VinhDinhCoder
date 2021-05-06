///IT2d
#include <iostream>
using namespace std;
int n, res, f[1005][1005];

int getBIT(int x, int y) {
    int val = 0;
    for(; x; x-=x&-x)
    for(int z=y; z; z-=z&-z)
        val = max(val, f[x][z]);
    return val;
}

void update(int x, int y, int val) {
    for(++x; x<=1000; x+=x&-x)
    for(int z=y+1; z<=1000; z+=z&-z)
        f[x][z] = max(f[x][z], val);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    int u, v;
    for(int i=1; i<=n; i++) {
        cin >> u >> v;
        int val = getBIT(u, v) + 1;
        res = max(res, val);
        update(u, v, val);
    }
    cout << res;
}
    
