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
      unordered_map<int, Persona*> usuarios;
      unordered_map<int, Reserva*> reservas;
      unordered_map<int, Evaluacion*> evaluaciones;
      void inicializarDatos();

   public:
      Sistema();
      ~Sistema(); //destructor

      void agregarPersona();
      void eliminarPersona();
      void editarPersona();
      void verpersonas();
      void crearReserva();
      void editarReserva();
      void buscarReserva();
      void eiminarReservas();
      void agregarEvaluaciones();
      void buscarEvaluaciones();
      void verEvaluaciones();
      void login();
};

#endif
