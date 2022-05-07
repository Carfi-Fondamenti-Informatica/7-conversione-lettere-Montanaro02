#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char a;
    cin >> a;
    if (verifica(a)) {
        cout << conversione (a);
    } else {
        cout << "Errore";
    }
    return 0;
}
