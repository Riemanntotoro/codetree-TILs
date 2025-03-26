#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int N, A, B;
char grid[30][30];
int maxDist = 0;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int bfs(int sy, int sx){
    int dist[30][30];
    memset(dist, -1, sizeof(dist));
    queue<pair<int, int>> q;
    q.push({sy, sx});
    dist[sy][sx] = 0;

    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny<0||ny>=N||nx<0||nx>=N) continue;
            if(dist[ny][nx] != -1) continue;

            if(grid[ny][nx] == grid[y][x])
                dist[ny][nx] = dist[y][x] + A;
            else
                dist[ny][nx] = dist[y][x] + B;

            q.push({ny, nx});
        }
    }

    int localMax = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(dist[i][j] > localMax)
                localMax = dist[i][j];
        }
    }
    return localMax;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> A >> B;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin >> grid[i][j];

    int answer = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            answer = max(answer, bfs(i, j));

    cout << answer - 1 << '\n';

    return 0;
}
