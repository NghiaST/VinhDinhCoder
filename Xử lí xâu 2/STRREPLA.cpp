#include <iostream>
#include <vector>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1005
using namespace std;
int n, f[26][N];
char s[N];
vector<int> S[26];

void getres(int cnt, int val) {
    int _size = S[val].size();
    if (cnt > n - _size) cnt = n - _size;
    int l = 0, r = _size, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (cnt + mid >= f[val][mid]) l = mid; else r = mid - 1;
    }
    cout << cnt + l << '\n';
}

void Enter() {
    scanf("%d%s", &n, &s);
    REP(i, 0, n) {
        int val = s[i] - 'a';
        S[val].push_back(i);
        int x = S[val].size();
        REP(j, 1, x) f[val][x - j] = min(f[val][x - j], i - S[val][j] + 1);
        f[val][x] = i - S[val][0] + 1;
    }
}

void Process() {
    int q, k;
    char c;
    scanf("%d", &q);
    while (q--) {
        scanf("%d %c", &k, &c);
        getres(k, c - 'a');
    }
}

int main() {
    Enter();
    Process();
}
    
