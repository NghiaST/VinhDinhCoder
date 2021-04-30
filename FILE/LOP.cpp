#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
long long n;
char s[100005];
int main()
{
    while (gets(s)) {
        n = strlen(s);
        while (n > 0 && s[n-1] != ' ') n--;
        REP(i,n,strlen(s)) putchar(s[i]);
        putchar('\n');
    }
}
    
