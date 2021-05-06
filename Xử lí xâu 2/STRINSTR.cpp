#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n1, n2, x1, f[305], z[100005], res;
char s1[100005], s2[305];

void Z_function() {
    f[0] = 0;
    int L = 0, R = 0;
    REP(i, 1, n2) {
        if (i <= R) f[i] = min(f[i - L], R - i);
        while (i + f[i] < n2 && s2[f[i]] == s2[i + f[i]]) f[i]++;
        if (R < i + f[i]) L = i, R = i + f[i] - 1;
    }
    ///
    L = 0, R = -1;
    REP(i, 0, n1) {
        if (i <= R) z[i] = min(f[i - L], R - i);
        while (i + z[i] < n1 && s2[z[i]] == s1[i + z[i]]) z[i]++;
        if (R < i + z[i]) L = i, R = i + z[i] - 1;
    }
}

void Process() {
    REP(i, 0, n1)  if (z[i] == n2) i += n2 - 1, res++;
    cout << res;
}

int main() {
    scanf("%s%s", &s1, &s2);
    n1 = strlen(s1); n2 = strlen(s2);
    Z_function();
    Process();
}
    
