// VECTOR = array dinâmico

vector<int> v; //se não tiver (n) pra limitar


for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x); // final
}

// acesso
cout << v[0]; // elemento

// tamanho
v.size();

// ordenar
sort(v.begin(), v.end());

// percorrer
for(int i = 0; i < v.size(); i++){
    cout << v[i];
}