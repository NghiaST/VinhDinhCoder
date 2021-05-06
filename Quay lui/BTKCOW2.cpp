#include <iostream>
using namespace std;
long long n, ok, a[25], f[25];

void get_res(int x, long long val) {
    if (x == n) {
        if (!val) {
            for(int i=0; i<n; i++) cout << f[i];
            cout << '\n';
            ok = true;
        }
        return;
    }
    f[x] = 1; get_res(x+1, val + a[x]);
    f[x] = 2; get_res(x+1, val - a[x]);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    get_res(0,0);
    if (!ok) cout << -1;
}
    
