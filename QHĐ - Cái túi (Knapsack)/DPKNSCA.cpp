#include <iostream>
using namespace std;
int t, n, x, sum, f[20005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        for(; sum; sum--) f[sum] = 0;
        while (n--) {
            f[0] = 1;
            cin >> x;
            sum += x;
            for(int i=sum; i>=x; i--) f[i] |= f[i-x];
        }
        for(int i=0; i<=sum; i++) if (f[i]) cout << i << ' ';
        cout << '\n';
    }
}
    
