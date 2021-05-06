#include <iostream>
using namespace std;

int main() {
    int n, t, m, x;
    scanf("%d%d%d", &n, &t, &m);
    int r = n - m, res = 0;
    while (n--) {
        scanf("%d", &x);
        if (x > t) r = n - m;
        if (n <= r) res++;
    }
    cout << res;
}
    
