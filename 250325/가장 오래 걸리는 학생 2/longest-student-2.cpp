#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<pair<int, int>>> graph(N + 1);
    
    for (int i = 0; i < M; i++) {
        int u, v, d;
        cin >> u >> v >> d;
        graph[u].push_back({v, d});
    }

    vector<int> max_time_to_reach(N + 1, 0);
    
    for (int start = 1; start <= N; start++) {
        vector<int> distance(N + 1, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        distance[start] = 0;
        pq.push({0, start});
        
        while (!pq.empty()) {
            int dist = pq.top().first;
            int current = pq.top().second;
            pq.pop();
            
            if (dist > distance[current]) continue;
            
            for (auto& edge : graph[current]) {
                int next = edge.first;
                int next_dist = dist + edge.second;
                
                if (next_dist < distance[next]) {
                    distance[next] = next_dist;
                    pq.push({next_dist, next});
                }
            }
        }
        
        for (int dest = 1; dest <= N; dest++) {
            if (dest != start && distance[dest] != INT_MAX) {
                max_time_to_reach[dest] = max(max_time_to_reach[dest], distance[dest]);
            }
        }
    }
    
    int max_time = 0;
    for (int i = 1; i <= N; i++) {
        max_time = max(max_time, max_time_to_reach[i]);
    }
    
    cout << max_time << endl;
    
    return 0;
}