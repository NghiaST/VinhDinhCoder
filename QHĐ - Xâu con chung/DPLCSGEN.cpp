#include <iostream>
#include <cmath>
using namespace std;
int n, m, res, f[1005][1005];
long long a[1005], b[1005];

int ReadInt(long long &x) {
    char c = getchar();
    while (!isdigit(c)) {
        if (c == '\0') return 1;
        if (c == '\n') return 2;
        c = getchar();
    }
    x = 0;
    while (isdigit(c)) x = (x<<3) + (x<<1) + c - '0', c = getchar();
    if (c == '\n') return 3;
    return 0;
}

bool check(long long x) {
    long long d = sqrt(x);
    if (d*d==x) return true;
    d = round(pow(x, 1.0/3));
    if (d*d*d==x) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long x, c;
    while (c = ReadInt(x), c==0 || c==3) {
        if (check(x)) a[++n] = x;
        if (c==3) break;
    }
    while (c = ReadInt(x), c==0 || c==3) {
        if (check(x)) b[++m] = x;
        if (c==3) break;
    }
    for(int i=1, l=1; i<=n; i++)
    for(int j=1; j<=m; j++) {
        if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    cout << f[n][m];
}
    
