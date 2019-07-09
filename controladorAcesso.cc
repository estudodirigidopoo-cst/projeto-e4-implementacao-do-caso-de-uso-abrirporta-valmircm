#include <iostream>
#include <cstring>
#include "controladorAcesso.h"

bool ControladorAcesso::abrirPorta(string idSala, string idPorta, int senhaUsuario){
    
    if (lista1->getSalaPorta(idSala, idPorta)) {
        return true;
    } else {
        return false;
    }
}

bool ControladorAcesso::fecharPorta(string id){
    
}