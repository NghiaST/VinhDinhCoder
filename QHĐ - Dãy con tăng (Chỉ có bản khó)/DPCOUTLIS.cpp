#include <iostream>
#include <algorithm>
#include <vector>
#define N 100005
using namespace std;
const int mod = 1e9+7;
int n, r, a[N], Q[N];

struct Data{
    vector<int> Q, D;
    int getBIT(int x) {
        int p = upper_bound(Q.begin(), Q.end(), x, greater<int>()) - Q.begin();
        int val = D.back();
        if (p) val = (val - D[p-1] + mod) % mod;
        return val;
    }
    void update(int x, int val) {
        Q.push_back(x);
        if (!D.empty()) val += D.back();
        D.push_back(val % mod);
    }
} T[N];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    T[0].update(-1000000001, 1);
    for(int i=1, p; i<=n; i++) {
        if (!r || Q[r] < a[i]) p = ++r;
        else p = lower_bound(Q+1, Q+r, a[i]) - Q;
        Q[p] = a[i];
        int val = T[p-1].getBIT(a[i]);
        T[p].update(a[i], T[p-1].getBIT(a[i]));
    }
    cout << T[r].getBIT(1000000001);
}
    
