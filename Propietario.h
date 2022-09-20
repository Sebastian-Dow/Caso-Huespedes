#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <vector>

#include "propietario.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Propietario{
private:
    bool huespedes;
    Hogar *hogar;
public:
    Propietario();//constructor

    ~Propietario();//destructor

    bool &getHuespedes() const;
    Hogar *getHogar() const;

    void setHuespedes(bool huespedes);
    void setHogar(Hogar *hogar1);
    void mostrarDatos();
};

#endif