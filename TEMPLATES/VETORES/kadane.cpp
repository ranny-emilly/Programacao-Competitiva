#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

vector<long long> vec;

long long maxsum() {
    long long max_at = vec[0];
    long long max_gl = vec[0];

    for (int i = 1; i < (int)vec.size(); i++) {
        max_at = max(vec[i], max_at + vec[i]);
        max_gl = max(max_at, max_gl);
    }

    return max_gl;
}

int main() {
    _

    int n;
    cin >> n;

    // O problema de soma maxima de subarray exige n >= 1.
    vec.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << maxsum() << el;

    return 0;
}
