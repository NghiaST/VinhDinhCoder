#include <iostream>
#include <algorithm>
using namespace std;
int n, a[100005], res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int i=0, cnt=n-1; i<n && cnt>0; i++) {
        res += min(cnt, a[i]);
        cnt -= min(cnt, a[i]+1);
    }
    cout << res;
}
    
