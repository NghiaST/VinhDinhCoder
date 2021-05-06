#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n;
char s[200005];

int main() {
    scanf("%s", &s);
    n = strlen(s);
    s[n] = '@';
    putchar(s[0]);
    REP(i, 1, n) {
        if (s[i] == s[i-1]) {
            s[i] = 'a';
            while (s[i] == s[i-1] || s[i] == s[i+1]) s[i]++;
        }
        putchar(s[i]);
    }
}
    
