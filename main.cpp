#include <iostream>
using namespace std;

int main() {
    char l;
    cin >> l;
    if ((l > 64 && l < 91) || (l > 96 && l < 123)) {
        cout << "vero\n";
        if ((l >= 64 && l < 91)) {
            l = l + 32;
            cout << l;
        } else if ((l > 96 && l < 123)) {
            l = l - 32;
            cout << l;
        } else {
            cout << "Errore";
        }
        return 0;
    }
}
