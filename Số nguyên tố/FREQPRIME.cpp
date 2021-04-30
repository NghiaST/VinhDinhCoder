#include <iostream>
#include <algorithm>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 1000005
using namespace std;
llong n, res, a[N], f[N];

void Enter() {
    char c = getchar();
    while (c != '\0' && c != '\n') {
        a[c]++;
        c = getchar();
    }
}

void eratos() {
    f[0] = f[1] = true;
    int NN = 1000000;
    FOR(i,2,NN) if (!f[i])
        FOR(j,i,NN/i) f[i*j] = true;
}

void Process() {
    REP(i,0,256) if (!f[a[i]]) res += a[i];
    cout << res;
}

int main()
{
    Enter();
    eratos();
    Process();
}
    
