#ifndef PORTA_H
#define PORTA_H

#include <iostream>
#include <cstring>
 
using namespace std;

class Porta {

    private:
        string idPorta;
        string estadoPorta;
    public:

        Porta(int id, int estado){}

        string getIdPorta();
        string getEstadoPorta();
};

#endif