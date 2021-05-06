#include <iostream>
#include <cstring>
using namespace std;
int n, f[5005][5005];
char a[5005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> a+1;
    for(int i=1; i<n; i++) f[i][i+1] = (a[i] == a[i+1] ? 0 : 1);
    for(int i=2; i<n; i++) {
        for(int j=1; i+j<=n; j++) {
            if (a[j] == a[i+j]) f[j][i+j] = f[j+1][i+j-1];
            else f[j][i+j] = min(f[j][i+j-1], f[j+1][i+j]) + 1;
        }
    }
    cout << f[1][n];
}
    
