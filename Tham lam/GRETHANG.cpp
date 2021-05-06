#include <iostream>
#include <algorithm>
using namespace std;
int t, n, a[100005];
long long res;
int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        cout << min(a[n-2]-1, n-2) << '\n';
    }
}
    
