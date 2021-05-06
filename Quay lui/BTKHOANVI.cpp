#include <iostream>
using namespace std;
int n, a[10], f[10];

int Print() {
    for(int i=0; i<n; i++) cout << a[i] << ' ';
    cout << '\n';
}

void dp(int x) {
    if (x == n) { Print(); return; }
    for(int i=0; i<n; i++) if (!f[i]) {
        f[i] = 1;
        a[x] = i + 1;
        dp(x+1);
        f[i] = 0;
    }
}

int main()
{
    cin >> n;
    dp(0);
}
    
