#include <iostream>
using namespace std;
int n, m, w, v, f[2025];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while (cin >> m >> n, m!=0 || n!=0) {
        for(int i=1; i<=m; i++) f[i] = 0;
        for(int i=1; i<=n; i++) {
            cin >> w >> v;
            for(int j=m; j>=w; j--)
                f[j] = max(f[j], f[j-w] + v);
        }
        while (m && f[m] == f[m-1]) m--;
        cout << m << ' ' << f[m] << '\n';
    }
}
    
