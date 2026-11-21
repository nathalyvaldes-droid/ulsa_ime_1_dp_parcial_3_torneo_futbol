#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <random>
#include <stdexcept>

#include "utilerias.h"
#include "torneo.h"

inline std::string aMinusculas(std::string texto) {
    for (int i = 0; i < (int) texto.length(); i++) {
        if (texto [i] >= 'A' && texto [i] < 'Z') {
            texto [i] = texto [i] + 32;
        } 
    }
    return texto;
}

const Equipo* buscarEquipo(
    const Equipo* equipos,
    int totalEquipos,
    const std::string& buscando);
void imprimirConsulta() {
    std::string nombre = leerCadena("Nombre del equipo: ");

}
