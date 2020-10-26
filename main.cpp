#include <iostream>
#include <algorithm>
#include "arregloDinamico.h"

int main(){
    ArregloDinamico arregloD;

    cout << "Insertando 8 elementos al final:  ";
    arregloD.insertar_final("Hola");
    arregloD.insertar_final("Mundo");
    arregloD.insertar_final("C++");
    arregloD.insertar_final("Miguel");
    arregloD.insertar_final("Madrigal");
    arregloD.insertar_final("Arreglo");
    arregloD.insertar_final("Dinamico");
    arregloD.insertar_final("Codigo");

    for (size_t i(0); i < arregloD.size(); i++){
        cout << arregloD[i] << " ";
    }

    cout << endl << endl;

    cout << "Insertando 2 elementos al inicio:  ";
    arregloD.insertar_inicio("VS");
    arregloD.insertar_inicio("Code");

    for (size_t i(0); i < arregloD.size(); i++){
        cout << arregloD[i] << " ";
    }
       
    return 0;
}