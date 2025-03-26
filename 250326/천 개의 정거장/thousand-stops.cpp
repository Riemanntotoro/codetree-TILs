#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using tiii = tuple<int, int, int, int>; 

const int INF = 1e9;

int A, B, N;
int bus_fare[1001];
vector<int> bus_stops[1001];   
vector<int> buses_by_stop[1001];  
int dist[1001], time_taken[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> A >> B >> N;

    for (int i = 0; i < N; i++) {
        int cnt;
        cin >> bus_fare[i] >> cnt;
        bus_stops[i].resize(cnt);
        for (int j = 0; j < cnt; j++) {
            cin >> bus_stops[i][j];
            buses_by_stop[bus_stops[i][j]].push_back(i);
        }
    }

    for (int i = 1; i <= 1000; i++) {
        dist[i] = INF;
        time_taken[i] = INF;
    }

    priority_queue<tiii, vector<tiii>, greater<>> pq;

    for (int i = 0; i < buses_by_stop[A].size(); i++) {
        int bus = buses_by_stop[A][i];
        for (int j = 0; j < bus_stops[bus].size(); j++) {
            if (bus_stops[bus][j] == A) {
                pq.push({bus_fare[bus], 0, bus, j});
            }
        }
    }

    while (!pq.empty()) {
        auto [cost, t, bus, idx] = pq.top(); pq.pop();
        int stop = bus_stops[bus][idx];

        if (cost > dist[stop]) continue;
        if (cost == dist[stop] && t >= time_taken[stop]) continue;

        dist[stop] = cost;
        time_taken[stop] = t;

        if (idx + 1 < bus_stops[bus].size()) {
            pq.push({cost, t + 1, bus, idx + 1});
        }

        for (int new_bus : buses_by_stop[stop]) {
            if (new_bus == bus) continue;
            for (int i = 0; i < bus_stops[new_bus].size(); i++) {
                if (bus_stops[new_bus][i] == stop) {
                    pq.push({cost + bus_fare[new_bus], t, new_bus, i});
                }
            }
        }
    }

    if (dist[B] == INF)
        cout << "-1 -1\n";
    else
        cout << dist[B] << " " << time_taken[B] << "\n";

    return 0;
}
