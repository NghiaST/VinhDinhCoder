#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n, x1, x2, res;
pair<int,int> d[200005];
priority_queue<int, vector<int>, greater<int>> Q;
int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &d[i].first);
    for(int i=1; i<=n; i++) scanf("%d", &d[i].second);
    sort(d+1, d+n+1);
    for(int i=1; i<=n; i++) {
        while (!Q.empty() && d[i].first > Q.top()) Q.pop();
        Q.push(d[i].first + d[i].second - 1);
        res = max(res, (int) Q.size());
    }
    cout << res;
}
    
