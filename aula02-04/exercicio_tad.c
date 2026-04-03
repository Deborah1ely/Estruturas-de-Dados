#include "exercicio_tad.h"

Funcao atribuicao(int f1, int f2){ 
    Funcao res_n ;

    res_n.a = f1;
    res_n.b = f2;
    
    return res_n;
}


Funcao calcMultiplicacao(Funcao f1, Funcao f2){
    Funcao res_n;

    res_n.a = f1.a * f2.a;
    res_n.b = f1.b * f2.b;

    return res_n;
}
