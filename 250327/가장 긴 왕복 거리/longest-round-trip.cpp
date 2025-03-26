#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int INF = 1e9;

int N, M, X;
vector<pii> graph[1001];   
vector<pii> reverse_graph[1001];

vector<int> dijkstra(int start, vector<pii> g[]) {
    vector<int> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [cost, cur] = pq.top(); pq.pop();
        if (dist[cur] < cost) continue;

        for (auto &[next, weight] : g[cur]) {
            if (dist[next] > dist[cur] + weight) {
                dist[next] = dist[cur] + weight;
                pq.push({dist[next], next});
            }
        }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> X;
    for (int i = 0; i < M; ++i) {
        int u, v, t;
        cin >> u >> v >> t;
        graph[u].emplace_back(v, t);     
        reverse_graph[v].emplace_back(u, t); 
    }

    vector<int> fromX = dijkstra(X, graph);
    vector<int> toX = dijkstra(X, reverse_graph);

    int answer = 0;
    for (int i = 1; i <= N; ++i) {
        answer = max(answer, fromX[i] + toX[i]);
    }

    cout << answer << '\n';
    return 0;
}
