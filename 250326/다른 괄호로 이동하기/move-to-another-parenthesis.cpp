#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N, A, B;
char grid[30][30];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int dijkstra(int sy, int sx){
    vector<vector<int>> dist(N, vector<int>(N, INT_MAX));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;

    dist[sy][sx] = 0;
    pq.push({0, {sy, sx}});

    while (!pq.empty()){
        auto [cost, pos] = pq.top(); pq.pop();
        int y = pos.first, x = pos.second;

        if(dist[y][x] < cost) continue;

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i], nx = x + dx[i];
            if(ny < 0 || ny >= N || nx < 0 || nx >= N) continue;

            int ncost = cost + (grid[ny][nx] == grid[y][x] ? A : B);

            if(dist[ny][nx] > ncost){
                dist[ny][nx] = ncost;
                pq.push({ncost, {ny, nx}});
            }
        }
    }

    int maxDist = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            maxDist = max(maxDist, dist[i][j]);

    return maxDist;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin >> N >> A >> B;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> grid[i][j];

    int answer = 0;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            answer = max(answer, dijkstra(i, j));

    cout << answer << '\n';
    return 0;
}
