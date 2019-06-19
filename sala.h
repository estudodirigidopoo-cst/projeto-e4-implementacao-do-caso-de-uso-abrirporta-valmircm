#ifndef SALA_H
#define SALA_H

#include <iostream>
#include <vector>
#include <cstring>
#include "usuario.h"
#include "porta.h"
 
using namespace std;

class Sala {

    private:
        string idSala;
        vector <Porta *> listaIdPortas;
    public:
        Sala(string id);
        string getIdSala();
        void getListaDePortas();
};

#endif