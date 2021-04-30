#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
char s[100005];
int main()
{
    while (gets(s)) {
        REP(i, 0, strlen(s)) {
            if (s[i] != ' ' || s[i] == ' ' && i && s[i-1] != ' ') putchar(s[i]);
        }
        putchar('\n');
    }
}
