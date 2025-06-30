#ifndef RELATORIO_H 
#define RELATORIO_H
#include <vector>
#include "Doacao.h"

class Relatorio {
private:
    std::vector<Doacao> doacoes;

public:
    void adicionarDoacao(const Doacao& doacao);
    void gerarRelatorioGeral() const;
    void gerarRelatorioPorDoador(const std::string& email) const;
};

#endif