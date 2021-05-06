#include <iostream>
using namespace std;
long long n, m, ans, res, s_cnt = 50, w[25];

void get_res(int x, long long val, long long cnt) {
    if (val > m) return;
    if (x == n) {
        if (m == val) res++;
        if (m == val && s_cnt > cnt) s_cnt = cnt;
        return;
    }
    get_res(x+1, val, cnt);
    get_res(x+1, val + w[x], cnt+1);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> w[i];
    get_res(0,0,0);
    cout << res << ' ' << s_cnt;
}
    
