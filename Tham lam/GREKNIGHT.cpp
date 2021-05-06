#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int n, k;
long long sum, Ans[100005];
priority_queue<int, vector<int>, greater<int>> Q;
stack<int> P;
struct Data{
    int x, y, z;
    bool operator < (Data &other) { return x<other.x; }
} a[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i].x;
    for(int i=1; i<=n; i++) cin >> a[i].y, a[i].z = i;
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        if (a[i].x != a[i-1].x) {
            while (!P.empty()) Q.push(P.top()), sum += P.top(), P.pop();
        }
        P.push(a[i].y);
        while (Q.size() > k) sum -= Q.top(), Q.pop();
        Ans[a[i].z] = a[i].y + sum;
    }
    for(int i=1; i<=n; i++) cout << Ans[i] << ' ';
}
    
