#include <iostream>
using namespace std;

long long n, k, res, a[22], f[22];

void dp(int x, long long val) {
    if (x == n) {
        if (val == k) {
            cout << a[0];
            for(int i=1; i<n; i++) cout << (f[i] ? '-' : '+') << a[i];
            cout << '\n';
        }
        return;
    }
    f[x] = 0; dp(x+1, val + a[x]);
    f[x] = 1; dp(x+1, val - a[x]);
}

int main()
{
    cin >> n >> k >> a[0];
    for(int i=1; i<n; i++) {
        cin >> a[i];
        if (a[i] < 0) a[i] = -a[i];
    }
    dp(1,a[0]);
}
    
