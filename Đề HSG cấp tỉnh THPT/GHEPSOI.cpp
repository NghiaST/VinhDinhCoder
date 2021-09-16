#include <iostream>
#include <queue>
using namespace std;
int n, x;
long long res;
priority_queue<long long, vector<long long>, greater<long long>> Q;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; ++i) cin >> x, Q.push(x);
    for(int i=1; i<n; ++i) {
        long long x = Q.top(); Q.pop();
        long long y = Q.top(); Q.pop();
        Q.push(x + y);
        res += x + y;
    }
    cout << res;
}
    
