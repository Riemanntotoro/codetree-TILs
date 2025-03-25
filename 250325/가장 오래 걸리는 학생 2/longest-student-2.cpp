#include <bits/stdc++.h>
using namespace std;
using ll = long long;
static const ll INF = LLONG_MAX;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<pair<int,ll>>> adj(N+1);
    for(int i = 0; i < M; i++){
        int u, v;
        ll w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<ll> dist(N+1, INF);
    dist[N] = 0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    pq.push({0, N});

    while(!pq.empty()){
        auto [cd, u] = pq.top();
        pq.pop();
        if(cd > dist[u]) continue;
        for(auto &edge : adj[u]){
            int v = edge.first;
            ll w = edge.second;
            ll nd = cd + w;
            if(dist[v] > nd){
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }

    ll ans = 0;
    for(int i = 1; i <= N; i++){
        ans = max(ans, dist[i]);
    }
    cout << ans << "\n";
    return 0;
}
