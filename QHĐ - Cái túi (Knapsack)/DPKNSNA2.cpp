#include <iostream>
#include <algorithm>
using namespace std;
int n, m, w, v;
long long f[1000005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=n; i++) {
        cin >> v >> w;
        for(int j=w; j<=m; j++) f[j] = max(f[j], f[j-w] + v);
    }
    cout << f[m];
}
    
