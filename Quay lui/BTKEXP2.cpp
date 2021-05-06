#include <iostream>
using namespace std;

long long n, k, res, a[22];
char f[22];

void dp(int x, long double val, long double factor) {
    if (x == n) {
        val += factor;
        if (val == k) {
            cout << a[0];
            for(int i=1; i<n; i++) cout << f[i] << a[i];
            cout << '\n';
        }
        return;
    }
    f[x] = '*'; dp(x+1, val, factor*a[x]);
    f[x] = '+'; dp(x+1, val + factor, a[x]);
    f[x] = '-'; dp(x+1, val + factor, -a[x]);
}

int main()
{
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    dp(1,0,a[0]);
}
    
