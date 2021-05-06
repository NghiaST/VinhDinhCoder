#include <iostream>
#include <algorithm>
using namespace std;
int n, k, a[100005], b[100005];
long long f[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];
    for(int i=1, l=0; i<=n; i++) {
        while (a[l+1] <= a[i] - k) l++;
        f[i] = max(f[i-1], f[l] + b[i]);
    }
    cout << f[n];
}
    
