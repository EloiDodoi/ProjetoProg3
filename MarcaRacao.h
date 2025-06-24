#ifndef MARCARACAO_H
#define MARCARACAOL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MarcaRacao
{
    private:
        int IdMarcaRacao;
        string Nome;
    public:
        MarcaRacao();
        ~MarcaRacao();

        // gettters e setters
        int getId(){
            return IdMarcaRacao;
        }
        void setId(int id){
            IdMarcaRacao = id;
        }

        string getNome(){
            return Nome;
        }
        void setNome(string nome){
            Nome = nome;
        }
        //--------------------------


};

#endif