#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, a[100005], nxt[100005], prv[100005];
bool avail[100005];
char s[100005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
vector<pair<int,int>> P;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s+1;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) nxt[i] = i+1, prv[i] = i-1;
    for(int i=1; i<n; i++) if (s[i] != s[i+1]) Q.emplace(abs(a[i] - a[i+1]), i);
    avail[0] = avail[n+1] = true;
    while (!Q.empty()) {
        pair<int,int> now = Q.top(); Q.pop();
        int u = now.second, v = nxt[u];
        if (avail[u] || avail[v] || s[u] == s[v] || abs(a[u] - a[v]) != now.first) continue;
        P.emplace_back(u, v);
        avail[u] = avail[v] = true;
        int fu = prv[u], fv = nxt[v];
        nxt[fu] = fv;
        prv[fv] = fu;
        if (!avail[fu] && !avail[fv] && s[fu] != s[fv])
            Q.emplace(abs(a[fu] - a[fv]), fu);
    }
    cout << P.size() << '\n';
    for(pair<int,int> v : P) cout << v.first << ' ' << v.second << '\n';
}
    
