#include <iostream>
using namespace std;
int n, x, f[1000005];
long long res;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i=1; i<=1000000; ++i)
    for(int j=i; j<=1000000; j+=i) ++f[j];
    cin >> n;
    while (n--) cin >> x, res += 1LL * x * f[x];
    cout << res;
}
    
