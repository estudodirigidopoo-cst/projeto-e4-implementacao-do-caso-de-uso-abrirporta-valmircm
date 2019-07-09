#include <iostream>
#include <cstring>
#include "interfacePorta.h"
#include "controladorAcesso.h"

ControladorAcesso controlador;

InterfacePorta::InterfacePorta(string idPorta, string idSala) {
    this->idPorta = idPorta; 
    this->idSala = idSala;
}

bool InterfacePorta::abrirPorta(int senhaUsuario) {

    controlador.abrirPorta(this->idSala, this->idPorta, this->senhaUsuario);
}

