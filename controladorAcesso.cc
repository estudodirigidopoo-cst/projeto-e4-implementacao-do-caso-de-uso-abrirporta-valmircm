#include <iostream>
#include <cstring>
#include "controladorAcesso.h"

 ControladorAcesso::ControladorAcesso() {
    
    listaSalas1->addSala(new Sala("Redes1"));
    listaSalas1->addSala(new Sala("Redes2"));

    listaUsuarios1->addUsuario(new Usuario("Marcio", 909090));
    listaUsuarios1->addUsuario(new Usuario("João", 101010));

    Porta *porta1 = new Porta("Porta1-Redes1", "Fechada");
    Porta *porta2 = new Porta("Porta1-Redes2", "Fechada");
 }

bool ControladorAcesso::abrirPorta(string idSala, string idPorta, int senhaUsuario){
    bool flag = listaSalas1->getSalaPorta(idPorta, idSala);

    if (flag) {
        cout << ">>>>>>>>> SALA: " << idSala << ".........ENCONTRADA NA LISTA." << "\n";
        return true;
    } else {
        cout << ">>>>>>>>> SALA: " << idSala << ".........NÂO ENCONTRADA NA LISTA." << "\n";
        return false;
    }
    
}

bool ControladorAcesso::fecharPorta(string id){
    
}

