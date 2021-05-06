#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define mod 1000000007
using namespace std;

struct Data{
    int f[2][2];
    Data operator * (Data &x) {
        Data g = {{0,0,0,0}};
        REP(i,0,2) REP(j,0,2) REP(w,0,2)
            g.f[i][j] = (g.f[i][j] + (long long) f[i][w] * x.f[w][j]) % mod;
        return g;
    }
};
Data Old = {{1,1,1,0}};

Data F(int x) {
    if (x==1) return Old;
    Data p = F(x/2);
    p = p*p;
    if (x&1) return p*Old; else return p;
}

int main()
{
    int n; cin >> n;
    Data e = F(n);
    cout << e.f[0][1];
}
    
