# C++ e STL

Este capítulo registra o padrão mais frequente nas suas soluções: `bits/stdc++.h`, `using namespace std`, macros `_` e `el`, `int main()` e leitura direta com `cin`. Você também indicou `typedef long long ll` como preferência atual; incluí esse alias no template, embora ele não apareça de forma consistente nas soluções `.cpp` auditadas. Os exemplos são C++17.

## Template e convenções

O arquivo para copiar é [TEMPLATES/BASE/base.cpp](../TEMPLATES/BASE/base.cpp). Use `ll` para somas e valores que possam exceder `int`; o alias não aumenta a faixa numérica do tipo.

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define el "\n"
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    _
    return 0;
}
```

**Sobre as macros:** suas soluções frequentemente escrevem `#define el "\n";`. O ponto e vírgula faz parte da expansão e pode criar `;;`; em contextos como `if (cond) cout << el; else ...` pode até invalidar a sintaxe. O template foi normalizado para não incluir esse `;`: use `cout << el;`. A macro `_` contém duas instruções e deve ser usada como linha isolada, como acima. Ela é um nome reservado pela implementação em certos contextos; se um dia quiser eliminar esse risco, use uma função de configuração com nome comum.

`int main()` é o padrão mais comum. Leia `t` apenas quando o enunciado informar múltiplos casos; não presuma que há contador de casos.

## Tipos, contêineres e overflow

- `int` costuma bastar para índices e contagens até alguns bilhões, conforme os limites.
- `long long` (`long long` ou `ll`) cobre aproximadamente até `9.22 × 10^18` em magnitude. Uma soma pode exceder o tipo mesmo que cada elemento caiba.
- Em `accumulate`, o tipo inicial define o tipo da soma: use `0LL` para acumular em `long long`.
- `vector<T> v(n)` cria `n` elementos; índices válidos vão de `0` a `n-1`. Um vetor de prefixos frequentemente tem tamanho `n+1`.
- `string` é indexada como vetor de caracteres; `s.size()` é sem sinal, então cuidado ao misturar com índices negativos.
- `pair<int,int>` guarda dois valores; `.first` e `.second` são os membros. `tuple` é útil para três ou mais campos, mas `struct` nomeada costuma deixar a intenção mais legível.

```cpp
vector<int> numeros = {4, 1, 4};
string palavra = "abc";
pair<int, int> intervalo = {2, 7};
tuple<int, int, int> estado = {1, 2, 3};

long long soma = accumulate(numeros.begin(), numeros.end(), 0LL);
```

## Ordenação e utilitários

Seu [template de ordenação](../TEMPLATES/STL/sort_examples.cpp) usa `sort` crescente e `greater<int>()` decrescente. Para critérios próprios, o comparador deve ser estritamente ordenante: se `a` e `b` forem equivalentes, retorne `false` nos dois sentidos.

```cpp
vector<pair<int, int>> v = {{2, 5}, {1, 9}, {2, 3}};
sort(v.begin(), v.end()); // first crescente; desempate por second crescente

sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
});

reverse(v.begin(), v.end());
swap(v[0], v.back());
```

`min`, `max` e `abs` são úteis, mas mantenha os tipos compatíveis. `abs(LLONG_MIN)` não cabe em `long long`; subtrações podem estourar antes de chegar a `abs`.

## `lower_bound` e `upper_bound`

Não encontrei chamadas a essas funções nas suas soluções `.cpp`; este é um complemento novo da biblioteca. O intervalo precisa estar ordenado segundo a mesma ordem usada na busca.

```cpp
vector<int> v = {1, 3, 3, 5, 7};
int x = 3;

int primeiro_ge = lower_bound(v.begin(), v.end(), x) - v.begin(); // 1
int primeiro_gt = upper_bound(v.begin(), v.end(), x) - v.begin(); // 3
int quantidade = primeiro_gt - primeiro_ge;                       // 2
```

Se não houver elemento correspondente, o iterador pode ser `end()`, cuja diferença para `begin()` é `v.size()`. Em `set`/`map`, use os métodos do próprio contêiner; não subtraia iteradores de árvore. Busca em `vector` custa `O(log n)`; busca binária em `set` usando algoritmo genérico perde essa garantia por causa dos iteradores.

## `priority_queue`

Complemento novo, necessário para Dijkstra. A fila padrão é max-heap; `greater` cria min-heap.

```cpp
priority_queue<int> maior_primeiro;
priority_queue<pair<long long, int>,
               vector<pair<long long, int>>,
               greater<pair<long long, int>>> menor_distancia;
```

Inserir/remover custa `O(log n)`; consultar `top()` custa `O(1)`. Para strings e pares, a ordem padrão é lexicográfica.

### Exercícios

- [CSES — Distinct Numbers](https://cses.fi/problemset/task/1621/)
- [CSES — Concert Tickets](https://cses.fi/problemset/task/1091/)
- [CSES — Ferris Wheel](https://cses.fi/problemset/task/1090/)
