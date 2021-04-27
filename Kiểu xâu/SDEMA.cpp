#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int res;
char s[100005];
int main()
{
	gets(s);
	REP(i,0,strlen(s)) if (s[i] == 'A') res++;
	cout << res;
}
    
