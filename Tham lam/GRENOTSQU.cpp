#include <iostream>
#include <cmath>
using namespace std;
int n, x, p1, p2, f[31624];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        int p = trunc(sqrt(x));
        if (!x) p1++;
        else if (p*p == x) p2++;
        else f[min(x - p*p, (p+1)*(p+1) - x)]++;
    }
    if (p1 + p2 >= n/2) {
        cout << p1+p2-n/2 + max(p1-n/2, 0);
        return 0;
    } else {
        int now = n/2 - p1 - p2;
        for(int i=1; now>0; i++) {
            int sl = min(now, f[i]);
            now -= sl;
            res += sl*i;
        }
        cout << res;
    }
}
    
