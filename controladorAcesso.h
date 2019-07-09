#ifndef CONTROLADORACESSO_H
#define CONTROLADORACESSO_H

#include <iostream>
#include <vector>
#include <cstring>
#include "listaSalas.h"

using namespace std;

class ControladorAcesso {

    private:
        ListaSalas *lista1 = new ListaSalas();
    public:
        bool abrirPorta(string id, string portId, int senha);
        bool fecharPorta(string id);

};

extern ControladorAcesso controlador;
#endif