#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int INF = 1e9 + 7;

int N, M;
int red1, red2;
vector<pii> graph[100001];
vector<int> dijkstra(int start) {
    vector<int> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty()) {
        auto [cost, cur] = pq.top(); pq.pop();
        if (dist[cur] < cost) continue;
        for (auto [next, w] : graph[cur]) {
            if (dist[next] > cost + w) {
                dist[next] = cost + w;
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
    cin >> red1 >> red2;

    set<int> red = {red1, red2};

    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }

    vector<int> fromR1 = dijkstra(red1);
    vector<int> fromR2 = dijkstra(red2);

    int answer = INF;
    for (int i = 1; i <= N; ++i) {
        if (red.count(i)) continue; 

        if (fromR1[i] == INF || fromR2[i] == INF || fromR1[red2] == INF)
            continue;

        int route1 = fromR1[i] + fromR2[red1] + fromR2[i];
        int route2 = fromR2[i] + fromR1[red2] + fromR1[i];
        answer = min({answer, route1, route2});
    }

    if (answer == INF)
        cout << -1 << '\n';
    else
        cout << answer << '\n';

    return 0;
}
