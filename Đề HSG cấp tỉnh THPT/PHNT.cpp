#include <iostream>
#include <map>
using namespace std;
const int N = 10005, base = 123, MOD = 987654321;
int n;
long long B[N], f[N];
char s[N];
map<int,int> M;

bool check(int x) {
    M.clear();
    for(int i=x; i<=n; ++i) {
        int val = (f[i] - 1LL * f[i - x] * B[x] % MOD + MOD) % MOD;
        if (M.count(val)) return true;
        M[val] = i;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> s+1;
    B[0] = 1;
    for(int i=1; i<=n; ++i) B[i] = B[i-1] * base % MOD;
    for(int i=1; i<=n; ++i) f[i] = (f[i-1] * base + s[i] - '@') % MOD;
    int l = 1, r = n, mid;
    while (l < r) {
        mid = (l+r) / 2;
        if (check(mid)) l = mid + 1; else r = mid;
    }
    cout << l;
}
    
