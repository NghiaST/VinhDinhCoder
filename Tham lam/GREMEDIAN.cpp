#include <iostream>
using namespace std;
int n, k, x, p1, p2, p3, res;
int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        if (x == k) p2++;
        else if (x < k) p1++;
        else p3++;
    }
    if (!p2) p2++, res++;
    if (p1 + p2 >= p3 && p2 + p3 > p1) cout << res;
    else {
        if (p1 + p2 < p3) cout << p3 - p2 - p1 + res;
        else cout << p1 + 1 - p2 - p3 + res;
    }
}
    
