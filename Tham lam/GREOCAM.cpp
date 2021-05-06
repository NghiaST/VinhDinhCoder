#include <iostream>
#include <algorithm>
using namespace std;
int n, k, m, a[100005];
long long res;
int main()
{
    scanf("%d%d%d", &n, &k, &m);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n, greater<int>());
    if (m >= k) { cout << 0; return 0; }
    for(int i=0, cnt=m; i<n; i++) {
        cnt += a[i] - 1;
        if (cnt >= k) { cout << i+1; return 0; }
    }
    cout << -1;
}
    
