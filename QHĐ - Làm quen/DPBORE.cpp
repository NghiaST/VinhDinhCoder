#include <iostream>
using namespace std;
int n, x, vmax;
long long f[100005], val[100005];
int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &x), f[x] += x, vmax = max(vmax, x);
    val[1] = f[1];
    for(int i=2; i<=vmax; i++) val[i] = max(val[i-1], val[i-2] + f[i]);
    cout << val[vmax];
}
    
