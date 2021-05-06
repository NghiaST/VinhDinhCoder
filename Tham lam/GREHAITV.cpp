#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair<int,int> a[200005];
int main()
{
    scanf("%d", &n);
    int x, y;
    for(int i=0; i<n; i++) scanf("%d%d", &a[i].first, &a[i].second);
    sort(a, a+n);
    for(int i=0, p1=-1, p2=-1; i<n; i++) {
        if (a[i].first > p1) p1 = a[i].second;
        else if (a[i].first > p2) {
            p2 = p1;
            p1 = a[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
    
