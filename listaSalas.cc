#include <iostream>
#include <cstring>
#include "listaSalas.h"

void ListaSalas::addSala(Sala *sala){
    
    listaSalas.push_back(sala);
    cout << ">>>>>>>>> SALA: " << sala->getIdSala() << ".........ADICIONADA À LISTA." << "\n";
}

bool ListaSalas::delSala(string id){

}
void ListaSalas::getDadosSala(string id){

}
void ListaSalas::getListaIdSala(){
    
}

bool ListaSalas::getSalaPorta(string idPorta, string idSala){

    for (int i=0;i<listaSalas.size();i++){
        if (idSala == listaSalas[i]->getIdSala()) {
            return true;
            break;
        }
    }
    return false;
}