#include <iostream>
#include <vector>
using namespace std;
int t, w, n, d, v;
long long f[1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while (cin >> t) {
        cin >> w >> n;
        t /= w*3;
        fill(f, f+t+1, 0);
        while (n--) {
            cin >> d >> v;
            for(int i=t; i>=d; i--) f[i] = max(f[i], f[i-d] + v);
        }
        cout << f[t] << '\n';
    }
}
    
