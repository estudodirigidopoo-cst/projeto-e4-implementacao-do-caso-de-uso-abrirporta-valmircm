#ifndef CONTROLADORACESSO_H
#define CONTROLADORACESSO_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class ControladorAcesso {

    private:

    public:
        bool abrirPorta(string id, int senha);
        bool fecharPorta(string id);

};

#endif