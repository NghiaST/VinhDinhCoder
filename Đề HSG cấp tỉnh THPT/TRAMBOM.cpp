#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int n, k, res, a[1000005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+n+1);
    res = 1e9;
    for(int i=k; i<=n; ++i) res = min(res, a[i] - a[i-k+1]);
    cout << res;
}
