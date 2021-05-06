#include <iostream>
using namespace std;

int n, res, a[20];

void dp(int x, int cnt, long long val) {
    if (cnt >= res) return;
    if (x == n) {
        if (val) return;
        if (res > cnt) res = cnt;
        return;
    }
    dp(x+1, cnt, val+a[x]);
    dp(x+1, cnt, val-a[x]);
    dp(x+1, cnt+1, val);
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    res = n;
    dp(0,0,0);
    cout << res;
}
    
