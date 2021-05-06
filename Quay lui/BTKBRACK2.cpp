#include <iostream>
#include <cstring>
#include <algorithm>
#define setBIT(x, i) (x|(1<<i))
#define getBIT(x, i) ((x>>i)&1)
using namespace std;
int n, cnt, f[25], avail[1048576];
string Q[123456];
char s[25];

void get_res(int x, int l, int r, int val, int pos) {
    if (x == n) {
        if (!avail[pos]) {
            avail[pos] = true;
            for(int i=n-1; i>r; i--) Q[cnt].push_back((getBIT(pos,i) ? ')' : '('));
            cnt++;
        }
        return;
    }
    if (f[x+1] >= val) get_res(x+1, l+1, r, val, setBIT(pos, l));
    if (s[x] == '(' && f[x+1] > val) get_res(x+1, l, r-1, val+1, pos);
    if (s[x] == ')' && f[x] >= val && val) get_res(x+1, l, r-1, val-1, setBIT(pos, r));
}

int main()
{
    gets(s); n = strlen(s);
    for(int i=n-1; i>=0; i--) f[i] = f[i+1] + (s[i] == ')');
    avail[(1<<n)-1] = true;
    get_res(0,0,n-1,0,0);
    cout << cnt << '\n';
    sort(Q, Q+cnt);
    for(int i=0; i<cnt; i++) {
        /*int val = 0;
        for(int j=n-1; j>=0; j--) {
            if (getBIT(Q[i], j)) val--; else val++;
            if (val>=0) putchar(getBIT(Q[i], j) + '(');
            else break;
        }*/
        cout << Q[i];
        putchar('\n');
    }
}
    
