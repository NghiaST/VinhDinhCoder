#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
#define N 100005
using namespace std;
int cnt, prime[N], f[N];

void eratos() {
    int NN = 1e5;
    for(int i=2; i<=NN; i++) {
        if (!f[i]) f[i] = prime[++cnt] = i;
        int j = 1;
        while (j<=cnt && prime[j]<=f[i] && i*prime[j]<=NN) {
            f[i*prime[j]] = prime[j];
            j++;
        }
    }
    for(int i=2; i<=NN; i++) f[i] = f[i-1] + (f[i] == i);
}

/// count_prime_lehmer
map<int, int> phi_cache[N];

int phi(int x, int a) {
    /* Implementation of the partial sieve function, which
    counts the number of integers <= x with no prime factor less
    than or equal to the ath prime */
    if (phi_cache[a].count(x)) return phi_cache[a][x];
    if (a==1) return (x+1)/2;
    return phi_cache[a][x] = phi(x, a-1) - phi(x / prime[a], a-1);
}

int Pi(int x) {
    if (x <= 1e5) return f[x];
    int a = Pi((int)pow(x, 1.0/4));
    int b = Pi((int)pow(x, 1.0/2));
    int c = Pi((int)pow(x, 1.0/3));
    int sum = phi(x, a) + (b+a-2)*(b-a+1)/2;
    for(int i=a+1; i<=b; i++) sum -= Pi(x/prime[i]);
    for(int i=a+1; i<=c; i++) {
        int bi = Pi(pow(x/prime[i], 1.0/2));
        for(int j=i; j<=bi; j++) sum -= Pi(x/prime[i]/prime[j]) - (j-1);
    }
    return sum;
}

int main()
{
    eratos();
    int t, l, r;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &l, &r);
        cout << Pi(r) - Pi(l-1) << '\n';
    }
}
    
