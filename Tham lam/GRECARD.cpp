#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long res;
pair<int,int> a[100005];
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d%d", &a[i].second, &a[i].first);
    sort(a, a+n, greater<pair<int,int>>());
    for(int i=0, now=1; i<n && now>0; i++) {
        now += a[i].first - 1;
        res += a[i].second;
    }
    cout << res;
}
    
