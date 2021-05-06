#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1000005
using namespace std;
int n, f1, f2, f3;
long long res;
char s[N];

void solve() {
    f1 = f2 = f3 = -1;
    REP(i, 0, n) {
        if (isdigit(s[i])) f1 = i;
        else if ('a' <= s[i] && s[i] <= 'z') f2 = i;
        else f3 = i;
        res += max(0, min(min(i - 5, f1), min(f2, f3)) + 1);
    }
    cout << res;
}

int main() {
    scanf("%s", &s); n = strlen(s);
    solve();
}
    
