#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int INF = 1e9;

int N, M;
int A, B, C;
vector<pii> graph[100005];
int distA[100005], distB[100005], distC[100005];

void dijkstra(int start, int dist[]) {
    fill(dist, dist + N + 1, INF);
    priority_queue<pii, vector<pii>, greater<>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [cost, now] = pq.top(); pq.pop();

        if (cost > dist[now]) continue;

        for (auto &[next, w] : graph[now]) {
            if (dist[next] > dist[now] + w) {
                dist[next] = dist[now] + w;
                pq.push({dist[next], next});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    cin >> A >> B >> C;

    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    dijkstra(A, distA);
    dijkstra(B, distB);
    dijkstra(C, distC);

    int answer = 0;
    for (int i = 1; i <= N; ++i) {
        int nearest = min({distA[i], distB[i], distC[i]});
        answer = max(answer, nearest);
    }

    cout << answer << '\n';
    return 0;
}
