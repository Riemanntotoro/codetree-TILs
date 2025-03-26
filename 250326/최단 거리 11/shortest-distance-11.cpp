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
        adj[v].push_back({u, w});
    }

    int start, end;
    cin >> start >> end;

    vector<int> dist(n + 1, INF);
    vector<vector<int>> path(n + 1);

    priority_queue<tuple<int, int, vector<int>>, vector<tuple<int, int, vector<int>>>, greater<>> pq;

    dist[start] = 0;
    pq.push({0, start, {start}});

    while (!pq.empty()) {
        auto [cost, cur, cur_path] = pq.top();
        pq.pop();

        if (cost > dist[cur]) continue;
        if (cost == dist[cur] && !path[cur].empty() && cur_path >= path[cur]) continue;

        path[cur] = cur_path;

        for (auto [next, weight] : adj[cur]) {
            int next_cost = cost + weight;
            vector<int> next_path = cur_path;
            next_path.push_back(next);

            if (dist[next] > next_cost || 
               (dist[next] == next_cost && (path[next].empty() || next_path < path[next]))) {
                dist[next] = next_cost;
                pq.push({next_cost, next, next_path});
            }
        }
    }

    cout << dist[end] << "\n";
    for (int x : path[end]) cout << x << " ";
    cout << "\n";

    return 0;
}
