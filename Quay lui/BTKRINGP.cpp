#include <iostream>
using namespace std;
long long n, cnt, a[40], f[40], p[50], prime[50], avail[40];

void eratos() {
    for(int i=2; i<n*2; i++) if (!p[i]) {
        prime[++cnt] = i;
        for(int j=i*i; j<n*2; j+=i) p[j] = true;
    }
}

void get_res(int x, long long val) {
    if (x == n) {
        if (p[f[x-1] + 1]) return;
        for(int i=0; i<n; i++) cout << f[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=cnt, v = prime[cnt] - val; v>0; v = prime[--i] - val) {
        if (v > n) continue;
        if (!avail[v]) {
            avail[v] = true;
            f[x] = v;
            get_res(x+1, v);
            avail[v] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n; n*=2;
    eratos();
    f[0] = 1; avail[1] = true;
    get_res(1, 1);
}
    
