#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int a[10], c[10], res;
char s1[100005], s[100005];
int main()
{
    scanf("%s%s", &s1, &s);
    for(int i=strlen(s1)-1; i>=0; i--) c[s1[i]-'0']++;
    c[6] += c[9]; c[9] = 0;
    c[2] += c[5]; c[5] = 0;
    for(int i=strlen(s)-1; i>=0; i--) a[s[i]-'0']++;
    a[6] += a[9];
    a[2] += a[5];
    int res = 100000;
    for(int i=0; i<10; i++) if (c[i]) res = min(res, a[i]/c[i]);
    if (res == 100000) cout << 0; else cout << res;
}
    
