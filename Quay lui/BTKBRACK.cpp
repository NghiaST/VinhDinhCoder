#include <iostream>
using namespace std;
long long n, res;
char f[22];

void get_res1(int x, int val) {
    if (x == n) {
        res += (!val);
        return;
    }
    if (n - x > val) f[x] = '(', get_res1(x+1, val+1);
    if (val) f[x] = ')', get_res1(x+1, val-1);
}

void get_res2(int x, long long val) {
    if (x == n) {
        if (val) return;
        for(int i=0; i<n; i++) cout << f[i];
        cout << '\n';
        return;
    }
    if (n - x > val) f[x] = '(', get_res2(x+1, val+1);
    if (val) f[x] = ')', get_res2(x+1, val-1);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    get_res1(0,0);
    cout << res << '\n';
    get_res2(0,0);
}
    
