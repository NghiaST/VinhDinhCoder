#include <iostream>
#include <algorithm>
#include <cmath>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 1000005
using namespace std;
int n, a[N];
long long b[N];

void eratos() {
    int NN = 1000000;
    FOR(i,2,NN) if (!a[i]) {
        FOR(j,i,NN/i) a[i*j] = true;
    }
}

void Init() {
    FOR(i,2,1000000) b[i] = b[i-1] + i*(a[i] == 0);
}

bool check_prime(llong x) {
    for(llong i=1; b[i]*b[i] <= x; i++) if (x%b[i] == 0) return false;
    return true;
}

void Process() {
    int x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        cout << b[x] << '\n';
    }
}

int main()
{
    eratos();
    Init();
    Process();
}
    
