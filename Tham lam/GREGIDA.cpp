#include <iostream>
#include <algorithm>
using namespace std;
int n, res, a[100005], b[100005];
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) scanf("%d", &b[i]);
    sort(a, a+n);
    sort(b, b+n);
    for(int i=n-1, l=n-1; i>=0; i--, l--) {
        while (l >= 0 && a[l] >= b[i]) l--;
        if (l < 0) break;
        res++;
    }
    cout << res;
}
    
