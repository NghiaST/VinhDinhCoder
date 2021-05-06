#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 2000005
using namespace std;
int n, z[N];
char s[N];

void Z_function() {
    int L = 0, R = 0;
    REP(i, 1, n) {
        if (i <= R) z[i] = min(z[i - L], R - i + 1);
        while (i + z[i] < n && s[z[i]] == s[z[i] + i]) z[i]++;
        if (i + z[i] > R) L = i, R = i + z[i] - 1;
    }
}

void Process() {
    int res = 1;
    REP(i, 0, n) res = max(res, min(i, z[i]));
    cout << n - res + 1;
}

int main() {
    scanf("%d%s", &n, &s);
    Z_function();
    Process();
}
    
