#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    _

    // lista de adjacencia: cada vertice guarda seus vizinhos
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grafo(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Este exemplo espera vertices de 0 a n-1.
        // Se a entrada vier de 1 a n, decremente u e v antes de usar como indice.
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    for (int vertice = 0; vertice < n; vertice++) {
        cout << vertice << ":";
        for (int vizinho : grafo[vertice]) {
            cout << " " << vizinho;
        }
        cout << el;
    }

    return 0;
}
