#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int res;
char s[100005];
int main()
{
	gets(s);
	REP(i,0,strlen(s)) if ('0' <= s[i] && s[i] <= '9') res++;
	cout << res;
}
    
