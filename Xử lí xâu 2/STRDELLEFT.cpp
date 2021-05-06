#include <iostream>
#include <cstring>
using namespace std;
int n, n1, n2;
char s1[200005], s2[200005];

int main()
{
    scanf("%s%s", &s1, &s2);
    n1 = strlen(s1);
    n2 = strlen(s2);
    n = min(n1, n2);
    int i = 1;
    for(; i<=n; i++) if (s1[n1-i] != s2[n2-i]) break;
    cout << n1 + n2 - i*2 + 2;
}
    
