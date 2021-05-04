#include <iostream>
#include <algorithm>
#include <cstring>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, r;
char s[100005];
string a[100005];

int main() {
    scanf("%s", &s); n = strlen(s);
    REP(i, 0, n) if (isdigit(s[i])) {
        ++r;
        while (i < n && isdigit(s[i])) a[r] = a[r] + s[i++];
        i--;
    }
    sort(a+1, a+r+1, [] (string A, string B) { return A.size() < B.size() || A.size() == B.size() && A < B; });
    r = 0;
    REP(i, 0, n) if (isdigit(s[i])) {
        while (i < n && isdigit(s[i])) i++;
        i--;
        cout << a[++r];
    } else putchar(s[i]);
}
    
