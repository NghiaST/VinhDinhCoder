#include <iostream>
#include <algorithm>
using namespace std;
int n, a[100005];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n, greater<int>());
    for(int i=0; i<n; i+=2) res += a[i] - a[i+1];
    cout << res;
}
    
