#include <iostream>
#include "Reserva.h"

Reserva::Reserva(){

    fechaInicial = "";
    fechaFinal = "";
    propietario = nullptr;
    huesped = nullptr;
}

Reserva::Reserva(string fechaInicial) : fechaInicial(fechaInicial){
}

Reserva::Reserva(string fechaInicial, string fechaFinal) : fechaInicial(fechaInicial), fechaFinal(fechaFinal){
}

void Reserva::mostrarDatos() {
    cout << "La fecha inicial es: " << fechaInicial << "\n";
    cout << "La fecha final es: " << fechaFinal<< "\n";
    propietario->mostrarDatos();
    huesped->mostrarDatos();
    cout << "\n";
}

string Reserva::getFechaInicial() const {
    return fechaInicial;
}

void Reserva::setFechaInicial(string fechaInicial) {
    Reserva::fechaInicial = fechaInicial;
}

string Reserva::getFechaFinal() const {
    return fechaFinal;
}

void Reserva::setFechaFinal(string fechaFinal) {
    Reserva::fechaFinal = fechaFinal;
}

Huesped* Reserva::getHuesped() const {
    return huesped;
}

void Reserva::setHuesped(Huesped *huesped1) {
    huesped = huesped1;
}

Propietario* Reserva::getPropietario() const {
    return propietario;
}

void Reserva::setPropietario(Propietario* propietario1) {
    propietario = propietario1;
}
