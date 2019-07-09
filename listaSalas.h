#ifndef LISTADESALAS_H
#define LISTADESALAS_H

#include <iostream>
#include <vector>
#include <cstring>
#include <map> 
#include <iterator>
#include "sala.h"

using namespace std;

class ListaSalas {

    private:
        multimap <string, string> listaSalasUsuarios;
        vector <Sala *> listaSalas;
    public:
        bool addSala(string id);
        bool delSala(string id);
        void getDadosSala(string id);
        void getListaIdSala();
        bool getSalaPorta(string idPorta, string idSala);
};

#endif