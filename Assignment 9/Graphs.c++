#include <bits/stdc++.h>
using namespace std;

                      //DSU for Kruskal//
class DSU {
public:
    vector<int> parent, rankv;
    DSU(int n) {
        parent.resize(n);
        rankv.assign(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
    void unite(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx != ry) {
            if (rankv[rx] < rankv[ry]) swap(rx, ry);
            parent[ry] = rx;
            if (rankv[rx] == rankv[ry]) rankv[rx]++;
        }
    }
};

                          //KRUSKAL MST//
void kruskalMST(int V, vector<tuple<int,int,int>> &edges) {
    sort(edges.begin(), edges.end(),
         [](auto &a, auto &b) { return get<2>(a) < get<2>(b); });

    DSU dsu(V);
    int mst_weight = 0;

    cout << "\nKruskal MST Edges:\n";
    for (auto &e : edges) {
        int u, v, w;
        tie(u, v, w) = e;
        if (dsu.find(u) != dsu.find(v)) {
            dsu.unite(u, v);
            cout << u << " -- " << v << " (" << w << ")\n";
            mst_weight += w;
        }
    }
    cout << "Total MST Weight = " << mst_weight << "\n";
}

                            //PRIM MST//
void primMST(int V, vector<vector<pair<int,int>>> &adj) {
    vector<bool> inMST(V, false);
    vector<int> key(V, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    key[0] = 0;
    pq.push({0, 0});

    int total = 0;
    cout << "\nPrim MST Edges:\n";

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (inMST[u]) continue;

        inMST[u] = true;
        total += key[u];

        for (auto edge : adj[u]) {
            int v = edge.first;     // FIXED
            int w = edge.second;    // FIXED

            if (!inMST[v] && w < key[v]) {
                key[v] = w;
                pq.push({key[v], v});
            }
        }
    }
    cout << "Total MST Weight = " << total << "\n";
}

                //DIJKSTRA SHORTEST PATH//
void dijkstra(int V, vector<vector<pair<int,int>>> &adj, int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "\nDijkstra Shortest Distances from " << src << ":\n";
    for (int i = 0; i < V; i++)
        cout << "Vertex " << i << " → Distance = " << dist[i] << "\n";
}

                  // MAIN PROGRAM//
int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<tuple<int,int,int>> edges;
    vector<vector<pair<int,int>>> adj(V);

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(make_tuple(u, v, w));
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << "\nChoose Operation:\n";
    cout << "1. Kruskal MST\n";
    cout << "2. Prim MST\n";
    cout << "3. Dijkstra Shortest Path\n";
    cout << "Enter choice: ";

    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        kruskalMST(V, edges);
        break;

    case 2:
        primMST(V, adj);
        break;

    case 3: {
        int src;
        cout << "Enter source vertex: ";
        cin >> src;
        dijkstra(V, adj, src);
        break;
    }

    default:
        cout << "Invalid Choice!\n";
    }

    return 0;
}
