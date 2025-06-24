#ifndef ANIMAL_H
#define ANIMAL_H

#include "PorteAnimal.h"
#include <iostream>
#include <string>

using namespace std;

class Animal
{
    private:
    int IdAnimal;
    string Raca;
    string Especie;
    PorteAnimal Porte;
    public:
        Animal();
        ~Animal();

        int getId(){
            return IdAnimal;
        }
        void setId(int id){
            IdAnimal = id;
        }

        string getRaca(){
            return Raca;
        }
        void setRaca(string raca){
            Raca = raca;
        }

        string getEspecie(){
            return Especie;
        }
        void setEspecie(int){
        }

        PorteAnimal getPorte(){
            return Porte;
        }
        void setPorteAnimal(PorteAnimal pa){
            Porte = pa;
        }

};

#endif