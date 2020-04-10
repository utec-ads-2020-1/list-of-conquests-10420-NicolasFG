#include <iostream>
#include <string>
#include <map>

using namespace std;


unsigned int leer() {
    unsigned int n;
    cin >> n;
    return n;
}

void imprimir( const map<string, int>& conquistas){
    for(auto & conquista : conquistas) {
        cout << conquista.first <<" "<< conquista.second << endl;
    }
}


void maquina() {
    string ciudad, nombre;
    map <string, int> conquistas;

    auto repeticiones = leer();

    while (repeticiones--) {
        cin >> ciudad;

        getline(cin, nombre);

        conquistas[ciudad] ++;
    }
    imprimir(conquistas);
}

int main() {
    maquina();

    return 0;
}
