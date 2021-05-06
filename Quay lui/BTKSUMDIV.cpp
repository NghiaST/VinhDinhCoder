#include <iostream>
using namespace std;

long long n, k, res, a[22];

void dp(int x, long long val, int cnt) {
    if (x == n) {
        if (!(val%k) && cnt > res) res = cnt;
        return;
    }
    dp(x+1, val, cnt);
    dp(x+1, val+a[x], cnt+1);
}

int main()
{
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    dp(0,0,0);
    cout << res;
}
    
