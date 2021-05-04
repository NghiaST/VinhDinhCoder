#include <iostream>
#include <algorithm>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, a[100005];
char s[100005];

int main() {
    scanf("%s", &s); n = strlen(s);
    REP(i, 0, n) a[i] = (s[i] + 91) % 182;
    sort(a, a + n, greater<int>());
    REP(i, 0, n) cout << (char) ((a[i] + 91) % 182);
}
    
