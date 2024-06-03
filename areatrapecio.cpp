#include <iostream>
using namespace std;
int main()
    {

    double alt1, alt2;
    double base;

    // le pediremos al usuario que ingrese los valores
    cout << "Calcula el area del trapecio " << endl  ;
    cout << "Ingrese el valor de la altura 1:  ";
    cin >> alt1;
    cout << "Ingrese el valor de la altura 2:  ";
    cin >> alt2; 
    // luego por ultimo que ingrese la base 
    cout << "Ingrese el valor de la base:  " ;
    cin >> base ;
    // La formula para sacar el area del trapecio 
    double area = ((alt1 + alt2) *base ) / 2 ;
    cout << "La area del trapecio es:  " << area << endl ;
    cout << "Gracias por usar nuestro programa " ;
    
    return 0;
    }