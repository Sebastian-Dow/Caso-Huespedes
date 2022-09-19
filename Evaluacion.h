#ifndef EVALUACION_H
#define EVALUACION_H

#include <iostream>
#include <vector>

#include "propietario.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Evaluacion{
private:
    string fecha;
    double calificacion;
    string comentario;
    Propietario *propietario;
public:
    Evaluacion();
    ~Evaluacion();

    const string &getFecha() const;
    const string &getComentario() const;
    double &getCalificaion() const;
    Propietario *getPropietario() const;

    void setFecha(const string fecha);
    void setComentario(const string comentario);
    void setCalificacion(double calificacion);
    void setPropietario(Propietario *propietario);
};

#endif
