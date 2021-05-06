#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n;
char s[300005];

int main() {
    scanf("%d%s", &n, &s);
    REP(i, 1, n) if (s[i] < s[i-1]) {
        cout << "YES\n" << i << ' ' << i+1;
        return 0;
    }
    cout << "NO";
}
    
