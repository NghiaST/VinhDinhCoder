#include <iostream>
#include <algorithm>
using namespace std;
int n, m, x, a[100005], val;
long long res;
int main()
{
    scanf("%d%d", &n, &m); val = n;
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<m; i++) scanf("%d", &x), val = min(val, x-1);
    sort(a, a+n, greater<int>());
    for(int i=0; i<n; i++) if (i != val) res += a[i];
    cout << res;
}
    
