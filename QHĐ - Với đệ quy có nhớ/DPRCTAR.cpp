#include <iostream>
using namespace std;
int n, avail[3005][3005];
long long a[3005], f[3005][3005];

long long dp(int l, int r) {
    if (l == r) return a[l];
    if (avail[l][r]) return f[l][r];
    avail[l][r] = true;
    return f[l][r] = max(a[l] - dp(l+1, r), a[r] - dp(l, r-1));
}

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    cout << dp(1, n);
}
    
