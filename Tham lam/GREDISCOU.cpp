#include <iostream>
#include <algorithm>
using namespace std;
int n, k, x, a[200005];
long long res;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        res += x;
        a[i] -= x;
    }
    sort(a, a+n);
    for(int i=0; i<n && (i<k || a[i]<0); i++) res += a[i];
    cout << res;
}
    
