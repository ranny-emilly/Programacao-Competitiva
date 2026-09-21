#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

// Definindo um bitset de 32 bits usando typedef para facilitar
typedef bitset<32> _32bits;

// Podemos também criar de tamanhos menores para visualização mais fácil no terminal
typedef bitset<8> _8bits;

int main() { _
    
    cout << "=== 1. DECLARACAO E INICIALIZACAO ===" << endl;
    
    int num = 10;
    _32bits b_num(num);
    cout << "Inteiro (" << num << ") para bitset: " << b_num << endl;
    
    _8bits b_str("101100"); // Note que preenche com zeros a esquerda pra completar os 8 bits
    cout << "String (\"101100\") para bitset: " << b_str << endl;
    
    _8bits b_vazio; // Inicializa tudo com 0
    cout << "Declaracao sem valor (tudo zero): " << b_vazio << endl;
    cout << endl;


    cout << "=== 2. ACESSO E ALTERACAO DE BITS INDIVIDUAIS ===" << endl;
    _8bits b("00000000");
    cout << "Bitset inicial:       " << b << endl;
    
    b[2] = 1; // Liga o bit no indice 2 (da direita para a esquerda, comecando em 0)
    cout << "b[2] = 1:             " << b << endl;
    
    b.set(5); // Outra forma de ligar o bit (indice 5)
    cout << "b.set(5):             " << b << endl;
    
    b.reset(2); // Desliga o bit do indice 2
    cout << "b.reset(2):           " << b << endl;
    
    b.flip(0); // Inverte o bit no indice 0 (era 0, vira 1)
    b.flip(5); // Inverte o bit no indice 5 (era 1, vira 0)
    cout << "b.flip(0) e b.flip(5):" << b << endl;
    
    // Lendo o valor de um bit
    cout << "O bit no indice 0 eh: " << b[0] << endl;
    cout << endl;


    cout << "=== 3. OPERACOES EM LOTE (BITWISE GLOBAIS) ===" << endl;
    _8bits A("11110000");
    _8bits B("10101010");
    
    cout << "A:      " << A << endl;
    cout << "B:      " << B << endl;
    
    cout << "A & B:  " << (A & B) << " (AND: bit 1 se for 1 em ambos)" << endl;
    cout << "A | B:  " << (A | B) << " (OR: bit 1 se for 1 em qualquer um)" << endl;
    cout << "A ^ B:  " << (A ^ B) << " (XOR: bit 1 se forem diferentes)" << endl;
    cout << "~A:     " << (~A)    << " (NOT: inverte todos os bits de A)" << endl;
    
    _8bits C("00001111");
    cout << "\nC antes do Shift: " << C << endl;
    C <<= 2; // Move todos os bits 2 posicoes pra esquerda
    cout << "C <<= 2:          " << C << endl;
    C >>= 1; // Move todos os bits 1 posicao pra direita
    cout << "C >>= 1:          " << C << endl;
    
    // Funcoes que afetam todos os bits
    _8bits D("1010");
    cout << "\nD original: " << D << endl;
    D.set();   cout << "D.set():    " << D << " (liga tudo)" << endl;
    D.reset(); cout << "D.reset():  " << D << " (desliga tudo)" << endl;
    D.flip();  cout << "D.flip():   " << D << " (inverte tudo)" << endl;
    cout << endl;


    cout << "=== 4. CONSULTAS (QUERIES) UTEIS EM CP ===" << endl;
    _8bits E("10010011");
    cout << "Analisando bitset E: " << E << endl;
    
    cout << "E.count(): " << E.count() << " (Quantidade de bits '1')" << endl;
    cout << "E.size():  " << E.size()  << " (Tamanho total do bitset)" << endl;
    
    cout << "E.any():   " << (E.any() ? "true" : "false") << " (Tem algum '1'?)" << endl;
    cout << "E.none():  " << (E.none() ? "true" : "false") << " (Esta todo zerado?)" << endl;
    cout << "E.all():   " << (E.all() ? "true" : "false") << " (Estao todos ligados?)" << endl;
    
    _8bits Vazio("00000000");
    cout << "\nPara um bitset zerado (" << Vazio << "):" << endl;
    cout << "Vazio.none(): " << (Vazio.none() ? "true" : "false") << endl;
    cout << endl;


    cout << "=== 5. CONVERSOES ===" << endl;
    _8bits F("00010101");
    cout << "Bitset F: " << F << endl;
    
    // Convertendo para inteiro
    unsigned long long num_ulong = F.to_ullong();
    cout << "F convertido para inteiro (to_ullong): " << num_ulong << endl;
    
    // Convertendo para string normal do C++
    string str_cpp = F.to_string();
    cout << "F convertido para string  (to_string): " << str_cpp << endl;
    cout << "Primeiro caractere da string: '" << str_cpp[0] << "' (note que na string o indice 0 eh a ESQUERDA!)" << endl;

    return 0;
}