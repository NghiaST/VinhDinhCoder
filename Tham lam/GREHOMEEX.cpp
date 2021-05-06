#include <iostream>
using namespace std;
int n, x, f[10], sum;
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        f[x]++;
    }
    if (!f[0]) cout << -1;
    else {
        for(int i=0; i<10; i++) sum += i*f[i];
        sum %= 3;
        if (sum) {
            int ok = 0;
            for(int i=sum; i<10; i+=3) if (f[i]) {
                f[i]--;
                ok = 1;
                break;
            }
            if (ok) n--;
            else {
                ok = 2;
                for(int i=3-sum; i<10; i+=3) if (f[i]) {
                    int q = min(f[i], ok);
                    f[i]-=q;
                    ok -= q;
                }
                n-=2;
            }
        }
        for(int i=9; i>=0; i--)
            for(int j=f[i]; j; j--) cout << i;
    }
}
    
