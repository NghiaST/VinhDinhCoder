#include <iostream>
#include <algorithm>
using namespace std;
int n, k, a[100005];
long long res;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a+1, a+n, greater<int>());
    for(int i=0; i<=k; i++) res += a[i];
    for(int i=k+1; i<n; i++) res -= a[i];
    cout << res;
}
    
