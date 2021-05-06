#include <iostream>
using namespace std;
int n, k, x, v, res;

int main() {
    scanf("%d%d", &n, &k);
    while (n--) {
        scanf("%d", &x);
        v -= k;
        if (v <= x) v = x;
        else if (res < v-x) res = v-x;
    }
    cout << res;
}
    
