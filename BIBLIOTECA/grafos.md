# Grafos

## Representação

Use lista de adjacência quando o grafo é esparso: `vector<vector<int>> grafo(n)`. Para aresta não direcionada `(u,v)`, registre os dois sentidos; para direcionada, só `u -> v`. Suas soluções CSES frequentemente usam rótulos `1..n`; os templates genéricos usam `0..n-1`. Converta a entrada uma única vez ou dimensione o vetor para `n+1`.

Veja [graph_adj_list.cpp](../TEMPLATES/GRAFOS/graph_adj_list.cpp). A lista usa `O(n+m)` memória.

## DFS e componentes conexas

DFS marca um vértice antes de visitar vizinhos. Assim cada vértice/aresta é processado um número constante de vezes: `O(n+m)` tempo, `O(n)` de visitados, além da pilha. Seu código real usa recursão em [CountingRooms.cpp](../CSES/Graph/CountingRooms.cpp), [BuildingRoads.cpp](../CSES/Graph/BuildingRoads.cpp) e [RoundTrip.cpp](../CSES/Graph/RoundTrip.cpp); exemplos genéricos estão em [dfs_recursive.cpp](../TEMPLATES/GRAFOS/dfs_recursive.cpp) e [connected_components.cpp](../TEMPLATES/GRAFOS/connected_components.cpp).

Para contar componentes, inicie uma DFS em cada vértice ainda não visitado e incremente a contagem. Em grade, valide limites antes de acessar células. Recursão profunda pode estourar a pilha em caminhos longos; para limites grandes, use pilha explícita.

## BFS, distâncias e reconstrução

BFS com fila encontra menor distância em número de arestas para grafo sem pesos (ou pesos iguais). Marque distância ao enfileirar, não ao retirar, para não inserir o mesmo vértice várias vezes. Complexidade `O(n+m)`.

```cpp
vector<int> dist(n, -1), pai(n, -1);
queue<int> fila;
dist[inicio] = 0;
fila.push(inicio);
while (!fila.empty()) {
    int u = fila.front(); fila.pop();
    for (int v : grafo[u]) if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        pai[v] = u;
        fila.push(v);
    }
}
```

Se `dist[fim] != -1`, reconstrua seguindo `pai[fim]` até `-1` e inverta o vetor. O template [bfs_basic.cpp](../TEMPLATES/GRAFOS/bfs_basic.cpp) mostra distâncias, sem reconstrução.

## Ciclos

Em grafo não direcionado, DFS com `pai` ignora a aresta que volta ao pai; uma aresta para outro vértice já visitado indica ciclo. Se houver arestas paralelas, comparar apenas o vértice pai pode esconder ciclo de comprimento 2; nesse caso guarde o identificador da aresta pai.

Em grafo direcionado, use estados: `0` não visitado, `1` na pilha atual, `2` finalizado. Aresta para estado `1` encontra ciclo; estado `2` não prova ciclo. A pilha de recursão tem o mesmo risco de profundidade da DFS.

## Bipartição

Tente colorir vizinhos com cores opostas, usando BFS/DFS em cada componente. Se uma aresta liga vértices da mesma cor, não é bipartido. Tempo `O(n+m)`. Isso detecta a existência de ciclo ímpar; não é um algoritmo de coloração mínima.

## Dijkstra

Complemento novo da biblioteca: distâncias mínimas com pesos **não negativos**. Heap mínimo com pares `(distância, vértice)`; descarte entradas antigas quando saírem da fila.

```cpp
using ll = long long;
const ll INF = LLONG_MAX;
vector<ll> dist(n, INF);
priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
dist[s] = 0;
pq.push({0, s});
while (!pq.empty()) {
    pair<ll, int> atual = pq.top(); pq.pop();
    ll du = atual.first;
    int u = atual.second;
    if (du != dist[u]) continue;
    for (const auto &aresta : grafo[u]) {
        int v = aresta.first;
        ll peso = aresta.second;
        if (du <= LLONG_MAX - peso && du + peso < dist[v]) {
            dist[v] = du + peso;
            pq.push({dist[v], v});
        }
    }
}
```

Use arestas como `vector<vector<pair<int,ll>>>`; o teste de soma evita overflow para pesos não negativos. `O((n+m) log m)` com heap binário. Pesos negativos invalidam Dijkstra.

### Exercícios

- [CSES — Counting Rooms](https://cses.fi/problemset/task/1192/)
- [CSES — Building Roads](https://cses.fi/problemset/task/1666/)
- [CSES — Message Route](https://cses.fi/problemset/task/1667/)
- [CSES — Building Teams](https://cses.fi/problemset/task/1668/)
- [CSES — Round Trip](https://cses.fi/problemset/task/1669/)
- [CSES — Shortest Routes I](https://cses.fi/problemset/task/1671/)
