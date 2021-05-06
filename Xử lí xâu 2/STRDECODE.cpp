#include <iostream>
using namespace std;
int n;
char s[2005];
int main()
{
    scanf("%d%s", &n, &s);
    for(int i = n - 2; i >= 0; i -= 2) putchar(s[i]);
    for(int i = (n-1)&1; i < n; i += 2) putchar(s[i]);
}
    
