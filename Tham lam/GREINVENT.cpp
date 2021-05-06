#include <iostream>
using namespace std;
int n, x, a[100005], f[100005];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        if (!a[x] && x<=n) a[x] = 1, f[i] = x;
    }
    for(int i=0, p=1; i<n; i++) {
        if (f[i]) cout << f[i] << ' ';
        else {
            while (a[p]) p++;
            cout << p++ << ' ';
        }
    }
}
    
