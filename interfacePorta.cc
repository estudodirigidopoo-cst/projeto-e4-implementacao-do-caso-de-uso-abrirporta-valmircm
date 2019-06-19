#include <iostream>
#include <cstring>
#include "interfacePorta.h"
#include "controladorAcesso.h"

ControladorAcesso cntrolador;

bool InterfacePorta::abrirPorta(int senhaUsuario) {

    cntrolador.abrirPorta(idSala, idPorta, senhaUsuario);
}