#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
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
   cout << "   2. Eliminar persona\n";
   cout << "   3. Editar persona\n";
   cout << "   4. Buscar persona\n";
   cout << "   5. Ver personas\n";
   cout << "   6. Crear reserva\n";
   cout << "   7. Eliminar reserva\n";
   cout << "   8. Editar reserva\n";
   cout << "   9. Buscar reserva\n";
   cout << "   10. Buscar evaluaciones";
   cout << "   11. Ver evaluaciones";
   cout << "   12. Agregar evaluaciones\n";
   cout << "   0. Regresar\n";
   cout << "Opción: ";
   cout << "-1. salir\n";
}

void printMenuUsuario(){
   cout << "\n" << "********Bienvenido al Sistema de Huéspedes de la Red de Apoyo de Manizales********\n";
   cout << "   1. Iniciar como propietario\n";
   cout << "   2. Iniciar como huesped\n";
   cout << "   0. Regresar\n";
   cout << "Opción: ";
    cout << "-1. salir\n";
}

void rmenuAdministrado(Sistema & sistema){
   int opt;
   do{
      printMenuAdministrador();
      cin >> opt;
      switch(opt)
      {
          case 0:
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
              sistema.buscarReserva();
              break;
          case 5:
              sistema.verpersonas();
              break;
          case 6:
              sistema.crearReserva();
              break;
          case 7:
              sistema.eiminarReservas();
              break;
          case 8:
              sistema.editarReserva();
              break;
          case 9:
              sistema.buscarReserva();
              break;
          case 10:
              sistema.buscarEvaluaciones();
              break;
          case 11:
              sistema.verEvaluaciones();
              break;
          case 12:
              sistema.agregarEvaluaciones();
              break;
          default:
              cout << "Por favor, seleccione una opción válida\n";
      }
   } while( opt != -1);
}

void menuUsuario(Sistema & sistema){
   int opt;
   do{
      printMenuUsuario();
      cin >> opt;
      switch( opt )
      {
          case 0:
              break;
          case 1:
              sistema.login();
              break;
          default:
              cout << "Por favor, seleccione una opción válida\n";
      }
   } while( opt != -1 );
}

void menu( Sistema & sistema ){
   int opt1;
   do{
      printMenuGeneral();
      cin >> opt1;
      switch( opt1 ){
         case 0:
            cout << "Gracias por utilizar nuestro aplicativo, vuelva pronto\n";
            break;
         case 1:
            printMenuAdministrador();
            system( "pause\ncls" );
            break;
         case 2:
            printMenuUsuario();
            system( "pause\ncls" );
            break;
         default:
            cout << "Por favor, seleccione una opción válida\n";
      }
   } while( opt1 != 0 );
}

int main(){
    Sistema sistema;
   menu( sistema );
   return 0;
}
