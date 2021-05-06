#include <iostream>
using namespace std;
int t, n, x, a[100005], f[100005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=1; i<=n; i++) {
            cin >> x;
            if (x>0) x=1;
            else if (x<0) x=-1;
            a[i] = x;
        }
        f[n] = 1;
        for(int i=n-1; i; i--) {
            if (a[i]*a[i+1]<0) f[i] = f[i+1] + 1;
            else f[i] = 1;
        }
        for(int i=1; i<=n; i++) cout << f[i] << ' ';
        cout << '\n';
    }
}
    
