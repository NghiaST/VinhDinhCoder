#include <iostream>
using namespace std;
long long n, m, a[22], f[22], Q[22];

bool get_res(int x, long long val, int cnt) {
    if (val > m) return false;
    if (x == n) {
        if (val == m) {
            cout << cnt << '\n';
            for(int i=0; i<cnt; i++) cout << Q[i] << ' ';
            return true;
        }
        return false;
    }
    if (get_res(x+1, val, cnt)) return true;
    Q[cnt++] = x + 1;
    if (get_res(x+1, val + a[x], cnt)) return true;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> a[i];
    if (!get_res(0, 0, 0)) cout << "khongtherut";
}
    
