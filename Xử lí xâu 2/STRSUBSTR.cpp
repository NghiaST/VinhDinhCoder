#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n;
char s[1000005];

int main() {
    scanf("%s", &s);
    n = strlen(s);
    int dau = 'a';
    REP(i, 0, n) if (dau <= 'z' && s[i] <= dau) s[i] = dau++;
    if (dau <= 'z') cout << -1;
    else REP(i, 0, n) putchar(s[i]);
}
    
