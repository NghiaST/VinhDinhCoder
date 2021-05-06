#include <iostream>
#include <cstring>
#define N 205
#define M 2005
using namespace std;
const int mod = 1e9 + 7;
int n, cnt, f[N][M], avail[N][M];
string s;

int get_res(int pos, int len) {
    if (pos == n) return 1;
    if (avail[pos][len] == cnt) return f[pos][len];
    avail[pos][len] = cnt;
    f[pos][len] = 0;
    int sum = 0, i = pos;
    for(int i=pos, sum=0; i<n; i++) {
        sum += s[i] - '0';
        if (sum >= len) f[pos][len] = (f[pos][len] + get_res(i+1, sum)) % mod;
    }
    return f[pos][len];
}

int main()
{
    while (getline(cin, s), ++cnt, s != "bye") {
        n = s.length();
        cout << cnt << ". " << get_res(0, 0) << '\n';
    }
}
    
