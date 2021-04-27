#include <bits/stdc++.h>
using namespace std;
int res;
char s[100005];
int main()
{
	gets(s); res = strlen(s);
	gets(s); if (res < strlen(s)) res = strlen(s); 
	cout << res;
}
    
