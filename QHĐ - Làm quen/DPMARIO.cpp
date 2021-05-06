#include <iostream>
using namespace std;
int n, a[10005], f[10005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    f[0] = 1;
    if (a[1] != 2) f[1] = 1;
    for(int i=2; i<=n+1; i++) {
        if (a[i] == 0) {
            f[i] = (f[i-1] + f[i-2]) % 1000000000;
            if (i>2 && a[i-3] == 0) f[i] = (f[i] + f[i-3]) % 1000000000;
        } else if (a[i] == 1) f[i] = f[i-1];
    }
    cout << f[n+1];
}
    
