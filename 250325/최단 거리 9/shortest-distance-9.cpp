#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<pair<int,int>>> adj(N+1);
    for(int i=0; i<M; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int A,B;
    cin>>A>>B;

    vector<int> dist(N+1, INF);
    vector<int> parent(N+1, -1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    dist[A] = 0;
    pq.push({0,A});

    while(!pq.empty()){
        auto [cost, cur] = pq.top();
        pq.pop();

        if(dist[cur] < cost) continue;

        for(auto nxt : adj[cur]){
            int nextNode = nxt.first;
            int nextDist = nxt.second;

            if(dist[nextNode] > dist[cur]+nextDist ||
              (dist[nextNode] == dist[cur]+nextDist && cur < parent[nextNode])){
                dist[nextNode] = dist[cur]+nextDist;
                parent[nextNode] = cur;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    vector<int> path;
    for(int node=B; node!=-1; node=parent[node])
        path.push_back(node);
    reverse(path.begin(), path.end());

    cout << dist[B] << "\n";
    for(auto node : path)
        cout << node << " ";
    cout << "\n";

    return 0;
}
