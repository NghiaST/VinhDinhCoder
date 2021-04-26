#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9;

vector<int> operator + (vector<int> A, vector<int> B) {
    long long nho = 0;
    vector<int> C;
    for(int i = 0; i < A.size() || i < B.size(); i++) {
        if (i < A.size()) nho += A[i];
        if (i < B.size()) nho += B[i];
        C.push_back(nho % mod);
        nho /= mod;
    }
    if (nho) C.push_back(nho);
    return C;
}

vector<int> operator / (vector<int> A, long long B) {
    long long nho = 0;
    for(int i = A.size() - 1; i >= 0; i--) {
        nho = nho * mod + A[i];
        A[i] = nho / B;
        nho %= B;
    }
    while (!A.empty() && !A.back()) A.pop_back();
    return A;
}

int main()
{
	long long n;
	cin >> n;
	vector<int> Q, chia;
	for(int i = 1; i <= 5; i++) chia.push_back(0); chia.push_back(1);
	for(int i = 1; i <= n; i++) {
        chia = chia / i;
        Q = Q + chia;
	}
	cout << Q.back() << '.';
	long long v = Q[Q.size() - 2];
	v *= 10;
	long long x = Q[Q.size() - 3] / 10000000;
	if (x%10 >= 5) x = x/10 + 1; else x = x/10;
	v += x;
    string s = to_string(v);
    while (s.length() < 10) s = '0' + s;
    cout << s;
}
