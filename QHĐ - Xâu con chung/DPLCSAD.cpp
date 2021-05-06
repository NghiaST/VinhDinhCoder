#include <iostream>
#include <cstring>
using namespace std;
int n, m, res, f1[1015][1015], f2[1015][1015], ok[26];
char a[1015], b[1015];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> a+1 >> b+1;
    n = strlen(a+1);
    m = strlen(b+1);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if (a[i] == b[j]) f1[i][j] = f1[i-1][j-1] + 1;
            else f1[i][j] = max(f1[i][j-1], f1[i-1][j]);
        }
    }
    for(int i=n; i; i--) {
        for(int j=m; j; j--) {
            if (a[i] == b[j]) f2[i][j] = f2[i+1][j+1] + 1;
            else f2[i][j] = max(f2[i][j+1], f2[i+1][j]);
        }
    }
    int best = f1[n][m];
    for(int i=0; i<=n; i++) {
        fill(ok, ok + 26, 0);
        for(int j=1; j<=m; j++)
            if (!ok[b[j] - 'a'] && f1[i][j-1] + f2[i+1][j+1] == best)
                ok[b[j] - 'a'] = true, res++;
    }
    cout << res;
}
    
