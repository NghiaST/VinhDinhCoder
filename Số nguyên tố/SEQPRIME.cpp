#include <iostream>
#include <algorithm>
#include <cmath>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
int n, r, a[N], b[N];

void eratos() {
    int NN = 100000;
    FOR(i,2,NN) if (!a[i]) {
        b[++r] = i;
        FOR(j,i,NN/i) a[i*j] = true;
    }
}

void Process() {
    scanf("%d", &n);
    if (n & 1) FOR(i,1,n) cout << b[i] << ' ';
    else FOR(i,1,n) cout << b[i+1] << ' ';
}

int main()
{
    eratos();
    Process();
}
    
