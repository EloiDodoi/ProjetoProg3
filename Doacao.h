#ifndef DOACAO_H
#define DOACAO_H

#include "Racao.h"
#include "Doador.h"
#include <iostream>
#include <string>
#include <sstream> //para validar a data 

using namespace std;

class Doacao
{
private:
    Racao racaoDoada;
    double quantidadeKg;
    string dataDoacao;
    Doador doador;

    //função para validar a data
    bool validarData(const string& data) {
        if (data.length() != 10 || data[2] != '/' || data[5] != '/') {
            return false;
        }

        int dia, mes, ano;
        char sep1, sep2;
        istringstream iss(data);
        
        if (!(iss >> dia >> sep1 >> mes >> sep2 >> ano) || sep1 != '/' || sep2 != '/') {
            return false;
        }

        if (dia < 1 || dia > 31) return false;
        if (mes < 1 || mes > 12) return false;
        if (ano < 1900 || ano > 2100) return false;

        if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
            return false;
        }

        if (mes == 2) { //a conta de ano bissexto está certa?
            bool bissexto = (ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0);
            if (dia > (bissexto ? 29 : 28)) {
                return false;
            }
        }

        return true;
    }

public:
    Doacao() : quantidadeKg(0) {}
    ~Doacao() {}

    Racao getRacaoDoada() const {
        return racaoDoada;
    }

    void setRacaoDoada(const Racao& racao) {
        racaoDoada = racao;
    }

    double getQuantidadeKg() const {
        return quantidadeKg;
    }

    void setQuantidadeKg(double quantidade) {
        if (quantidade >= 0) {
            quantidadeKg = quantidade;
        } else {
            cout << "Erro: quer enganar o cliente?!" << endl;
        }
    }

    string getDataDoacao() const {
        return dataDoacao;
    }

    void setDataDoacao(const string& data) {
        if (validarData(data)) {
            dataDoacao = data;
        } else {
            cout << "Formato inválido. Use dia/mês/ano (ex: 01/07/2025)" << endl;
        }
    }

    Doador getQuemDoou() const {
        return doador;
    }

    void setQuemDoou(const Doador& novoDoador) {
        doador = novoDoador;
    }

};

#endif