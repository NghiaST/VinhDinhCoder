#include <iostream>
using namespace std;
int k, r = 1, sum = 1, Q[10];

void add(int x) {
    Q[x]++; sum++;
    while (x && (sum == 11 || Q[x] == 10)) {
        sum -= Q[x] - 1;
        Q[x--] = 0;
        Q[x]++;
    }
    if (!x) r++, Q[1] = 1;
}

int main() {
    Q[1] = 1;
    scanf("%d", &k);
    while (--k) add(r);
    for(int i=1; i<=r; i++) cout << Q[i];
    cout << 10 - sum;
}
    
