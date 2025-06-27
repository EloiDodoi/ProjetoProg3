#ifndef DOACAO_H

#include "Racao.h"
#include "Doador.h"
#include <iostream>
#include <string>

using namespace std;

class Doacao
{
private:
    Racao RacaoDoada;
    double QuantiadeKg;
    String DataDoacao;
    Doador QuemDoou;
public:
    Doacao();
    ~Doacao();

    Racao getRacaoDoada(){
        return RacaoDoada;
    }

    void setRacaoDoada(Racao racao){
        RacaoDoada = racao;
    }

    double getQuantidadeKg(){
        return QuantidadeKg;
    }

    void setQuantidadeKg(){
        QuantidadeKg = quantidade;
    }

    string getDataDoacao(){
        return DataDoacao;
    }

    void setDataDoacao(){
        DataDoacao = data;
    }

    Doador getQuemDoou(){
        return QuemDoou;
    }

   Void setQuemDoou(){
    QuemDoou = Doador;
   }
};


#endif 