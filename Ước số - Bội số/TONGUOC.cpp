#include <iostream>
using namespace std;
long long n, x, sum, cnt;
int main() {
    scanf("%I64d", &n);
    while (n--) {
        scanf("%I64d", &x);
        sum = cnt = 0;
        for(long long i=1; i*i <= x; i++) if (x%i == 0) {
            cnt++; sum += i;
            if (i*i < x) cnt++, sum += x/i;
        }
        cout << x << " co " << cnt << " uoc. Tong uoc la: " << sum << '\n';
    }
}
    
