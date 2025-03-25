#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, int>>> graph(n + 1);
    
    for (int i = 0; i < m; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
    }
    
    int A, B;
    cin >> A >> B;
    
    vector<int> dist(n + 1, INT_MAX);
    vector<int> prev(n + 1, -1);
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[A] = 0;
    pq.push({0, A});
    
    while (!pq.empty()) {
        int cost = pq.top().first;
        int here = pq.top().second;
        pq.pop();
        
        if (cost > dist[here]) continue;
        
        for (auto& edge : graph[here]) {
            int there = edge.first;
            int nextDist = cost + edge.second;
            
            if (nextDist < dist[there]) {
                dist[there] = nextDist;
                prev[there] = here; 
                pq.push({nextDist, there});
            }
        }
    }
    
    cout << dist[B] << "\n";
    
    vector<int> path;
    for (int at = B; at != -1; at = prev[at]) {
        path.push_back(at);
    }
    
    for (int i = path.size() - 1; i >= 0; i--) {
        cout << path[i] << " ";
    }
    cout << "\n";
    
    return 0;
}