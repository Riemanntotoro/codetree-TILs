#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int n, m, k;
int from[300000], to[300000], weight[300000];
vector<pair<int,int>> graph[20001];
int dist[20001];

void dijkstra(int start) {
    fill(dist, dist + n + 1, INF);
    dist[start] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist[now] < cost) continue;

        for (auto next : graph[now]) {
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
    cin >> n >> m;
    cin >> k;

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i] >> weight[i];
        graph[from[i]].push_back({to[i], weight[i]});
        graph[to[i]].push_back({from[i], weight[i]}); 
    }

    dijkstra(k);

    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) cout << -1 << '\n';
        else cout << dist[i] << '\n';
    }

    return 0;
}
