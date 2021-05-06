#include <iostream>
#include <cstring>
#include <set>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
using namespace std;
int n, f[256];
char s[1005];
set<string> S1;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%s", &s);
        REP(i, 'a', 'z') f[i] = false;
        REPD(i, strlen(s), 0) f[s[i]] = true;
        string T = "";
        REP(i, 'a', 'z') if (f[i]) T = (char)i + T;
        S1.insert(T);
    }
    cout << S1.size();
}
    
