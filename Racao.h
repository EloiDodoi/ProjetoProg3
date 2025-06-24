#ifndef RACAOL_H
#define RACAO_H

#include "PorteAnimal.h"
#include "MarcaRacao.h"
#include <iostream>
#include <string>

using namespace std;

class Racao
{
private:
    int IdRacao;
    string Nome;
    MarcaRacao Marca;
    PorteAnimal PorteRacao;
    double PesoEmbalagem;
public:
    Racao();
    ~Racao();

    int getIdRacao() {
        return IdRacao;
    }
    void setIdRacao(int id) {
        IdRacao = id;
    }

    string getNome() {
        return Nome;
    }
    void setNome(string nome) {
        Nome = nome;
    }

    MarcaRacao getMarca() {
        return Marca;
    }
    void setMarca(MarcaRacao marca) {
        Marca = marca;
    }

    PorteAnimal getPorteRacao() {
        return PorteRacao;
    }
    void setPorteRacao(PorteAnimal porte) {
        PorteRacao = porte;
    }

    double getPesoEmbalagem() {
        return PesoEmbalagem;
    }
    void setPesoEmbalagem(double peso) {
        PesoEmbalagem = peso;
    }
};

#endif