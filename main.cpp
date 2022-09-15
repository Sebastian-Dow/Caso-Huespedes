#include <iostream>
#include "Sistema.h"

using std::in;
using std::out;
using std::string;

void printMenuGeneral(){
   cout << "\n" << "********Bienvenido al Sistema de Huéspedes de la Red de Apoyo de Manizales********\n";
   cout << "   1. Opciones de administrador\n";
   cout << "   2. Incio de sesión de usuarios\n";
   cout << "   3. Crear usuario\n";
   cout << "   0. Salir\n";
   cout << "Opción: ";
}

void printMenuAdministrador(){
   cout << "\n" << "********Opciones de administrador********\n";
   cout << "   1. Agregar persona\n";
   cout << "   2. Eliminar persona\n;
   cout << "   3. Editar persona\n";
   cout << "   4. Buscar persona\n";
   cout << "   5. Ver personas\n";
   cout << "   6. Crear reserva\n";
   cout << "   6. Eliminar reserva\n";
   cout << "   7. Editar reserva\n";
   cout << "   8. Buscar reserva\n";
   cout << "   9. Ver reservas";
   cout << "   9. Ver reservas";
   cout << "   10. Ver personas\n";
   cout << "   0. Regresar\n";
   cout << "Opción: ";
}

void printMenuUsuario(){
   cout << "\n" << "********Bienvenido al Sistema de Huéspedes de la Red de Apoyo de Manizales********\n";
   cout << "   1. Iniciar como propietario\n";
   cout << "   2. Iniciar como huesped\n";
   cout << "   0. Regresar\n";
   cout << "Opción: ";
   
}

void menu( Sistema * sistema ){
   int opt1, opt2;
   do{
      printMenu();
      do
      cin >> opt1;
      switch( opt1 ){
         case 0:
            cout << "Gracias por utilizar nuestro aplicativo, vuelva pronto\n";
            break;
         case 1:
            sistema.agregarPersona();
            break;
         case 2:
            sistema.eliminarPersona();
            break;
         case 3:
            sistema.editarPersona();
            break;
         case 4:
            sistema.buscarPersona(); 
            break;
         case 5:
            sistema.verPersonas();
            break;
         default:
            cout << "Por favor, seleccione una opción válida\n";
            break;
      }
   }
}

int main(){

   return 0;
}
