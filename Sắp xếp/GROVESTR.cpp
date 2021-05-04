#include <iostream>
#include <algorithm>
#include <cstring>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define REPD(i, r, l) for(int i = (r) - 1; i >= (l); i--)
#define N 1000005
using namespace std;
int n;
char s[N];

int main() {
    scanf("%s", &s); n = strlen(s);
    sort(s, s+n);
    int l=0, r=n-1;
    FOR(i, 0, n/2) putchar(s[i*2]);
    REPD(i, n/2, 0) putchar(s[i*2 + 1]);
}
    
