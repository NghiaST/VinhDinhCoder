#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int n, mod = 1e8;
vector<int> f1, f2, tmp;
string s;

vector<int> operator + (vector<int> A, vector<int> B) {
    vector<int> C;
    int sum = 0;
    for(int i=0; i<A.size() || i<B.size(); i++) {
        if (i < A.size()) sum += A[i];
        if (i < B.size()) sum += B[i];
        C.push_back(sum % mod);
        sum /= mod;
    }
    if (sum) C.push_back(sum);
    return C;
}

void Print(vector<int> A) {
    cout << A.back(); A.pop_back();
    for(int i=A.size() - 1; i>=0; i--) {
        string d = to_string(A[i]);
        while (d.length() < 8) d = '0' + d;
        cout << d;
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while (cin >> s, s!="0") {
        n = s.length();
        f1.clear(); f2.clear();
        f1.push_back(1); f2.push_back(1);
        for(int i=1; i<n; i++) {
            if (s[i] == '0') f1.clear(), f1.push_back(0);
            if (538 <= s[i-1]*10+s[i] && s[i-1]*10+s[i] <= 554) {
                tmp = f1;
                f1 = f1 + f2;
                f2 = tmp;
            } else f2 = f1;
        }
        Print(f1);
    }
}
    
