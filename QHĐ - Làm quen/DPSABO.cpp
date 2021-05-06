#include <iostream>
using namespace std;
int n, k, sum, res, a[10005];

int main()
{
    cin >> n >> k;
    a[0] = 1;
    res = 1;
    for(int i=1; i<=n; i++) {
        if (i<=k) res += a[i] = 1;
        else {
            sum = (sum + a[i-k-1]) % 1000000;
            res = (res + sum) % 1000000;
            a[i] = sum;
        }
    }
    cout << res;
}
    
