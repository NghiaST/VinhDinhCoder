#include <iostream>
#include <algorithm>
using namespace std;
int n, b[200005];
pair<int,int> a[200005];
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i].first), a[i].second = i;
    sort(a, a+n);
    for(int i=0, p=0; i<n; i++) {
        b[a[i].second] = p = max(p+1, a[i].first);
    }
    for(int i=0; i<n; i++) cout << b[i] << ' ';
}
    
