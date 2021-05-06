#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, r, vmax, Q[2555], f[256];
char s[2555];

int main() {
    scanf("%d%s", &n, &s);
    if (n%4) { cout << "NO"; return 0; }
    REP(i, 0, n)
        if (s[i] == '?') Q[r++] = i;
        else f[s[i]]++;
    vmax = max(max(f['A'], f['C']), max(f['G'], f['T']));
    if (vmax > n/4) { cout << "NO"; return 0; }
    vmax = n/4;
    int j = 0;
    while (f['A'] < vmax) s[Q[j++]] = 'A', f['A']++;
    while (f['C'] < vmax) s[Q[j++]] = 'C', f['C']++;
    while (f['G'] < vmax) s[Q[j++]] = 'G', f['G']++;
    while (f['T'] < vmax) s[Q[j++]] = 'T', f['T']++;
    REP(i, 0, n) cout << s[i];
}
    
