#include <iostream>
#include <deque>
using namespace std;
int n, k, x;
long long res, f[100005];
deque<int> Q;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    Q.push_back(0);
    for(int i=1; i<=n; i++) {
        cin >> x;
        while (!Q.empty() && Q.front() < i-k) Q.pop_front();
        f[i] = f[Q.front()] + x;
        while (!Q.empty() && f[i] > f[Q.back()]) Q.pop_back();
        Q.push_back(i);
        res = max(res, f[i]);
    }
    cout << res;
}
    
