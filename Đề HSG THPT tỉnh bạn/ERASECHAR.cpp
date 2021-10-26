#include <iostream>
using namespace std;
int n, k, a[2005][2005];
char s[2005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k >> s + 1;
    k = n - k;
    for(int i=1; i<=n; ++i) a[i][i] = a[i][i-1] = 1;
    for(int i=n; i; --i)
    for(int j=i+1; j<=n; ++j)
        a[i][j] = a[i+1][j-1] && (s[i] == s[j]);
    for(int i=k; i<=n; ++i) if (a[i-k+1][i]) {
        for(int j=i-k+1; j<=i; ++j) cout << s[j];
        return 0;
    }
    cout << "No";
}
