#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
int L, R, r, a[10000005], b[10000005];
long long res;

void eratos() {
    int NN = R, x;
    b[++r] = 2; b[++r] = 3;
    FOR(i,1,NN/6) {
        x = i*6 - 1;
        if (!a[x]) {
            b[++r] = x;
            FOR(j,x,NN/x) a[x*j] = true;
        }
        x = i*6 + 1;
        if (!a[x]) {
            b[++r] = x;
            FOR(j,x,NN/x) a[x*j] = true;
        }
    }
    while (b[r] > R) r--;
}

int main() {
    cin >> L >> R;
    eratos();
    FOR(i, 1, r)
        res += 1ll * (R/b[i] - max(b[i], L-1)/b[i]) * b[i];
    cout << res;
}
    
