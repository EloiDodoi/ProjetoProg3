#include "Relatorio.h"

int main() {
    // Criar objetos necessários
    MarcaRacao marca;
    marca.setId(1);
    marca.setNome("Golden");
    
    PorteAnimal porte(1, "Cães Médios");
    
    Doador doador;
    doador.setNome("João Silva");
    doador.setEmail("joao@email.com");
    
    Racao racao;
    racao.setIdRacao(1);
    racao.setNome("Ração Premium");
    racao.setMarca(marca);
    racao.setPorteRacao(porte);
    racao.setPesoEmbalagem(15.0);
    
    // Criar doações
    Doacao doacao1;
    doacao1.setRacaoDoada(racao);
    doacao1.setQuantidadeKg(5.0);
    doacao1.setDataDoacao("01/07/2025");
    doacao1.setQuemDoou(doador);
    
    // Gerar relatórios
    Relatorio relatorio;
    relatorio.adicionarDoacao(doacao1);
    
    relatorio.gerarRelatorioDoacoes();
    relatorio.gerarRelatorioDoadores();
    relatorio.gerarRelatorioRacoes();
    relatorio.gerarRelatorioPorAnimalPorte();
    
    return 0;
}