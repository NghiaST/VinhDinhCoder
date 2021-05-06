#include <iostream>
using namespace std;
int n, k, x, res, a[100005], f[1000005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=n; i; i--) {
        if (!f[a[i]]) f[a[i]] = true, res++;
        a[i] = res;
    }
    while (k--) {
        cin >> x;
        cout << a[x] << '\n';
    }
}
    
