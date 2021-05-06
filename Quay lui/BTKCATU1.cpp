#include <iostream>
using namespace std;
long long n, m, w[25], v[25];

long long get_res(int x, long long val, long long weight) {
    if (weight > m) return 0;
    if (x == n) return val;
    return max(get_res(x+1, val, weight), get_res(x+1, val + v[x], weight + w[x]));
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> w[i] >> v[i];
    cout << get_res(0, 0, 0);
}
    
