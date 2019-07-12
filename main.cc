#include <iostream>
#include <vector>
#include <cstring>
#include "interfacePorta.h"
#include "listaSalas.h"
#include "listaUsuarios.h"
#include "controladorAcesso.h"
#include "sala.h"

using namespace std;

int main(void) {

    InterfacePorta *interface1 = new InterfacePorta("Porta1-Redes1", "Redes1");

    if (interface1->abrirPorta(606060)) {
        cout << ">>>>>>>>>.................................................<<<< ACESSO LIBERADO >>>>." << "\n";
    } else {
        cout << ">>>>>>>>>.................................................<<<< ACESSO NEGADO >>>>." << "\n";
    }
}

