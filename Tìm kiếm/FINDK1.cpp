#include <iostream>
using namespace std;
int n, k, x;

int main() {
    scanf("%d%d", &n, &k);
    while (n--) {
        scanf("%d", &x);
        if (x == k) { cout << "YES"; return 0; }
    }
    cout << "NO";
}
    
