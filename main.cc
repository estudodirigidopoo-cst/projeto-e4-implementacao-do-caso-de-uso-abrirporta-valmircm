#include <iostream>
#include <vector>
#include <cstring>
#include "interfacePorta.h"
#include "controladorAcesso.h"

using namespace std;

int main(void) {

    InterfacePorta *interface1 = new InterfacePorta("Porta1-Redes1", "Redes1");
    ControladorAcesso controlador;

    if (interface1->abrirPorta(606060)) {
        cout << ">>>>>>>>>.................................................<<<< ACESSO LIBERADO >>>>." << "\n";
    } else {
        cout << ">>>>>>>>>.................................................<<<< ACESSO NEGADO >>>>." << "\n";
    }

    controlador.addUsuario("Bruno", 505050);
}