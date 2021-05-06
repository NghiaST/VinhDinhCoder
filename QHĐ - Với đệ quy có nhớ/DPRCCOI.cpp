#include <iostream>
#include <map>
using namespace std;
int n;
map<int, long long> Map;

long long find_res(int pos) {
    if ( pos == 0 || Map[pos] != 0) return Map[pos];
    Map[pos] = max(pos*1LL, find_res(pos/2) + find_res(pos/3) + find_res(pos/4));
    return Map[pos];
}

int main()
{
    while (cin >> n) cout << find_res(n) << '\n';
}
    
