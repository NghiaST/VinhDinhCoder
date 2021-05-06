#include <iostream>
using namespace std;
int t, n, a[100007];
long long sum, f[100007];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        for(int i=1; i<=n; i++) cin >> a[i], sum += a[i];
        for(int i=n+1; i<=n+5; i++) a[i] = 0;
        n = (n+5)/2*2;
        for(int i=2; i<=n; i+=2) {
            f[i] = f[i-2] + a[i];
            if (i>2) f[i] = min(f[i], f[i-4] + a[i] + a[i-1]);
            if (i>4) f[i] = min(f[i], f[i-6] + a[i] + a[i-1] + a[i-2]);
        }
        cout << sum - f[n] << '\n';
    }
}
    
