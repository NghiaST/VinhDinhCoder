#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int a[9][9];
bool row[9][10], column[9][10], area[3][3][10];

bool dp(int x, int y) {
    if (x == 9)
        return true;
    int _x = x + (y+1)/9, _y = (y+1)%9;
    if (a[x][y]) return dp(_x, _y);
    for(int i=1; i<10; i++) {
        if (!row[x][i] && !column[y][i] && !area[x/3][y/3][i]) {
            row[x][i] = true;
            column[y][i] = true;
            area[x/3][y/3][i] = true;
            a[x][y] = i;
            if (dp(_x, _y)) return true;
            row[x][i] = false;
            column[y][i] = false;
            area[x/3][y/3][i] = false;
            a[x][y] = 0;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x;
    REP(i, 0, 9) REP(j, 0, 9) {
        cin >> x;
        row[i][x] = true;
        column[j][x] = true;
        area[i/3][j/3][x] = true;
        a[i][j] = x;
    }
    dp(0,0);
    REP(i, 0, 9) {
        REP(j, 0, 9) cout << a[i][j] << ' ';
        cout << '\n';
    }
}
    
