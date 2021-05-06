#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long t, n, f1, f2, tmp, x;
    cin >> t;
    while (t--) {
        cin >> n >> f1;
        f2 = 0;
        for(int i=2; i<=n; i++) {
            cin >> x;
            tmp = max(f1, f2 + x);
            f2 = f1;
            f1 = tmp;
        }
        cout << f1 << '\n';
    }
}
    
