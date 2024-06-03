#include <iostream>
using namespace std ;
int main () {

    double escala;
    string name ; 

// Le pediremos al usuario que ingrese los valores de su temperatura 
    cout <<  "BIENVENIDO AL PROGRAMA PARA MEDIR SU ESCALA TERMICA: " << endl ;
    cout << "Ingrese su nombre: " ;
    cin >> name ; 
    cout << "Ingrese los valores de su temperatura:  " ;
    cin >> escala ;

// Agregar los valores de escala termica 
    if (escala >= 37.4  && escala <= 37.9)
    {
       cout << "Su escala termica es: Febricula " << endl ;
    }
    else if (escala >= 38 && escala <= 38.9 )
    {
        cout << "Su escala termica es: Fiebre moderada " << endl ;
    }
    else if (escala >= 39 && escala <= 39.9 )
    {
        cout << "Su escala termica es: Fiebre alta " << endl ;
    }
    else if (escala >= 40 && escala <= 41.5 )
    {
        cout << "Su escala termica es: Fiebre muy alta " << endl ;
    }
    else if (escala > 41.5  )
    {
        cout << "Su escala termica es: Fiebre hiperpirexia " << endl ;
    }
    // colocamos este else if por si el paciente coloca una temperatura menor al de la escala termica 
    else if (escala >= 0 && escala < 37.4 )
    {
        cout << "Su escala termica es: Fiebre normal " << endl ;
    }
    else {
        cout << "Los datos ingresados no son validos " << endl ;
    }
    // al final aparera su rango de temperatura junto al nombre del paciente al final . 
    cout << "Muchas gracias por usar el programa " << name ; 

    return 0 ;
}