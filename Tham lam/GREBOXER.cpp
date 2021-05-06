#include <iostream>
#include <algorithm>
using namespace std;
int n, a[150005], res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int i=0, now=0; i<n; i++) {
        if (a[i]-1 > now) now = a[i]-1, res++;
        else if (a[i] > now) now = a[i], res++;
        else if (a[i]+1 > now) now = a[i]+1, res++;
    }
    cout << res;
}
    
