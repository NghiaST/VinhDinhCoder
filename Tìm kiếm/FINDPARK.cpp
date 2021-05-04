#include <iostream>
using namespace std;
int n, m, c1, c2;

void Enter() {
    scanf("%d%d%d%d", &n, &m, &c1, &c2);
}

long double get_val(long long x) {
    long long team1 = n / x, team2 = team1 + 1;
    long long cnt_team2 = n % x, cnt_team1 = x - cnt_team2;
    return (c1 + (long double)c2*(team1-1)*(team1-1)) * cnt_team1 + (c1 + (long double)c2*(team2-1)*(team2-1)) * cnt_team2;
}

void Process() {
    long long l = 1, r = m, mid1, mid2;
    while (l < r - 2) {
        mid1 = (l*2 + r) / 3;
        mid2 = (l + r*2) / 3;
        if (get_val(mid1) < get_val(mid2)) r = mid2; else l = mid1;
    }
    cout << (long long) min(get_val(l), min(get_val(r), get_val((l+r)/2)));
}

int main() {
    Enter();
    Process();
}
    
