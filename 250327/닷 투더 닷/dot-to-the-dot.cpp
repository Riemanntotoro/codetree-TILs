#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<ll, int>;

const ll INF = 1e18;

int N, M, X;
struct Edge {
    int to;
    ll L;
    int C;
};
vector<Edge> graph[505];
set<int> c_values;

ll dijkstra(int min_c) {
    vector<ll> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [cost, cur] = pq.top(); pq.pop();

        if (dist[cur] < cost) continue;

        for (auto &[next, len, c] : graph[cur]) {
            if (c < min_c) continue;

            if (dist[next] > dist[cur] + len) {
                dist[next] = dist[cur] + len;
                pq.push({dist[next], next});
            }
        }
    }

    return dist[N];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> X;

    for (int i = 0; i < M; ++i) {
        int u, v, l, c;
        cin >> u >> v >> l >> c;
        graph[u].push_back({v, l, c});
        graph[v].push_back({u, l, c});
        c_values.insert(c);
    }

    ll result = INF;

    for (int c : c_values) {
        ll b = dijkstra(c); 
        if (b == INF) continue;

        ll total_time = b + X / c; 
        result = min(result, total_time);
    }

    cout << result << '\n';
    return 0;
}
