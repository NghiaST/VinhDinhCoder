#include <iostream>
#include <algorithm>
using namespace std;
int n, r, a[200005], Q[200005], prv[200005], d[200005];

void Print(int x) {
    if (x) Print(prv[x]), cout << x << ' ';
    else cout << r << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    int x, p;
    for(int i=1; i<=n; i++) {
        cin >> x;
        if (!r || Q[r] < x) p = ++r;
        else p = lower_bound(Q+1, Q+r+1, x) - Q;
        Q[p] = x; d[p] = i; prv[i] = d[p-1];
    }
    Print(d[r]);
}
    
