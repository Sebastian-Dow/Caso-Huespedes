#include "Persona.h"

Persona::Persona(){
   this->idPersona = 0;
   this->nombre = "";
   this->sexo = "";
   this->puntaje = 0;
}

Persona::Persona(int long IdPersona) : idPersona(idPersona){
}

Persona::Persona(int long IdPersona, string nombre) : idPersona(idPersona), nombre(nombre){
}

Persona::Persona(int long IdPersona, string nombre, string sexo) : idPersona(idPersona), nombre(nombre), sexo(sexo){
}

Persona::Persona(int long IdPersona, string nombre, string sexo, int long puntaje) : idPersona(idPersona), nombre(nombre), sexo(sexo), puntaje(puntaje){
}

void Persona::mostrarDatos() {
    cout << "el id de la persona es: " << idPersona << "\n";
    cout << "El nombre es: " << nombre << "\n";
    cout << "El sexo es: " << sexo << "\n";
    cout << "El puntaje es: " << puntaje << "\n";
    cout << "\n";
}

int Persona::getIdPersona() const{
    return idPersona;
}

void Persona::setIdPersona(int idPersona) {
    Persona::idPersona = idPersona;
}

string Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(string nombre) {
    Persona::nombre = nombre;
}

string Persona::getSexo() const {
    return sexo;
}

void Persona::setSexo(string sexo) {
    Persona::sexo = sexo;
}

int Persona::getPuntaje() const{
    return puntaje;
}

void Persona::setPuntaje(int puntaje) {
    Persona::puntaje = puntaje;
}


