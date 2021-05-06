#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n, k, a[100005];
queue<int> Q;
long long res;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int i=n-1; i>=0; i--) {
        if (!Q.empty() && Q.front()-k>=a[i]) {
            Q.pop();
            Q.push(a[i]);
        } else {
            Q.push(a[i]);
            res += a[i];
        }
    }
    cout << res;
}
    
