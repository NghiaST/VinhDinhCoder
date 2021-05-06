#include <iostream>
#include <cstring>
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
using namespace std;
int n;
char s[2005];
int main()
{
    scanf("%s",&s); n = strlen(s);
    if (n&1) {
        putchar(s[n/2]);
        REPD(i, n/2, 0) putchar(s[n-i-1]), putchar(s[i]);
    } else
    REPD(i, n/2, 0) putchar(s[i]), putchar(s[n-i-1]);
}
    
