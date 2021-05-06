#include <iostream>
using namespace std;
long long n, res, f[30];

void get_res(int x, int val, int vmin) {
    if (!val) {
        cout << n << " = " << f[0];
        for(int i=1; i<x; i++) cout << '+' << f[i];
        cout << '\n';
        return;
    }
    for(int i=vmin; i<=val; i++) f[x] = i, get_res(x+1, val-i, i);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    get_res(0,n,1);
}
    
