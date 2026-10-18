# Matemática

## MDC e MMC

Seu [gcd_lcm.cpp](../TEMPLATES/MATEMATICA/gcd_lcm.cpp) aplica o algoritmo de Euclides: repetidamente substitui `(a,b)` por `(b,a mod b)`. Tempo `O(log(min(a,b)))`. Em C++17 também existe `std::gcd` em `<numeric>`.

Para `a` e `b` não nulos, `mmc(a,b) = abs((a / mdc(a,b)) * b)`. Dividir antes de multiplicar reduz o risco de overflow, mas não o elimina: o MMC pode não caber em `long long`. `abs(LLONG_MIN)` também não é representável. Trate limites do enunciado explicitamente.

## Primalidade e crivo

Para um único `n`, testar divisores até `d <= n/d` custa `O(sqrt(n))` e evita o overflow de `d*d`. Para muitas consultas até um limite `N`, Crivo de Eratóstenes marca múltiplos começando em `p*p`, usando `long long` para o produto. Tempo `O(N log log N)`, memória `O(N)`.

```cpp
vector<bool> primo(n + 1, true);
if (n >= 0) primo[0] = false;
if (n >= 1) primo[1] = false;
for (long long p = 2; p * p <= n; p++) if (primo[p])
    for (long long x = p * p; x <= n; x += p) primo[x] = false;
```

Esse trecho é adequado quando `n` cabe em memória; para limites grandes, é necessário outro método.

## Módulo e exponenciação binária

Em aritmética módulo `M`, normalize subtrações com `((x % M) + M) % M`. A exponenciação binária calcula `a^e mod M` em `O(log e)`:

```cpp
long long mod_pow(long long a, long long e, long long mod) {
    long long ans = 1 % mod;
    a %= mod;
    while (e > 0) {
        if (e & 1) ans = ans * a % mod;
        a = a * a % mod;
        e >>= 1;
    }
    return ans;
}
```

O produto `ans * a` pode exceder `long long`; esse exemplo requer que os resíduos e seu produto caibam. Para módulos grandes, use `__int128` (extensão disponível em GCC/Clang) ou técnica apropriada ao ambiente. Inverso por Fermat `a^(M-2)` só vale quando `M` é primo e `a` não é divisível por `M`.

### Exercícios

- [CSES — Counting Divisors](https://cses.fi/problemset/task/1713/)
- [CSES — Common Divisors](https://cses.fi/problemset/task/1081/)
- [CSES — Exponentiation](https://cses.fi/problemset/task/1095/)
