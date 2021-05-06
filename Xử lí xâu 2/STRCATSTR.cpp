#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, p;
long long res;
char s[1000005];

int main() {
    scanf("%s", &s);
    n = strlen(s);
    REP(i, 2, n) {
        if (s[i-2] == 'c' && s[i-1] == 'a' && s[i] == 't') p = i-1;
        res += p;
    }
    cout << res;
}
    
