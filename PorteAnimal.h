#ifndef PORTEANIMAL_H
#define PORTEANIMAL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PorteAnimal {
private:
    int IdPorte;
    string Tipo;

    static vector<PorteAnimal*> todosPortes;

public:
    PorteAnimal(int id = 0, const string& tipo = "")
        : IdPorte(id), Tipo(tipo) {
        todosPortes.push_back(this);
    }
    ~PorteAnimal() {}

    // Getters
    int getId() const {
        return IdPorte;
    }

    void setId(int id) {
        IdPorte = id;
    }

    string getTipo() const {
        return Tipo;
    }

    void setTipo(const string& tipo) {
        Tipo = tipo;
    }

    static void listarTodos() {
        cout << "\n=== PORTES ===" << endl;
        for (const auto& porte : todosPortes) {
            cout << "ID: " << porte->getId() << endl;
            cout << "Tipo: " << porte->getTipo() << endl;
            cout << "-----------------------------" << endl;
        }
    }
};

vector<PorteAnimal*> PorteAnimal::todosPortes;

#endif
