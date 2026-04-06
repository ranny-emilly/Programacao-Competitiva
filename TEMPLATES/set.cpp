// SET = guarda valores únicos (ordenados automaticamente)

set<int> s;

// inserir elementos
s.insert(5);
s.insert(3);
s.insert(5); // ignorado (não repete)

// tamanho (quantos elementos únicos)
cout << s.size() << endl;

// verificar se existe
if(s.count(3)){
    cout << "tem\n";
}

// remover elemento
s.erase(3);

// 🔁 percorrer com auto (forma moderna)
for(auto &x : s){
    cout << x << endl;
}

*s.begin() // menor elemento
*prev(s.end()) // maior elemento
if(s.count(10)) // procurar -> existe
s.erase(10) // remover

