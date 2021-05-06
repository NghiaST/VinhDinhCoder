#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long x, a[200005];
int main()
{
    scanf("%d", &n);
    a[n+1] = 1e18;
    for(long long i=1, nowl=0, nowr=1e18; i*2<=n; i++) {
        scanf("%lld", &x);
        long long p = max(a[i-1], x - a[n-i+2]);
        a[i] = p;
        a[n-i+1] = x-p;
    }
    for(int i=1; i<=n; i++) cout << a[i] << ' ';
}
    
