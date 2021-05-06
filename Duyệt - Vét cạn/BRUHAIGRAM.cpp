#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
int f[26][26];

int main() {
    int n, x=0, y=0;
    char c1, c2;
    scanf("%d\n%c", &n, &c1);
    while (--n) {
        c2 = getchar();
        f[c1 - 'A'][c2 - 'A']++;
        c1 = c2;
    }
    FOR(i, 0, 25) FOR(j, 0, 25) if (f[i][j] > f[x][y]) x = i, y = j;
    putchar(x + 'A');
    putchar(y + 'A');
}
    
