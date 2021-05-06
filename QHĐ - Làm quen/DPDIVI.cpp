#include <iostream>
using namespace std;
int n, L, x, f[6005], v[6005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> L;
    for(int i=1; i<=n; i++) {
        cin >> x;
        f[i] = f[i-1] + x;
        v[i] = L;
        for(int j=i; j && f[i] - L <= f[j-1]; j--)
            v[i] = min(v[i], max(L - f[i] + f[j-1], v[j-1]));
    }
    cout << v[n];
}
    
