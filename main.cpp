#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char a;
    cin >> a;
    if (lettere (a)) {
        cout << conversione (a);
    } else {
        cout << "errore";
    }
    return 0;
}
