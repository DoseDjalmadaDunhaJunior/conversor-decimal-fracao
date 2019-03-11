//
// Created by djalma cunha on 2019-03-10.
//

#ifndef CONVERSOR_DECIMAL_FRACAO_SIMPLIFICACAO_HPP
#define CONVERSOR_DECIMAL_FRACAO_SIMPLIFICACAO_HPP
#include <iostream>

class Simplificacao {
public:
    //a funcao abaixo simplifica uma fracao
    void simplifica(int* cima,int* baixo){
        int cont1 = 0, cont2 = 0,up = *cima, down = *baixo;
        while (cont2 == 0) {
            if ((up % 2 == 0) && (down % 2 == 0)) {
                up = up / 2;
                down = down / 2;
                cont1++;
            }
            if ((up % 3 == 0) && (down % 3 == 0)) {
                up = up / 3;
                down = down / 3;
                cont1++;
            }
            if ((up % 5 == 0) && (down % 5 == 0)) {
                up = up / 5;
                down = down / 5;
                cont1++;
            }
            if ((up % 7 == 0) && (down % 7 == 0)) {
                up = up / 7;
                down = down / 7;
                cont1++;
            }
            if (cont1 == 0) {
                cont2 = 1;
            }
            else{
                cont1 = 0;
            }
        }
        *cima = up;
        *baixo = down;
    }
};


#endif //CONVERSOR_DECIMAL_FRACAO_SIMPLIFICACAO_HPP
