#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int n, m, p, w, v, res, f[100005];
deque<pair<long long,int>> Q;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    p = n*1000;
    fill(f+1, f+p+1, 1e9 + 1);
    for(int i=1; i<=n; i++) {
        cin >> w >> v;
        for(int j=p; j>=v; j--)
            if (f[j-v] + w <= m) {
                f[j] = min(f[j], f[j-v] + w);
                res = max(res, j);
            }
    }
    cout << res;
}
    
