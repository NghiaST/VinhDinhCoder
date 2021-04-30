#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 2000005
using namespace std;
long long x , Uoc[N];
int cnt, l, r;

int main()
{
    scanf("%I64d", &x);
    for(long long i=1; i*i <= x; i++) if (x%i == 0) {
        cnt++;
        if (i*i < x) cnt++;
    }
    r = cnt;
    cout << x << " co " << cnt << " uoc. Danh sach uoc:\n";
    for(long long i=1; i*i <= x; i++) if (x%i == 0) {
        Uoc[++l] = i;
        Uoc[r--] = x/i;
    }
    FOR(i, 1, cnt) cout << Uoc[i] << '\n';
}
    
