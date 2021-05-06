#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 300005
using namespace std;
int n, cnt[3], f[3];
char s[N];

void Process() {
    REP(i, 0, n) cnt[s[i] - '0']++;
    REP(i, 0, 3) cnt[i] -= n/3;
    REP(i, 0, n) {
        int x = s[i] - '0';
        if (f[x] == n/3) {
            REP(j, 0, 3) if (cnt[j] < 0) {
                cnt[j]++;
                cnt[x]--;
                s[i] = j + '0';
                break;
            }
        }
        else if (cnt[x] > 0) {
            REP(j, 0, x) if (cnt[j] < 0) {
                cnt[j]++;
                cnt[x]--;
                s[i] = j + '0';
                break;
            }
        }
        if (s[i] - '0' == x) f[x]++;
    }
    REP(i, 0, n) putchar(s[i]);
}

int main() {
    scanf("%d%s", &n, &s);
    Process();
}
    
