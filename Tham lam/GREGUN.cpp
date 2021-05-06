#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair<int,int> a[100005];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i].first), a[i].second = i+1;
    sort(a, a+n, greater<pair<int,int>>());
    for(int i=0; i<n; i++) res += a[i].first*i + 1;
    cout << res << '\n';
    for(int i=0; i<n; i++) cout << a[i].second << ' ';
}
    
