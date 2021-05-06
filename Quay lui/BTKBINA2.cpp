#include <iostream>
using namespace std;
int n, res, f[25];

void Print() {
    for(int i=0; i<n; i++) cout << f[i];
    cout << '\n';
}

void dp1(int x, int v, int cnt) {
    if (cnt>3) return;
    if (x==n) { res++; return; }
    f[x] = 0; dp1(x+1, 0, cnt + v);
    f[x] = 1; dp1(x+1, 1, cnt + (v^1));
}

void dp(int x, int v, int cnt) {
    if (cnt>3) return;
    if (x==n) { Print(); return; }
    f[x] = 0; dp(x+1, 0, cnt + v);
    f[x] = 1; dp(x+1, 1, cnt + (v^1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    dp1(0,1,0);
    cout << res << '\n';
    dp(0,1,0);
}
    
