#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<int> List[35];
int n, Q[35];
bool f[35][35];
char s[35];

void Solve(int x, int cnt) {
    if (x == n) {
        for(int i=0, j=0; i<cnt; i++) {
            for(; j<=Q[i]; j++) cout << s[j];
            cout << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i : List[x]) {
        Q[cnt] = i;
        Solve(i+1, cnt+1);
    }
}

int main()
{
    scanf("%s", &s);
    n = strlen(s);
    for(int i=0; i<n; i++) {
        f[i][i] = true;
        if (i && s[i] == s[i-1]) f[i-1][i] = true;
    }
    for(int i=2; i<n; i++) {
        for(int j=0; j<n-i; j++)
            if (s[j] == s[i+j]) f[j][i+j] = f[j+1][i+j-1];
    }
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
        if (f[i][j]) List[i].push_back(j);
    Solve(0, 0);
}
    
