# Técnicas em vetores

Use índices consistentes e confira se o intervalo é inclusivo ou semiaberto. Seus exemplos de vetor trabalham principalmente com índices começando em zero.

## Busca binária

O template [binary_search.cpp](../TEMPLATES/BUSCA/binary_search.cpp) procura um valor exato em vetor ordenado. Em cada passo, descarta metade do intervalo: `O(log n)` tempo e `O(1)` memória adicional. A implementação funciona com `n == 0`, mas o programa ainda precisa receber uma entrada válida.

Para procurar a primeira posição que satisfaz uma condição monotônica, mantenha uma fronteira viável e outra inviável. Antes do laço, prove que os limites cobrem a resposta; use `meio = l + (r-l)/2` para evitar overflow na soma dos índices. O predicado deve custar o suficiente para que o total caiba no limite.

## Prefix sum

O template [prefix_sum.cpp](../TEMPLATES/VETORES/prefix_sum.cpp) define `prefixo[i]` como a soma dos primeiros `i` elementos. Assim, soma inclusiva `[l,r]` é `prefixo[r+1] - prefixo[l]`: pré-processamento `O(n)`, consulta `O(1)`, memória `O(n)`.

Exemplo: para `[2, -1, 4]`, prefixos são `[0, 2, 1, 5]`; a soma de índices `[1,2]` é `5 - 2 = 3`. Soma de prefixos funciona com negativos; janelas que dependem de encolher quando a soma cresce geralmente não.

## Dois ponteiros e sliding window

O [template two_pointers.cpp](../TEMPLATES/BUSCA/two_pointers.cpp) encontra o maior tamanho de janela cuja soma não excede um limite. Seu laço é linear, `O(n)`, porque cada ponteiro só avança. A condição essencial é que os valores sejam **não negativos**. Com valores negativos, remover o elemento à esquerda não garante redução da soma.

Para janelas de tamanho fixo `k`, some os primeiros `k` itens e, a cada passo, subtraia o que saiu e some o que entrou. Para janelas variáveis, escreva claramente qual propriedade torna válida a expansão/contração. Se o problema permitir negativos e pedir quantidade de subarrays por soma, prefix sum com mapa de frequências é uma alternativa comum.

## Kadane

O template [kadane.cpp](../TEMPLATES/VETORES/kadane.cpp) foi criado a partir da sua solução CSES [MaxSumSub.cpp](../CSES/SaS/MaxSumSub.cpp). `max_at` é o melhor subarray que termina na posição atual: ou começa de novo ali, ou estende o anterior. `max_gl` guarda o melhor visto.

```cpp
long long maxsum(const vector<long long> &vec) {
    long long max_at = vec[0];
    long long max_gl = vec[0];
    for (int i = 1; i < (int)vec.size(); i++) {
        max_at = max(vec[i], max_at + vec[i]);
        max_gl = max(max_gl, max_at);
    }
    return max_gl;
}
```

Tempo `O(n)`, memória extra `O(1)`. Inicializar com o primeiro valor, em vez de zero, permite responder corretamente quando todos os valores são negativos. A função exige vetor não vazio. A soma usa `long long`, que ainda deve comportar o limite máximo da soma do problema.

### Exercícios

- [CSES — Maximum Subarray Sum](https://cses.fi/problemset/task/1643/)
- [CSES — Subarray Sums I](https://cses.fi/problemset/task/1660/)
- [CSES — Sum of Two Values](https://cses.fi/problemset/task/1640/)
- [CSES — Array Division](https://cses.fi/problemset/task/1085/)
