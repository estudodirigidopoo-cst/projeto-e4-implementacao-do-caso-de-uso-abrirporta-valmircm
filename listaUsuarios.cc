#include <iostream>
#include <cstring>
#include "listaUsuarios.h"

void ListaUsuarios::addUsuario(Usuario *usuario) {

    listaIdUsuarios.push_back(usuario);
    cout << ">>>>>>>>> USUÀRIO: " << usuario->getIdUsuatrio() << ".........ADICIONADO À LISTA." << "\n";
}

bool ListaUsuarios::delusuario(string id) {

    return true;
}

void ListaUsuarios::getDadosUsuario(string id){

}

void ListaUsuarios::getListaIdUsuarios() {

}