#include <iostream>
#include <algorithm>
using namespace std;
int n, k, p1, p2, x1, x2, Q[100005];
pair<int,int> a[100005];
int main()
{
    scanf("%d%d%d%d", &n, &k, &p1, &p2);
    for(int i=0; i<n; i++) {
        scanf("%d%d", &x1, &x2);
        a[i] = make_pair(x1*p1 + x2*p2, i+1);
    }
    sort(a, a+n);
    int i=0;
    for(; i<n && k>=a[i].first; k-=a[i++].first) Q[i] = a[i].second;
    sort(Q, Q+i);
    cout << i << '\n';
    for(int j=0; j<i; j++) cout << Q[j] << ' ';
}
    
