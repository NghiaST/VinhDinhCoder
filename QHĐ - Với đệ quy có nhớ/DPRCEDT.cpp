#include <iostream>
#include <cstring>
using namespace std;
int t, n1, n2, cnt, f[2005][2005], avail[2005][2005];
char s1[2005], s2[2005];

int get_min(int p1, int p2) {
    if (p1 < 0 || p2 < 0) return p1 + p2 + 2;
    if (avail[p1][p2] == cnt) return f[p1][p2];
    avail[p1][p2] = cnt;
    if (s1[p1] == s2[p2]) return f[p1][p2] = get_min(p1-1, p2-1);
    return f[p1][p2] = min(get_min(p1-1, p2), min(get_min(p1, p2-1), get_min(p1-1, p2-1))) + 1;
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%s%s", &s1, &s2);
        n1 = strlen(s1); n2 = strlen(s2);
        ++cnt;
        cout << get_min(n1-1, n2-1) << '\n';
    }
}
    
