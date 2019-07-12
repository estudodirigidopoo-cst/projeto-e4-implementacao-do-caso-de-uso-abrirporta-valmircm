#include <iostream>
#include <cstring>
#include "usuario.h"

Usuario::Usuario(string id, int senha){
    this->idUsuario = id;
    this->senhaUsuario = senha;
    cout << ">>>>>>>>> USUÁRIO: " << this->idUsuario << ".........SENHA: " << this->senhaUsuario << ".\n";
}

string Usuario::getIdUsuatrio() {
    return this->idUsuario;
}

int Usuario::getSenhaUsuario() {
    return senhaUsuario;
}

int Usuario::trocaSenha(int senha) {
    return senhaUsuario;
}