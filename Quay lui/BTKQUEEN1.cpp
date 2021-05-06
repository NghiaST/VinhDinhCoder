#include <iostream>
using namespace std;
int x_first, y_first, fy[9], avail[9][9];

void setup(int x, int y, int val) {
    for(int i=1; i<=8; i++) avail[x][i]+=val, avail[i][y]+=val;
    for(int i=-min(x,y)+1; i<min(9-x, 9-y); i++) avail[x+i][y+i]+=val;
    for(int i=-min(x,9-y)+1; i<min(9-x, y); i++) avail[x+i][y-i]+=val;
}

void Print() {
    for(int i=1; i<=8; i++) if (i != x_first) cout << i << ' ' << fy[i] << '\n';
}

bool dp(int x) {
    if (x == x_first) x++;
    if (x==9) return true;
    for(int i=1; i<=8; i++) if (!avail[x][i]) {
        setup(x, i, 1);
        fy[x] = i;
        if (dp(x+1)) return true;
        setup(x, i, -1);
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> x_first >> y_first;
    setup(x_first, y_first, 1);
    dp(1);
    Print();
}
    
