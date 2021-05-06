#include <iostream>
#include <algorithm>
using namespace std;
int n, res, a[100005], b[100005];
int main()
{
    scanf("%d", &n);
    if (n>=3 && (n&1)) putchar('7'), n-=3;
    for(; n; n-=2) putchar('1');
}
    
