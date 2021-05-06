#include <iostream>
#include <algorithm>
using namespace std;
long long n, k;
struct Data{
    int cnt, val, pos;
    bool operator < (Data &other) { return val<other.val || val==other.val && cnt>other.cnt; }
} a[200005];

void Enter() {
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i].cnt >> a[i].val, a[i].pos = i;
    sort(a+1, a+n+1);
}

bool check(int x) {
    long long vv=0, r=0;
    for(int i=1; i<=n && vv + a[i].val <= k; i++)
        if (a[i].cnt >= x) {
            vv += a[i].val;
            r++;
        }
    return r>=x;
}

void Process() {
    int l=0, r=n, mid;
    while (l<r) {
        mid = (l+r+1)/2;
        if (check(mid)) l=mid; else r=mid-1;
    }
    cout << l << '\n' << l << '\n';
    long long vv=0;
    for(int i=1, r=l; i<=n && r; i++)
        if (a[i].cnt >= l) {
            cout << a[i].pos << ' ';
            r--;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    Enter();
    Process();
}
    
