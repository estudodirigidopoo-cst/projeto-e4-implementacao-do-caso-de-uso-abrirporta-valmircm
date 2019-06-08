#include <iostream>
#include <cstring>
#include "usuario.h"

Usuario::Usuario(string id, int senha){idUsuario = id; senhaUsuario = senha;}

string Usuario::getIdUsuatrio() {
    return idUsuario;
}

int Usuario::getSenhaUsuario() {
    return senhaUsuario;
}

int Usuario::trocaSenha(int senha) {
    return senhaUsuario;
}