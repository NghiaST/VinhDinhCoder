#include <iostream>
#include <vector>
using namespace std;
int n, k, d[1121], f[1121][15];
vector<int> Q;

void eratos() {
    for(int i=2; i<=1120; i++) if (!d[i]) {
        Q.push_back(i);
        for(int j=i*i; j<=1120; j+=i) d[j] = 1;
    }
}

void Init() {
    f[0][0] = 1;
    for(int v : Q) {
        for(int i=1120; i>=v; i--)
        for(int j=1; j<=14; j++) {
            f[i][j] += f[i-v][j-1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    eratos();
    Init();
    while (cin >> n >> k, n!=0) cout << f[n][k] << '\n';
}
    
