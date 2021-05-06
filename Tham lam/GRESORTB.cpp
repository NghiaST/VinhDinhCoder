#include <iostream>
#include <set>
using namespace std;
int n, x, a[200005], b[200005];
multiset<int> Q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> x, Q.insert(x);
    for(int i=1; i<=n; i++) {
        auto p = Q.lower_bound((n-a[i])%n);
        if (p == Q.end()) p = Q.begin();
        cout << (a[i] + *p) % n << ' ';
        Q.erase(p);
    }
}
    
