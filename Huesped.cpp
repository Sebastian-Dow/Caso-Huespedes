#include <iostream>
#include "Huesped.h"

Huesped::Huesped(){

    infoHospital = "";
    ciudad = "";
}

Huesped::Huesped(string infoHospital) : infoHospital(infoHospital){
}

Huesped::Huesped(string infoHospital, string ciudad) : infoHospital(infoHospital), ciudad(ciudad){
}

virtual void Huesped::mostrarDatos() {
    cout << "Informacion hospital: " << infoHospital << "\n";
    cout << "La ciudad es: " << ciudad << "\n";
    cout << "\n";
}

string Huesped::getInfoHospital() const {
    return infoHospital;
}

void Huesped::setInfoHospital(string infoHospital) {
    Huesped::infoHospital = infoHospital;
}

string Huesped::getCiudad() const {
    return ciudad;
}

void Huesped::setCiudad(string ciudad) {
    Huesped::ciudad = ciudad;
}
