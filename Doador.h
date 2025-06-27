#ifndef DOADOR_H
#define DOADOR_H

#include <iostream>
#include <string>

using namespace std;

class Doador {
private:
    string nome;
    string email;

public:
    void setNome(const string& nome) {
        this->nome = nome;
    }

    void setEmail(const string& email) {
        this->email = email;
    }


    string getNome() const {
        return nome;
    }

    string getEmail() const {
        return email;
    }

};

#endif
