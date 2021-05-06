#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 2000005
using namespace std;
int n, z[N];
char s[N];

void Z_function() {
    int L = 0, R = 0;
    REP(i, 1, n) {
        if (i <= R) z[i] = (z[i - L] < R - i + 1 ? z[i - L] : R - i + 1);
        while (i + z[i] < n && s[z[i]] == s[z[i] + i]) z[i]++;
        if (i + z[i] > R) L = i, R = i + z[i] - 1;
    }
}

void Process() {
    int res = 1;
    REP(i, 1, n) if (z[i] > i) z[i] = i;
    REP(i, 1, n) if (res < z[i]) res = z[i];
    cout << n - res + 1;
}

int main() {
    scanf("%d\n", &n);
    int i = 0; while (i < n) s[i++] = getchar();
    Z_function();
    Process();
}
    
