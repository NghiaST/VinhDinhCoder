#include <iostream>
#include <algorithm>
using namespace std;
int n, res, a[100005];
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int i=0, l=0; i<n; i++) {
        while (l<n && a[i]*2>=a[l]) l++;
        res = max(res, l-i);
    }
    cout << res;
}
    
