#include <iostream>
#include <cstring>
using namespace std;
int f[2005][2005], avail[2005][2005];
string s;

int getV(int l, int r) {
    if (avail[l][r]) return f[l][r];
    avail[l][r] = true;
    if (l>r) return f[l][r] = 0;
    if (l == r) return f[l][r] = 1;
    if (s[l]==s[r]) return f[l][r] = getV(l+1, r-1) + 2;
    else return f[l][r] = max(getV(l, r-1), getV(l+1, r));
}

void Print(int l, int r) {
    if (l>r) return;
    if (l==r) {
        cout << s[l];
        return;
    }
    if (s[l] == s[r]) {
        cout << s[l];
        Print(l+1, r-1);
        cout << s[l];
        return;
    }
    if (f[l][r] == f[l][r-1]) Print(l, r-1);
    else Print(l+1, r);
}

int main() {
    cin >> s;
    getV(0, s.length() - 1);
    Print(0, s.length() - 1);
}
    
