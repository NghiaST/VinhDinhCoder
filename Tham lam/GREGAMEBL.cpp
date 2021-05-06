#include <iostream>
#include <algorithm>
using namespace std;
int n, a[100005], b[100005];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    for(int i=1; i<=n; i++) scanf("%d", &b[i]);
    sort(a+1, a+n+1);
    sort(b+1, b+n+1);
    for(int r1=n, r2=n; r1>0 || r2>0;) {
        if (r1>0 && a[r1] > b[r2]) res += a[r1--];
            else r2--;
        if (r2>0 && b[r2] > a[r1]) res -= b[r2--];
            else r1--;
    }
    cout << res;
}
    
