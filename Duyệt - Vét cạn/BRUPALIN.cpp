#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 10005
using namespace std;
int cnt, n;
char s[N];

int main() {
    scanf("%s", &s);
    n = strlen(s);
    REP(i, 0, n/2) cnt += (s[i] != s[n-i-1]);
    cout << (cnt == 1 || cnt == 0 && n&1 ? "YES" : "NO");
}
    
