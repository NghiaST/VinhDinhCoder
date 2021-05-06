#include <iostream>
#include <algorithm>
using namespace std;
int n, k, a[100005];
long long res;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int now = n-1; now>=0; now-=k) res += a[now] - 1;
    cout << res*2;
}
    
