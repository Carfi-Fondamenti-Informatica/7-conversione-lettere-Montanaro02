#include "lib.h"
bool verifica(char l) {
    if((l>=65 && l<=90) || (l>=90 && l<=122)){
        return true;
    }else{
        return false;
    }
}
char conversione (char l) {
    char operazione;
    if ((l >= 64 && l < 91)) {
        operazione = l + 32;
        return operazione;
    } else if ((l > 96 && l < 123)) {
        operazione = l - 32;
        return operazione;
    }
}
