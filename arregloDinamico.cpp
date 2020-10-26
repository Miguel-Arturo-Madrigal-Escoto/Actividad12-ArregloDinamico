#include "arregloDinamico.h"

using namespace std;

ArregloDinamico::ArregloDinamico(){
    arreglo = new string[MAX];
    this->cont = 0;
    this->tam = MAX;
}

ArregloDinamico::~ArregloDinamico(){
    delete[] arreglo;
}

void ArregloDinamico::insertar_inicio(const string& s){
    if(cont == tam) expandir();

    for(size_t i(cont); i > 0; i--){
        arreglo[i] = arreglo[i - 1];
    }

    arreglo[0] = s;
    cont++;
}

void ArregloDinamico::insertar_final(const string& s){
    if(cont == tam) expandir();
    arreglo[cont++] = s;
}

size_t ArregloDinamico::size(){
    return this->cont;
}
void ArregloDinamico::expandir(){
    string *nuevo = new string[tam + MAX];

    for(size_t i(0); i < cont; i++){
        nuevo[i] = arreglo[i];
    }

    /// liberar memoria arreglo pequeño
    delete[] arreglo;

    //copiar direccion de memoria
    arreglo = nuevo;

    this->tam += MAX;
}