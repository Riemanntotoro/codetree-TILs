#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // 양방향
    }

    int A, B;
    cin >> A >> B;

    vector<int> dist(n + 1, INF);
    dist[A] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, A});

    while (!pq.empty()) {
        auto [cost, u] = pq.top(); pq.pop();
        if (dist[u] < cost) continue;

        for (auto [v, w] : adj[u]) {
            int new_cost = cost + w;
            if (dist[v] > new_cost) {
                dist[v] = new_cost;
                pq.push({new_cost, v});
            }
        }
    }

    cout << dist[B] << '\n';
    return 0;
}
