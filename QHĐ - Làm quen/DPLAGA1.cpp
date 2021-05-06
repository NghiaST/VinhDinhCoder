#include <iostream>
#include <vector>
using namespace std;
int t, n;
const int mod = 1e8;

vector<int> ADD(vector<int> A, vector<int> B) {
    vector<int> C;
    int sum = 0;
    for(int i=0; i<A.size() || i<B.size(); i++) {
        if (i < A.size()) sum += A[i];
        if (i < B.size()) sum += B[i];
        C.push_back(sum%mod);
        sum /= mod;
    }
    if (sum) C.push_back(sum);
    return C;
}
void Print(vector<int> A) {
    cout << A.back(); A.pop_back();
    for(int i=A.size()-1; i>=0; i--) {
        string s = to_string(A[i]);
        while (s.length() < 8) s = '0' + s;
        cout << s;
    }
    cout << '\n';
}
vector<int> f[201];

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    f[0].push_back(1);
    f[1].push_back(1);
    for(int i=2; i<=200; i++) f[i] = ADD(f[i-1], f[i-2]);
    cin >> t;
    while (t--) {
        cin >> n;
        Print(f[n]);
    }
}
    
