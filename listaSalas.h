#ifndef LISTADESALAS_H
#define LISTADESALAS_H

#include <iostream>
#include <vector>
#include <cstring>
#include "sala.h"

using namespace std;

class ListaUsuarios {

    private:
        vector <Sala *> listaIdSalas;
    public:
        bool addSala(string id);
        bool delSala(string id);
        void getDadosSala(string id);
        void getListaIdSala();
};

#endif