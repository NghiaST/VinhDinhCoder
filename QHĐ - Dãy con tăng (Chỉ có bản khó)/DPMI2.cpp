#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n, d[100005], f[100005];
pair<int,int> a[100005];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while (cin >> n, n!=-1) {
        for(int i=1; i<=n; i++) cin >> a[i].second >> a[i].first;
        sort(a+1, a+n+1);
        for(int i=1; i<=n; i++) d[i] = a[i].first;
        for(int i=1; i<=n; i++)
            f[i] = (f[upper_bound(d+1, d+i+1, a[i].second) - d - 1] + f[i-1] + 1) % 100000000;
        string s = to_string(f[n]);
        while (s.length() < 8) s = '0' + s;
        cout << s << '\n';
    }
}
    
