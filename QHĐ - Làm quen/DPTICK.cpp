#include <iostream>
using namespace std;
int n, t[60005], r[60005];
long long f[60005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> t[i];
    for(int i=1; i<n; i++) cin >> r[i];
    f[1] = t[1];
    for(int i=2; i<=n; i++)
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
    cout << f[n];
}
    
