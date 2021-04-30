#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector<ll> mill = {2,3,5,7,11,13,17,19,23};

ll mulmod(ll x, ll y, ll mod)
{
    ll q = (long double) x * y / mod;
    ll ans = x*y - mod*q;
    ans = (ans%mod+mod)%mod;
    return ans;
}

pair<ll, ll> factor(ll x) {
    ll s = 0;
    while (!(x&1)) s++, x>>=1;
    return {s,x};
}

ll power(ll a, ll k, ll mod) {
    ll p = 1;
    for(a = a%mod; k; k/=2)
    {
        if (k&1) p = mulmod(p, a, mod);
        a = mulmod(a, a, mod);
    }
    return p;
}

bool test_v(ll a, ll d, ll s, ll n) {
    if (a == n) return true;
    ll x = power(a, d, n);
    if (x == 1) return true;
    for(; s; s--) {
        if (x == n-1) return true;
        x = mulmod(x, x, n);
    }
    return false;
}

bool check_miller(ll x) {
    if (x < 2) return false;
    if (!(x&1)) return (x == 2);
    pair<ll, ll> w = factor(x-1);
    for(ll v : mill) if (!test_v(v, w.second, w.first, x)) return false;
    return true;
}

int main() {
    long long n;
    scanf("%lld", &n);
    cout << (check_miller(n) ? "YES" : "NO");
}
    
