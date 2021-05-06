#include <iostream>
using namespace std;
int n, k, x, f[100005];
const int mod = 25071987;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    while (k--) {
        cin >> x;
        f[x] = -1;
    }
    f[1] = 1;
    for(int i=2; i<=n; i++) {
        if (!f[i]) f[i] = (f[i-1] + f[i-2]) % mod;
        else f[i] = 0;
    }
    cout << f[n];
}
    
