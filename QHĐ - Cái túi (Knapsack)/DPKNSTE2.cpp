#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int n, m;
long long w, v, a, f[10005];
deque<pair<long long,int>> Q;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=n; i++) {
        cin >> w >> v >> a;
        if (!w) {
            for(int j=0; j<=m; j++) f[j] += v*a;
        } else
        for(int j=0; j<w; j++) {
            Q.clear();
            for(int k=j, dem=0; k<=m; k+=w, dem++) {
                while (!Q.empty() && Q.front().second < dem - a) Q.pop_front();
                while (!Q.empty() && Q.back().first <= f[k] - v*dem) Q.pop_back();
                Q.emplace_back(f[k] - v*dem,dem);
                f[k] = Q.front().first + v*dem;
            }
        }
    }
    cout << f[m];
}
    
