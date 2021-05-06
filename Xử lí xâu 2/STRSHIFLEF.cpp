#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n;
char s[200005];

int main() {
    bool ok = true;
    scanf("%s", &s); n = strlen(s);
    int j = 0;
    while (j < n && s[j] == 'a') j++;
    if (j == n) {
        REP(i, 0, n-1) putchar('a');
        putchar('z');
        return 0;
    }
    REP(i, 0, j) putchar('a');
    REP(i, j, n) {
        if (s[i] == 'a') ok = false;
        putchar(s[i] - ok);
    }
}
    
