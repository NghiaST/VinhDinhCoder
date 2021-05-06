#include <iostream>
#include <set>
using namespace std;
int n, k, x, sum, a[200005], Ans[200005];
set<pair<int,int>>::iterator p[200005];
set<pair<int,int>> Q;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=1; i<=n; i++) {
        scanf("%d", &x);
        Q.insert(make_pair(x, i));
        a[i] = x;
        sum += x;
    }
    for(set<pair<int,int>>::iterator i=Q.begin(); i != Q.end(); ++i)
        p[i->second] = i;
    set<pair<int,int>>::iterator d = Q.end();
    int sl = n;
    for(int i=n; i>1; i--) {
        if (p[i] == d) {
            if (d != Q.begin()) --d, --sl, sum -= d->first;
                else { sum += d->first; ++d, ++sl; }
        }
        if (d == Q.end() || *p[i] < *d) sum -= a[i], --sl;
        Q.erase(p[i]);
        while (d != Q.end() && sum+a[i]<k) sum+=d->first, ++d, ++sl;
        while (d != Q.begin() && sum+a[i]>k) --d, --sl, sum-=d->first;
        Ans[i] = i - 1 - sl;
    }
    for(int i=1; i<=n; i++) cout << Ans[i] << ' ';
}
    
