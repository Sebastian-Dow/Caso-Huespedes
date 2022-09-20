#include <iostream>
#include "Propietario.h"

Propietario::Propietario(){
    huespedes = false;
    hogar = nullptr;
}

void Propietario::mostrarDatos() {
    cout << "huespedes: " << huespedes << "\n";
    hogar->mostrarDatos();
    cout << "\n";
}

bool Propietario::getHuespedes() const{
    return huespedes;
}

void Propietario::setHuespedes(bool huespedes) {
    Propietario::huespedes= huespedes;
}

Hogar* Propietario::getHogar() const {
    return hogar;
}

void Propietario::setHogar(Hogar *hogar1) {
    hogar = hogar1;
}