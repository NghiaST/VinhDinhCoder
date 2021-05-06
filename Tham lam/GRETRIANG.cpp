#include <iostream>
#include <algorithm>
using namespace std;
int n, p1, p2, a[100005];
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for(int i=0; i<n; i++) {
        if (a[i] < p1 + p2) {
            cout << "YES";
            return 0;
        }
        p2 = p1;
        p1 = a[i];
    }
    cout << "NO";
}
    
