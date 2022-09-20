#include <iostream>
#include "Hogar.h"

Hogar::Hogar(){
  
  direccion = "";//parametros del contructor 
  bebe = false;
  camas = 0;
  descripcion = "";
}

Hogar::Hogar(string direccion) : direccion(direccion){
}

Hogar::Hogar(string direccion, bool bebe) : direccion(direccion), bebe(bebe){
}

Hogar::Hogar(string direccion, bool bebe, int camas) : direccion(direccion), bebe(bebe), camas(camas){
}

Hogar::Hogar(string direccion, bool bebe, int camas, string descripcion) : direccion(direccion), bebe(bebe), camas(camas), descripcion(descripcion){
}

void Hogar::mostrarDatos() { 
    cout << "La direccion es: " << direccion << "\n";
    cout << "Hay bebes: " << bebes << "\n";
    cout << "El numero de camas es: " << camas << "\n";
    cout << "Descripcion:  " << descripcion << "\n";
    cout << "\n";
}

string Hogar::getDireccion() const {
    return direccion;
}

void Hogar::setDireccion(string direccion) {
    Hogar::direccion = direccion;
}

bool Hogar::getBebe() const{
  return bebe;
}

void Hogar::setBebe(bool bebe) {
    Hogar::bebe = bebe;
}

int Hogar::getCamas() const{
  return camas;
}

void Hogar::setCamas(int camas) {
    Hogar::camas = camas;
}

string Hogar::getDescripcion() const{
  return descripcion;
}

void Hogar::setDescripcion(int descripcion) {
    Hogar::descripcion = descripcion;
}
