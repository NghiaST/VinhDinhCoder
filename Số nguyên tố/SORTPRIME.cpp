#include <iostream>
#include <algorithm>
#include <cmath>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 200005
using namespace std;
int n, res, r, a[N], b[N], f[N], f1, f2;

void eratos() {
    int NN = n*2;
    a[1] = true;
    FOR(i,2,NN) if (!a[i]) {
        FOR(j,i,NN/i) a[i*j] = true;
    }
}

bool check_prime(llong x) {
    for(llong i=1; b[i]*b[i] <= x; i++) if (x%b[i] == 0) return false;
    return true;
}

void Enter() {
    int x;
    scanf("%d", &n);
    FOR(i,1,n) {
        scanf("%d", &x);
        if (x==1) f1++; else f2++;
    }
}

void Process() {
    int q = 0;
    if (f2) f[++q] = 2, f2--;
    if (f1) f[q+1] = f[q] + 1, f1--, q++;
    while (f2--) f[q+1] = f[q] + 2, q++;
    while (f1--) f[q+1] = f[q] + 1, q++;
    FOR(i,1,n) if (!a[f[i]]) res++;
    cout << res;
}

int main()
{
    Enter();
    eratos();
    Process();
}
    
