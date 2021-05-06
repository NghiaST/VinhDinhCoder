#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define N 100005
using namespace std;
int n, q, f_row[N], f_column[N], x, y;
long long row, column;

int main() {
    scanf("%d%d", &n, &q);
    row = column = n;
    while (q--) {
        scanf("%d%d", &x, &y);
        if (!f_row[x]) row--, f_row[x] = true;
        if (!f_column[y]) column--, f_column[y] = true;
        cout << row * column << ' ';
    }
}
    
