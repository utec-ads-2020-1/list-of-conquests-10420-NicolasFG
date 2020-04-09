#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    unsigned int n;
    string ciudad, nombre;
    cin >> n;
    map <string, int> conquistas;

    while (n--) {
        cin >> ciudad;

        getline(cin, nombre);

        conquistas[ciudad] ++;
    }

    for(auto & conquista : conquistas) {
        cout << conquista.first <<" "<< conquista.second << endl;
    }
    return 0;
}
