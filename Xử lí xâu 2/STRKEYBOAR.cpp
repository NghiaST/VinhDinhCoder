#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
char s1[26], s2[26], s3[100005], f[256];
int main()
{
    scanf("%s%s%s", &s1, &s2, &s3);
    REP(i, 0, 26) f[s1[i]] = s2[i];
    int n = strlen(s3);
    REP(i, 0, n) {
        if (isdigit(s3[i])) putchar(s3[i]);
        else if ('a' <= s3[i] && s3[i] <= 'z') cout << f[s3[i]];
        else cout << (char) (f[s3[i] + 32] - 32);
    }
}
