#include <iostream>
using namespace std;
int n, Q[105], res = 1000, Ans[105];

bool check(int x) {
    for(int i=1; i*2<=x+1; i++) {
        bool ok = true;
        for(int j=0; j<i; j++) if (Q[x-j] != Q[x-i-j]) {
            ok = false;
            break;
        }
        if (ok) return false;
    }
    return true;
}

void getres(int x, int sl) {
    if (x == n) {
        if (res > sl) {
            res = sl;
            for(int i=0; i<n; i++) Ans[i] = Q[i];
        }
        return;
    }
    if (sl + (n-x)/4 >= res) return;
    for(int i=0; i<3; i++) {
        Q[x] = i;
        if (check(x)) getres(x+1, sl + (i==2));
    }
}

int main()
{
    cin >> n;
    getres(0, 0);
    for(int i=0; i<n; i++) putchar(Ans[i] + 'A');
}
    
