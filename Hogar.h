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
    Hogar(string direccion);
    Hogar(string direccion, int camas);
    Hogar(string direccion, int camas, bool bebes);
    Hogar(string direccion, int camas, bool bebes, string descripcion);
    ~Hogar();

    const string &getDireccion() const;
    int &getCamas() const;
    bool &getBebes() const;
    const string &getDescripcion() const;

    void setDireccion(const string direccion);
    void setCamas(int camas);
    void setBebes(bool bebe);
    void setDescripcion(const string descripcion);
    
    void mostrarDatos();
    Hogar(string direccion, int camas, bool bebes, string descripcion);
};
#endif
