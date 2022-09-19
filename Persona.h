#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <vector>

#include "propietario.h"
#include "huesped.h"
#include "reserva.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Persona{
    private:
      long idPersona;
      string nombre;
      string sexo;
      int puntaje;
    public:
      Persona();
      virtual ~Persona();

      long &getIdPersona() const;
      const string &getNombre() const;
      const string &getSexo() const;
      int &getPuntaje() const;

      void setIdPersona(long idPersona);
      void setNombre(const string nombre);
      void setSexo(const string sexo);
      void setPuntaje(int puntaje);
};

#endif
