#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int N, M;
vector<tuple<int, int, int>> edges;
vector<pair<int, int>> adj[251];

vector<ll> dijkstra(int start) {
    vector<ll> dist(N + 1, INF);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, now] = pq.top(); pq.pop();
        if (d > dist[now]) continue;
        for (auto [next, cost] : adj[now]) {
            if (dist[next] > dist[now] + cost) {
                dist[next] = dist[now] + cost;
                pq.push({dist[next], next});
            }
        }
    }
    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int u, v, w; cin >> u >> v >> w;
        edges.push_back({u, v, w});
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    vector<ll> base_dist = dijkstra(1);
    ll original = base_dist[N];

    ll answer = 0;

    for (auto &[u, v, w] : edges) {
        vector<pair<int, int>> temp[251];
        for (int i = 0; i <= N; ++i) temp[i] = adj[i];

        for (auto& [to, cost] : temp[u]) {
            if (to == v && cost == w) {
                cost = 2 * w;
                break;
            }
        }
        for (auto& [to, cost] : temp[v]) {
            if (to == u && cost == w) {
                cost = 2 * w;
                break;
            }
        }

        vector<ll> dist(N + 1, INF);
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
        dist[1] = 0;
        pq.push({0, 1});

        while (!pq.empty()) {
            auto [d, now] = pq.top(); pq.pop();
            if (d > dist[now]) continue;
            for (auto [next, cost] : temp[now]) {
                if (dist[next] > dist[now] + cost) {
                    dist[next] = dist[now] + cost;
                    pq.push({dist[next], next});
                }
            }
        }

        if (dist[N] < INF) {
            answer = max(answer, dist[N] - original);
        }
    }

    cout << answer << '\n';
    return 0;
}
