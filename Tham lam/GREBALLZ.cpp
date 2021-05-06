#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n, res, p;
long long val;
pair<long long, long long> a[200005];
priority_queue<long long, vector<long long>, greater<long long>> Q;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    long long x, y;
    for(int i=0; i<n; i++) {
        cin >> x >> y;
        a[i] = make_pair(x, y-x+1);
    }
    sort(a+1, a+n, greater<pair<long long, long long>>());
    p = 1;
    val = a[0].first;
    while (p<n && a[p].first > val)
        Q.push(a[p++].second);
    res = p;
    for(int i=p; i<=n; i++) {
        while (!Q.empty() && val - Q.top() >= a[i].first)
            val -= Q.top(), Q.pop();
        res = min(res, (int)Q.size() + 1);
        Q.push(a[i].second);
    }
    cout << res;
}
    
