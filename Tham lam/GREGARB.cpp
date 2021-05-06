#include <iostream>
using namespace std;
int n, k, du, x, a[100005];
long long res;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        x -= du;
        if (x>0) {
            res += (x+k-1) / k;
            du = (k - x%k) % k;
        } else du = 0;
    }
    cout << res;
}
    
