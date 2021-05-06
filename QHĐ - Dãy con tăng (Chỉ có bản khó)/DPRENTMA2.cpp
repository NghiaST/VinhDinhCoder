#include <iostream>
#include <algorithm>
using namespace std;
int n, f[100005], d[100005];
struct Data{
    int x, y;
    bool operator < (Data &other) { return y < other.y; }
} a[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i].x >> a[i].y;
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) d[i] = a[i].y;
    for(int i=1; i<=n; i++) {
        f[i] = max(f[i-1], f[lower_bound(d, d+i, a[i].x)-d-1] + a[i].y - a[i].x + 1);
    }
    cout << f[n];
}
    
