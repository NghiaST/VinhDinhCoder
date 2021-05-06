#include <iostream>
#include <algorithm>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n;

int get_res(int x) {
    int nhan = 1, tich = 1, cnt = 0;
    string s = to_string(x);
    cnt = s.length();
    REP(i, 1, cnt) nhan *= 9;
    int vmax = nhan;
    REP(i, 0, cnt) {
        if (s[i] == '0') return vmax;
        vmax = max(vmax, nhan * tich * (s[i] - '1'));
        nhan /= 9;
        tich *= s[i] - '0';
    }
    vmax = max(vmax, tich);
    return vmax;
}

int main() {
    scanf("%d", &n);
    cout << get_res(n);
}
    
