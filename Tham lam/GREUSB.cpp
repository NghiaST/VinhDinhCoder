#include <iostream>
#include <algorithm>
using namespace std;
int n, m, a[1005];
int main()
{
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n, greater<int>());
    int i=0;
    while (m>0) m -= a[i++];
    cout << i;
}
    
