#include <iostream>
#include <algorithm>
using namespace std;
int n, a[100005];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int i=0, sum=0; i<n; i++) {
        if (a[i] >= sum) sum += a[i], res++;
    }
    cout << res;
}
    
