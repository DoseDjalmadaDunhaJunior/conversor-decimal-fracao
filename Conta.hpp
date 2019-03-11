//
// Created by djalma cunha on 2019-03-09.
//

#ifndef CONVERSOR_DECIMAL_FRACAO_CONTA_HPP
#define CONVERSOR_DECIMAL_FRACAO_CONTA_HPP

#include<math.h>
#include <sstream>
#include "StringChar.hpp"
#include "Simplificacao.hpp"

class Conta {
private:
    //essa funcao converte um valor float em uma string
    template <typename T> string tostr(const T& t) {
        ostringstream os;
        os<<t;
        return os.str();
    }

public:
    explicit Conta (float n){
        //pega o tamanho da string e subtrai o \n e o ponto
        int aux = static_cast<int>(tostr(n).size() - 2);

        //basicamente faz uma notação cientifica
        aux = static_cast<int>(pow(10, aux));

        //multiplica o m com o valor da notação
        int m = static_cast<int>(n * aux);

        //aqui simplifica ao maximo
        Simplificacao fun;
        fun.simplifica(&m,&aux);

        //imprime
        cout<<m<<"/"<<aux<<endl;
    }


};


#endif //CONVERSOR_DECIMAL_FRACAO_CONTA_HPP
