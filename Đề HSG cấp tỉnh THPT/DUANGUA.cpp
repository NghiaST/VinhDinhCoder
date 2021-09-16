#include <iostream>
#include <algorithm>
using namespace std;
int n, k, a[100005];
long long res;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> k >> n;
    for(int i=1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+n+1, greater<int>());
    for(int i=1; i<=k; ++i) res += a[i*2-1] * a[i*2];
    cout << res;
}
