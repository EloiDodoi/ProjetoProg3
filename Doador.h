#ifndef DOADOR_H
#define DOADOR_H

#include <iostream>
#include <string>

using namespace std;

class Doador {
private:
    string nome;
    string email;
    string dataNascimento;

public:
    void setNome(const string& nome) {
        this->nome = nome;
    }

    void setEmail(const string& email) {
        this->email = email;
    }

    void setDataNascimento(const string& dataNascimento) {
        this->dataNascimento = dataNascimento;
    }

    string getNome() const {
        return nome;
    }

    string getEmail() const {
        return email;
    }

    string getDataNascimento() const {
        return dataNascimento;
    }
}

#endif
