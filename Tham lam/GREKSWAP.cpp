#include <iostream>
#include <cstring>
using namespace std;
int n, k;
char s[19], c;
int main()
{
    scanf("%s%d", &s, &k);
    n = strlen(s);
    for(int res=0; res<n; res++) {
        int p = res;
        for(int i=res+1; i<n && i-res<=k; i++)
            if (s[i] > s[p]) p = i;
        char now = s[p];
        for(int i=p-1; i>=res; i--) s[i+1] = s[i];
        s[res] = now;
        k -= p-res;
    }
    cout << s;
}
    
