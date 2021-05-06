#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1000005
using namespace std;
int n;
char s1[N], s2[N];

int main() {
    scanf("%s%s", &s1, &s2); n = strlen(s2);
    int l = 0, r = n-1;
    for(int &i = l; i < n; i++) if (s1[i] != s2[i]) break;
    for(int &i = r; i>=0; i--) if (s1[i + 1] != s2[i]) break;
    cout << max(0, l - r) << '\n';
    REP(i, r, l) cout << i+2 << ' ';
}
    
