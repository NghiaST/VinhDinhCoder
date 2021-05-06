#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 200005
using namespace std;
int n, k, ok, f[N];
char s[N];

void solve() {

}

int main() {
    scanf("%d%d%s", &n, &k, &s);
    REP(i, 0, k) f[i] = s[i] - '0';
    REP(i, k, n) if (s[i - k] != s[i]) { ok = (s[i-k] < s[i]); break; }
    int r = k-1;
    f[r] += ok;
    while (f[r] > 9) f[r] = 0, f[--r]++;
    cout << n << '\n';
    REP(i, 0, n) cout << f[i % k];
}
    
