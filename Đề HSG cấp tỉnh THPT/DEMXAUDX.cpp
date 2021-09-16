#include <iostream>
using namespace std;
int n, q, ok[1005][1005], f[1005][1005];
string s;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> q >> s;
    for(int i=0; i<n; ++i) ok[i][i] = f[i][i] = 1;
    for(int i=1; i<n; ++i) ok[i-1][i] = (s[i] == s[i-1]), f[i-1][i] = 2 + ok[i-1][i];
    for(int i=n-1; i>=0; --i) {
        for(int j=i+2; j<n; ++j) {
            f[i][j] = f[i][j-1] + f[i+1][j] - f[i+1][j-1];
            if (s[i] == s[j]) ok[i][j] = ok[i+1][j-1];
            f[i][j] += ok[i][j];
        }
    }
    int x, y;
    while (q--) {
        cin >> x >> y;
        cout << f[x-1][y-1] << '\n';
    }
}
    
