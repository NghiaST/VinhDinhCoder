#include <iostream>
#include <cstring>
#define N 5010
using namespace std;

int n, sum, avail[N][N], f[N][N];
string s, Q;

int get_res(int pos, int val) {
    if (pos == n) return (val == 0 ? 0 : 1e9);
    if (avail[pos][val]) return f[pos][val];
    avail[pos][val] = true;
    f[pos][val] = 1e9;
    int gtri = 0;
    for(int i=pos; i<n; i++) {
        gtri = gtri*10 + Q[i] - '0';
        if (gtri > val) break;
        f[pos][val] = min(f[pos][val], get_res(i+1, val - gtri) + 1);
    }
    return f[pos][val];
}

int main()
{
    cin >> s; n = s.length();
    int num = 0, ok = false;
    for(int i=0; i<n; i++) {
        if (s[i] == '=') {
            ok = true;
            continue;
        }
        if (ok) sum = sum*10 + s[i] - '0';
        else {
            if (s[i] != '0') num = 0, Q.push_back(s[i]);
            else if (num < 4) Q.push_back(s[i]), num++;
        }
    }
    n = Q.size();
    cout << get_res(0, sum) - 1;
}
    
