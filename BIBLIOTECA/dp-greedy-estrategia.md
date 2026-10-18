# DP, greedy e estratégia de prova

## Como abordar um problema

1. Reescreva o que precisa ser calculado e os limites de `n`, valores e consultas.
2. Faça um exemplo pequeno à mão; identifique casos extremos e o que é estado/resposta.
3. Comece com uma solução direta e estime seu custo. Procure a estrutura que reduz esse custo.
4. Defina invariantes e prove por que cada passo mantém a resposta correta.
5. Implemente, compile e teste: menor entrada, valores extremos, duplicatas, ordenação, desconexão e casos aleatórios pequenos contra uma força bruta.

Não escolha técnica apenas por palavra-chave. `O(n^2)` pode ser suficiente para `n` pequeno; `O(n log n)` pode falhar se houver repetição desnecessária ou constantes altas.

## Complexidade e TLE

Some o trabalho de todos os laços e chamadas. Ordenar custa `O(n log n)`; duas varreduras lineares continuam `O(n)`. `O(n^2)` faz cerca de `10^10` iterações em `n=10^5` e tende a ser inviável. Memória de `vector<T>(n)` é proporcional a `n*sizeof(T)`; duas matrizes `n*m` podem dominar o limite. O tempo permitido e hardware variam: use os limites do enunciado, não uma conversão rígida de operações por segundo.

## Programação dinâmica

DP organiza subproblemas repetidos em estados. Defina claramente: o significado de `dp[i]`, casos base, transição e ordem de cálculo. Uma recursão memoizada evita recalcular estados; uma versão iterativa evita pilha de chamadas.

Exemplo Fibonacci: `dp[i] = dp[i-1] + dp[i-2]`, bases `dp[0]=0`, `dp[1]=1`; `O(n)` tempo e `O(n)` memória, reduzível a `O(1)` guardando os dois últimos. O exemplo ensina mecânica, mas Fibonacci geralmente não é o problema final.

### DP em sequências: LIS

Para subsequência estritamente crescente, mantenha `tails[k]` como o menor final possível de uma subsequência crescente de tamanho `k+1`. Para cada `x`, substitua o primeiro valor `>= x` (`lower_bound`). O tamanho de `tails` é a resposta. `O(n log n)` tempo e `O(n)` memória. Para subsequência não decrescente, a busca muda para `upper_bound`.

## Greedy

Greedy toma a melhor decisão local disponível. Ordenar intervalos pelo menor fim e aceitar o próximo compatível maximiza a quantidade de intervalos em scheduling clássico. A justificativa é troca: existe uma solução ótima cujo primeiro intervalo termina tão cedo quanto a escolha gulosa; substituí-lo não reduz espaço para escolhas seguintes. Não aplique a regra a variantes sem verificar compatibilidade e objetivo.

### Exercícios

- [CSES — Dice Combination](https://cses.fi/problemset/task/1633/)
- [CSES — Increasing Subsequence](https://cses.fi/problemset/task/1145/)
- [CSES — Movie Festival](https://cses.fi/problemset/task/1629/)
- [CSES — Minimizing Coins](https://cses.fi/problemset/task/1634/)

## Debug e revisão antes de submeter

- Teste o menor caso válido e os extremos dos limites.
- Verifique `n=0/1` apenas quando permitido, vetor todo igual, todo negativo e resposta inexistente.
- Confirme se a entrada é 0-based ou 1-based e se intervalos são inclusivos.
- Confira overflow em produtos, somas e `abs`; índices e tamanho dos vetores.
- Em BFS, marque ao enfileirar; em DFS, marque antes de recursar; em Dijkstra, descarte estado obsoleto.
- Para falhas difíceis, gere casos pequenos aleatórios e compare com solução lenta simples.
- Compile com avisos durante estudo (`-Wall -Wextra -Wshadow`); remova debug de `cerr` na submissão.
