#include <iostream>
#include <cstring>
using namespace std;
int n1, n2, f[2005][2005];
char s1[2005], s2[2005];
int main()
{
    scanf("%s%s", s1+1, s2+1);
    n1 = strlen(s1+1); n2 = strlen(s2+1);
    for(int i=n1; i; i--)
    for(int j=n2; j; j--) {
        if (s1[i] == s2[j]) f[i][j] = f[i+1][j+1] + 1;
        else f[i][j] = max(f[i][j+1], f[i+1][j]);
    }
    cout << f[1][1] << '\n';
}
    
