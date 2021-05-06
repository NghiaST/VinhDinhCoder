#include <iostream>
using namespace std;
int n, sum, f[6], x, res;
int main()
{
    scanf("%d", &n);
    sum = (n*9+1)/2;
    for(int i=0; i<n; i++) scanf("%d", &x), f[x]++, sum -= x;
    int now = 1;
    while (sum>0) {
        while (!f[now]) now++;
        sum -= 5 - now;
        f[now]--;
        res++;
    }
    cout << res;
}
    
