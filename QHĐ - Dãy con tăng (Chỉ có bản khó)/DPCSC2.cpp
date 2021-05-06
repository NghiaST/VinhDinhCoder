#include <iostream>
#include <algorithm>
using namespace std;
int n, f[100005];
pair<int,int> a[100005];

void Enter() {
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i].first, a[i].second = i;
    sort(a+1, a+n+1);
}

void Process() {
    int res = 0;
    for(int d=1; d<=50; d++) {
        for(int i=1, l=0; i<=n; i++) {
            while (a[l+1] < a[i]) l++;
            if (a[l].first == a[i].first) f[i] = f[l] + 1;
                else f[i] = 1;
            a[i].first += d;
            if (res < f[i]) res = f[i];
        }
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Enter();
    Process();
}
    
