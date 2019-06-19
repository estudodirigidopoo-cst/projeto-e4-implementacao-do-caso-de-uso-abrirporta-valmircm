#include <iostream>
#include <cstring>
#include "porta.h"


Porta::Porta(string id, string estado){idPorta = id; estadoPorta = estado;}
        
string Porta::getIdPorta() {
    return idPorta;
}
string Porta::getEstadoPorta(){
    return estadoPorta;
}