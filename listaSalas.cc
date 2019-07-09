#include <iostream>
#include <cstring>
#include "listaSalas.h"

bool ListaSalas::addSala(string id){
    
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
            cout << "ID da sala não encontrado......ID: " << idSala << "\n";
            bool flag = true;
            return flag;
            break;
        }
    } 
    cout << "ID da sala não encontrado";
    return false;
}