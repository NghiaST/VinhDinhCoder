#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, res = 100;
char s[5005];

int range(char a, char b) {
    int x = abs(a-b);
    if (x < 13) return x; else return 26-x;
}

int main() {
    scanf("%d%s", &n, &s);
    REP(i, 3, n)
        res = min(res, range(s[i-3],'A')+range(s[i-2],'C')+range(s[i-1],'T')+range(s[i],'G'));
    cout << res;
}
    
