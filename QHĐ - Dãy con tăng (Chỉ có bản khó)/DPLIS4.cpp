/// binary_search_map
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int n, res;

struct Data{
    map<int,int> A;
    bool find(int x, int y) {
        map<int,int>::iterator p = A.lower_bound(x);
        if (p == A.begin()) return false;
        --p;
        return p->second < y;
    }
    void add(int x, int y) {
        map<int,int>::iterator p = A.lower_bound(x), i = p;
        while (i != A.end() && i->second >= y) i++;
        A.erase(p, i);
        A.insert(make_pair(x,y));
    }
} a[100005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    int u, v;
    for(int i=1; i<=n; i++) {
        cin >> u >> v;
        int l = 0, r = res, mid;
        while (l<r) {
            mid = (l+r+1)/2;
            if (a[mid].find(u, v)) l = mid; else r = mid-1;
        }
        if (res<=l) res=l+1;
        a[l+1].add(u, v);
    }
    cout << res;
}
    
