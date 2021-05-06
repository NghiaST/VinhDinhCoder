#include <iostream>
using namespace std;
int n, k, x, now, a[100005];
long long res;
int main()
{
    scanf("%d%d", &n, &k);
    now = k;
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        if (x + now < k) {
            res += k - x - now;
            now = k - now;
        } else now = x;
        a[i] = now;
    }
    cout << res << '\n';
    for(int i=0; i<n; i++) cout << a[i] << ' ';
}
    
