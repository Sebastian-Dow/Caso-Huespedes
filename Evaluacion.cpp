#include <iostream>
#include "Evaluacion.h"

Evaluacion::Evaluacion(){

    fecha = "";
    calificacion = 0;
    comentario = "";
    propietario = nullptr;
}

Evaluacion::Evaluacion(string fecha) : fecha(fecha){
}

Evaluacion::Evaluacion(string fecha, int calificacion) : fecha(fecha), calificacion(calificacion){
}

Evaluacion::Evaluacion(string fecha, int calificacion, string comentario) : fecha(fecha), calificacion(calificacion), comentario(comentario){
}

void Evaluacion::mostrarDatos() {
    cout << "La fecha es: " << fecha << "\n";
    cout << "La calificacion es: " << calificacion << "\n";
    cout << "comentarios: " << comentario << "\n";
    propietario->mostrarDatos();
    cout << "\n";
}

string Evaluacion::getFecha() const {
    return fecha;
}

void Evaluacion::setFecha(string fecha) {
    Evaluacion::fecha = fecha;
}

int Evaluacion::getCalificacion() const{
    return calificacion;
}

void Evaluacion::setCalificacion(int calificacion) {
    Evaluacion::calificacion = calificacion;
}

string Evaluacion::getComentario() const{
    return comentario;
}

void Evaluacion::setComentario(string comentario) {
    Evaluacion::comentario = comentario;
}

Propietario* Evaluacion::getPropietario() const {
    return propietario;
}

void Evaluacion::setPropietario(Propietario* propietario1) {
    propietario = propietario1;
}