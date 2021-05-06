#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int n, res;
char s[15];

void DP(int pos, int val, int cnt) {
    if (pos == n) {
        int k = sqrt(val);
        if (k && k*k == val) res = max(res, cnt);
        return;
    }
    DP(pos + 1, val, cnt);
    if (val || s[pos] != '0') DP(pos + 1, val*10 + s[pos] - '0', cnt + 1);
}

int main() {
    scanf("%s", &s);
    n = strlen(s);
    DP(0, 0, 0);
    if (res) cout << n - res; else cout << -1;
}
    
