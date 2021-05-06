#include <iostream>
using namespace std;
int n, v[2005], f[2005][2005];

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &v[i]), v[i] += v[i-1];
    for(int j=0; j<n; j++)
        for(int i=n-j; i; i--)
            f[i][i+j] = (f[i][i+j-1] > f[i+1][i+j] ? f[i][i+j-1] : f[i+1][i+j]) + v[i+j] - v[i-1];
    cout << f[1][n];
}
    
