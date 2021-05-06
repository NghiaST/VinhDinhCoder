#include <iostream>
using namespace std;
int n, m, res, f[5005];
long long a[5005], b[5005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    cin >> m;
    for(int i=1; i<=m; i++) cin >> b[i];
    for(int i=1; i<=n; i++) {
        int val = 0;
        for(int j=1; j<=m; j++) {
            if (a[i] == b[j]) f[j] = max(f[j], val+1);
            if (a[i] > b[j]) val = max(val, f[j]);
        }
    }
    for(int i=1; i<=m; i++) res = max(res, f[i]);
    cout << res;
}
    
