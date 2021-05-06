#include <iostream>
#include <map>
using namespace std;
int n, k, m, cost[100005], pos[100005], val[100005];
long long p[100005];
map<int,long long> _hash;
long long res;
long long bam() {
    long long hsh1 = 0, hsh2 = 0;
    char c = getchar();
    while (c<'a' || c>'z') c = getchar();
    while ('a'<=c && c<='z') {
        hsh1 = (hsh1*26 + c - 'a' + 1)%987654351;
        hsh2 = (hsh2*31 + c - 'a' + 6)%987654351;
        c = getchar();
    }
    return hsh1*987654323 + hsh2;
}

int main()
{
    scanf("%d%d%d", &n, &k, &m);
    for(int i=1; i<=n; i++) _hash[bam()] = i;
    for(int i=1; i<=n; i++) scanf("%d", &cost[i]);
    for(int i=1; i<=k; i++) {
        int sze;
        scanf("%d", &sze);
        int x, vv = 1e9;
        while (sze--) {
            scanf("%d", &x);
            vv = min(vv, cost[x]);
            pos[x] = i;
        }
        val[i] = vv;
    }
    for(int i=1; i<=m; i++) {
        res += val[pos[_hash[bam()]]];
    }
    cout << res;
}
    
