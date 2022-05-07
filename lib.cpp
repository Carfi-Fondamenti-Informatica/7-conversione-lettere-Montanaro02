#include "lib.h"

bool lettere(char a){
    if (((a>=65)&&(a<=90))||(a>=97)&&(a<=122)) {
        return true;
    } else {
        return false;
    }
}

char conversione (char a){
    char operazione;
    if ((a>=65)&&(a<=90)) {
        operazione=a+32;
        return operazione;
    } else if ((a>=97)&&(a<=122)) {
        operazione=a-32;
        return operazione;
    }
}
