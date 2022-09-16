#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>

#include "propietario.h"
#include "huesped.h"
#include "reserva.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Sistema{
   private:
      vector<Persona *> personas;
      void inicializarDatos();
   public:
      Sistema();
      ~Sistema();
};

#endif
