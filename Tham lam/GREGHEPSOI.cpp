#include <iostream>
#include <queue>
using namespace std;
long long n, x, res;
priority_queue<long long, vector<long long>, greater<long long>> Q;
int main()
{
    scanf("%lld", &n);
    for(int i=1; i<=n; i++) {
        scanf("%lld", &x);
        Q.push(x);
    }
    for(int i=1; i<n; i++) {
        long long p1 = Q.top(); Q.pop();
        long long p2 = Q.top(); Q.pop();
        res += p1 + p2;
        Q.push(p1 + p2);
    }
    cout << res;
}
    
