#include <iostream>
using namespace std;
int n, x, res, f[100005];
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        f[x] = i;
    }
    for(int i=1, p=0; i<=n; i++) {
        if (f[i] > f[i-1]) p++;
        else p=1;
        res = max(res, p);
    }
    cout << n - res;
}
    
