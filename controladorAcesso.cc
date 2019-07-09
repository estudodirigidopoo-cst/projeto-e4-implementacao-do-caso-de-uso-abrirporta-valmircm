#include <iostream>
#include <cstring>
#include "controladorAcesso.h"

bool ControladorAcesso::abrirPorta(string idSala, string idPorta, int senhaUsuario){
    lista1->getSalaPorta(idSala, idPorta);
}

bool ControladorAcesso::fecharPorta(string id){
    
}