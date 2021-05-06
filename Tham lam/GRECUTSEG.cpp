#include <iostream>
#include <algorithm>
using namespace std;
int t, n, nxt[100005];
pair<int,int> a[100005];

void ReadInt(int &x)
{
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x<<3) + (x<<1) + c - '0', c = getchar();
}

int main()
{
    ReadInt(t);
    while (t--) {
        ReadInt(n);
        for(int i=1; i<=n; i++) ReadInt(a[i].first), a[i].second = i;
        sort(a+1, a+n+1);
        a[n+1].first = -1;
        for(int i=1; i<=n; i++)
            if (a[i].first == a[i+1].first) nxt[a[i].second] = a[i+1].second;
            else nxt[a[i].second] = n+1;
        int _left=0, _right=0;
        for(int i=1, lft=1, rgt=n+1; i<=n; i++) {
            if (rgt>nxt[i]) rgt=nxt[i];
            if (rgt==i) {
                if (_left) cout << _left << ' ' << _right << '\n';
                _left = lft; _right = rgt;
                lft=i+1; rgt=n+1;
            }
        }
        if (!_left) cout << "-1\n";
        else cout << _left << ' ' << n << '\n';
    }
}
    
