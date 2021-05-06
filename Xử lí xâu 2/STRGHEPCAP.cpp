#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
using namespace std;
int f[256];
char s1[100005], s2[100005], s3[100005];
int main()
{
    scanf("%s%s%s", &s1, &s2, &s3);
    REPD(i, strlen(s1), 0) f[s1[i]]++;
    REPD(i, strlen(s2), 0) f[s2[i]]++;
    REPD(i, strlen(s3), 0) f[s3[i]]--;
    REP(i, 0, 256) if (f[i]) { cout << "NO"; return 0; }
    cout << "YES";
}
    
