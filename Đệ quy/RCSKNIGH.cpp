#include <iostream>
#include <queue>
using namespace std;

const int GoX[] = {-2,-1,1,2,2,1,-1,-2}, GoY[] = {-1,-2,-2,-1,1,2,2,1};
int t, n, u, v, cnt, f[11][11];
queue<pair<int,int>> Q[2];

void Go_Knight() {
    Q[0].emplace(u, v);
    int i = 0;
    for(; n--; i^=1) {
        ++cnt;
        while (!Q[i].empty()) {
            pair<int,int> v = Q[i].front(); Q[i].pop();
            for(int j=0; j<8; j++) {
                int x = v.first + GoX[j];
                int y = v.second + GoY[j];
                if (x>0 && x<11 && y>0 && y<11 && f[x][y] != cnt) {
                    f[x][y] = cnt;
                    Q[i^1].emplace(x, y);
                }
            }
        }
    }
    cout << Q[i].size() << '\n';
    while (!Q[i].empty()) Q[i].pop();
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &u, &v, &n);
        Go_Knight();
    }
}
    
