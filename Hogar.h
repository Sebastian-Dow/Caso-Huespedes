#ifndef HOGAR_H
#define HOGAR_H

#include <iostream>
#include <vector>

#include "propietario.h"
#include "huesped.h"
#include "reserva.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Hogar{
private:
    string direccion;
    int camas;
    bool bebes;
    string descripcion;

public:
    Hogar();
    ~Hogar();

    const string &getDireccion() const;
    bool &getBebes() const;
    int &getCamas() const;
    const string &getdescripcion() const;

    void setDireccion(const string direccion);
    void setBebes(bool bebe);
    void setCamas(int camas);
    void setDescripcion(const string descripcion);

};

#endif