#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
int n1, n2, f[256];
char s1[N], s2[N];
pair<int,int> Q[N];

void Process() {
    if (n1 < n2) {
        cout << 0;
        return;
    }
    int res = 0, cnt = n2;
    REP(i, 0, n2) f[s2[i]]++;
    REP(i, 0, n2-1) if (f[s1[i]]-- > 0) cnt--;
    REP(i, n2-1, n1) {
        if (f[s1[i]]-- > 0) cnt--;
        if (cnt == -f['?']) res++;
        if (++f[s1[i - n2 + 1]] > 0) cnt++;
    }
    cout << res;
}

int main() {
    scanf("%s%s", &s1, &s2);
    n1 = strlen(s1); n2 = strlen(s2);
    Process();
}
    
