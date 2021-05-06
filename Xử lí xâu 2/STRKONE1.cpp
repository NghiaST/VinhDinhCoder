#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1000005
using namespace std;
int n, k, r, a[N], Q[N];

int main() {
    scanf("%d\n", &k);
    char c = getchar();
    while (c == '0' || c == '1') {
        a[n++] = c - '0';
        c = getchar();
    }
    long long res = 0;
    REP(i, 0, n) {
        if (a[i]) Q[r++]++; else Q[r]++;
        if (r >= k) res += Q[r - k];
    }
    cout << res;
}
    
