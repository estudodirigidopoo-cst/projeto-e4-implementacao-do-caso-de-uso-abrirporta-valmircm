#ifndef LISTADEUSUARIOS_H
#define LISTADEUSUARIOS_H

#include <iostream>
#include <vector>
#include <cstring>
#include "usuario.h"

using namespace std;

class ListaUsuarios {

    private:
        vector <Usuario *> listaIdUsuarios;
    public:
        bool addUsuario(string id);
        bool delusuario(string id);
        
        
};

#endif