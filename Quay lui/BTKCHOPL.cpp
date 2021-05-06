#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n, k, a[10], f[10];

int Print() {
    for(int i=0; i<k; i++) cout << f[i] << ' ';
    cout << '\n';
}

void dp(int x) {
    if (x == k) { Print(); return; }
    for(int i=0; i<n; i++) {
        f[x] = a[i];
        dp(x+1);
    }
}

int main()
{
    cin >> k >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    cout << pow(n, k) << '\n';
    dp(0);
}
    
