#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long strong;
pair<int,int> a[100005];
long long res;
int main()
{
    scanf("%lld%d", &strong, &n);
    for(int i=0; i<n; i++) scanf("%d%d", &a[i].first, &a[i].second);
    sort(a, a+n);
    for(int i=0; i<n; i++) if (strong > a[i].first) strong += a[i].second;
    else {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}
    
