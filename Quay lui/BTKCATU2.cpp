#include <iostream>
using namespace std;
long long n, m, res, ans, s_cnt, w[25], v[25];

void get_res(int x, long long val, long long weight, long long data, long long cnt) {
    if (weight > m) return;
    if (x == n) {
        if (res < val) {
            res = val;
            s_cnt = cnt;
            ans = data;
        }
        return;
    }
    get_res(x+1, val, weight, data*2, cnt);
    get_res(x+1, val + v[x], weight + w[x], data*2+1, cnt+1);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> w[i] >> v[i];
    get_res(0,0,0,0,0);
    cout << s_cnt << '\n';
    for(int i=n-1; i>=0; i--) {
        if ((ans>>i)&1) cout << n-i << ' ';
    }
}
    
