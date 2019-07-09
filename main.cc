#include <iostream>
#include <vector>
#include <cstring>
#include "interfacePorta.h"
#include "listaSalas.h"

using namespace std;

InterfacePorta *porta1 = new InterfacePorta("Porta1-Redes1", "Redes1");
ListaSalas *lista1 = new ListaSalas();

int main(void) {

    bool flag;
    flag = porta1->abrirPorta(123456);
    
}

