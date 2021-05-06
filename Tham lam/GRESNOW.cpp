#include <iostream>
#include <algorithm>
#include <queue>
#define pii pair<int,int>
using namespace std;
int n, cnt, a[100005], p[100005], res, Q1[100005], Q2[100005], Q3[100005];
priority_queue<pair<int,int>> Q;
long long k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        if (a[i] == a[i-1]) p[cnt]++;
        else p[++cnt]++, a[cnt] = a[i];
    }
    for(int i=1; i<=cnt; i++) Q.emplace(p[i], a[i]);
    while (Q.size() > 2) {
        pii now1 = Q.top(); Q.pop();
        pii now2 = Q.top(); Q.pop();
        pii now3 = Q.top(); Q.pop();
        if (now1.second < now2.second) swap(now1, now2);
        if (now2.second < now3.second) swap(now2, now3);
        if (now1.second < now2.second) swap(now1, now2);
        Q1[++res] = now1.second;
        Q2[res] = now2.second;
        Q3[res] = now3.second;
        if (--now1.first) Q.push(now1);
        if (--now2.first) Q.push(now2);
        if (--now3.first) Q.push(now3);
    }
    cout << res << '\n';
    for(int i=1; i<=res; i++) cout << Q1[i] << ' ' << Q2[i] << ' ' << Q3[i] << '\n';
}
    
