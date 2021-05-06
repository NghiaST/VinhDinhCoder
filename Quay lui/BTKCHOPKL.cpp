#include <iostream>
#include <algorithm>
using namespace std;
long long k, n, cnt, a[8], f[8];
bool avail[8];

void Print() {
    ++cnt;
    for(int i=0; i<k; i++) cout << f[i] << ' ';
    cout << '\n';
}

void dq(int x) {
    if (x == k) { Print(); return; }
    for(int i=0; i<n; i++) if (!avail[i]) {
        avail[i] = true;
        f[x] = a[i];
        dq(x+1);
        avail[i] = false;
    }
}

int main()
{
    scanf("%lld%lld\n", &k, &n);
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    sort(a, a+n);
    dq(0);
    cout << cnt;
}
    
