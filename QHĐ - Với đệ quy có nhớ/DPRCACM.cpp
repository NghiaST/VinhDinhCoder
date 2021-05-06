#include <iostream>
#include <vector>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 2005
using namespace std;
const int mod = 1e9 + 7;
int n, k, f[N][N], avail[N][N];
vector<int> S[N];

int get_val(int pos, int num) {
    if (avail[pos][num]) return f[pos][num];
    avail[pos][num] = 1;
    long long sum = 0;
    for(int v : S[num]) sum += get_val(pos-1, v);
    return f[pos][num] = sum % mod;
}

void Init() {
    FOR(i, 1, n) FOR(j, 1, n/i) S[i*j].push_back(i);
    FOR(i, 1, n) avail[1][i] = f[1][i] = 1;
}

int main()
{
    scanf("%d%d", &n, &k);
    Init();
    long long res = 0;
    FOR(i, 1, n) res += get_val(k, i);
    cout << res % mod;
}
    
