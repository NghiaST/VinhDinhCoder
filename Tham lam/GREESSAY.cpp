#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair<int,int> a[200005];
long long r, avg, res;
int main()
{
    scanf("%d%lld%lld", &n, &r, &avg);
    avg = (avg*2)*n/2;
    for(int i=0; i<n; i++) {
        scanf("%d%d", &a[i].second, &a[i].first);
        avg -= a[i].second;
    }
    sort(a, a+n);
    for(int i=0; avg>0; i++) {
        long long p = max(0ll, min(avg, r - a[i].second));
        avg -= p;
        res += p * a[i].first;
    }
    cout << res;
}
    
