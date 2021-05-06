#include <iostream>
#include <algorithm>
using namespace std;
int n, k, a[100005];
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n, greater<int>());
    if (n<k || n>k && a[k] == a[k-1]) cout << -1;
    else cout << a[k-1] << ' ' << a[k-1];
}
    
