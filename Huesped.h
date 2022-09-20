#ifndef HUESPED_H
#define HUESPED_H

#include <iostream>
#include <vector>

#include "propietario.h"
#include "huesped.h"
#include "reserva.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Huesped{
private:
    string infoHospital;
    string ciudad;

public:
    Huesped();

    ~Hogar();

    const string &getInfoHospital() const;
    const string &getCiudad() const;

    void setInfoHospital(const string infoHospital);
    void setCiudad(const string ciudad);

    void mostrarDatos();
};
#endif