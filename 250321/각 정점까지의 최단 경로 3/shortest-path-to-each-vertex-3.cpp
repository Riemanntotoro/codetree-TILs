#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;

int N, M;
vector<pair<int, int>> graph[101];
int dist[101];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    fill(dist, dist + 101, INF);

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist[now] < cost) continue;

        for (auto& next : graph[now]) {
            int nextNode = next.first;
            int nextCost = next.second;

            if (dist[nextNode] > cost + nextCost) {
                dist[nextNode] = cost + nextCost;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    dijkstra(1);

    for (int i = 2; i <= N; ++i) {
        if (dist[i] == INF) cout << "-1\n";
        else cout << dist[i] << "\n";
    }

    return 0;
}
