#include <iostream>
#include <algorithm>
#define pii pair<int,int>
using namespace std;
int n, VL, VR, cnt, Save[300005], Q[300005];
pii a[300005], *b[300005];
int main()
{
    scanf("%d%d%d", &n, &VL, &VR);
    int x, y;
    for(int i=1; i<=n; i++) {
        scanf("%d%d", &x, &y);
        if (y>VR) y = VR;
        a[i] = make_pair(x, y);
        b[i] = &a[i];
    }
    sort(b+1, b+n+1, [] (pii *A, pii *B) { return *A < *B; });
    Q[cnt] = VL;
    for(int i=1; i<=n; i++) {
        if (b[i]->first > Q[cnt] || b[i]->second <= Q[cnt]) continue;
        while (cnt && b[i]->first <= Q[cnt-1]) cnt--;
        Q[++cnt] = b[i]->second;
        Save[cnt]= b[i] - a;
    }
    if (Q[cnt] != VR) cout << -1;
    else {
        cout << cnt << '\n';
        for(int i=1; i<=cnt; i++) cout << Save[i] << ' ';
    }
}
    
