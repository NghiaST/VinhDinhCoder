#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long f[100005];
pair<int,int> a[100005];

long long getBIT(int x) {
    long long val = 0;
    for(; x; x-=x&-x) val = max(val, f[x]);
    return val;
}

void update(int x, long long val) {
    for(; x<=n; x+=x&-x) f[x] = max(f[x], val);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i].first, a[i].second = i;
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        long long x = getBIT(a[i].second) + a[i].first;
        update(a[i].second, x);
    }
    cout << getBIT(n);
}
    
