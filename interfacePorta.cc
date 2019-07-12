#include <iostream>
#include <cstring>
#include "interfacePorta.h"
#include "controladorAcesso.h"

ControladorAcesso *controlador1 = new ControladorAcesso();

InterfacePorta::InterfacePorta(string idPorta, string idSala) {
    this->idPorta = idPorta;
    this->idSala = idSala;
}

bool InterfacePorta::abrirPorta(int senhaUsuario) {

    controlador1->abrirPorta(this->idSala, this->idPorta, senhaUsuario);

    return  true;
}

