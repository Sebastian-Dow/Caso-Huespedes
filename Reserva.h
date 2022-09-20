#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <vector>

#include "propietario.h"
#include "huesped.h"
#include "reserva.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Reserva{
private:
    string fechaInicial;
    string fechaFinal;
    Propietario *propietario;
    Huesped *huesped;

public:
    Reserva();
    Reserva(string fechaInicial);
    Reserva(string fechaInicial, string fechaFinal);

    ~Reserva();

    const string &getFechaInicial() const;
    const string &getFechaFinal() const;
    Propietario *getPropietario() const;
    Huesped *getHuesped() const;

    void setFechaInicial(const string fechaInicial);
    void setFechaFinal(const string fechaFinal);
    void setPropietario(Propietario *propietario1);
    void setHuesped(Huesped *huesped1);

    void mostrarDatos();

};

#endif
