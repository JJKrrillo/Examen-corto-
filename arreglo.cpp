#include <iostream> 
using namespace std;
int main ()  { 

    int x ; 

    // le preguntamos al usuario que cuantos arreglos necesitaba 
    cout << "Ingrese la cantidad de arreglos que necesite: " ;
    cin >> x ;

    // le preguntamos al usuario los numeros 
    cout << "Ingrese los numeros si es par dividira /2 y si impar se multiplicara X10: " << endl  ;
    int numeros[x] ;

    for (int i = 0; i < x; i++)
    {
        cin >> numeros [i] ;
    }
    for (int i = 0; i < x; i++)
    // si es par se dividira y si es impar se multiplicara por 10 
    {
        if (numeros [i] % 2 == 0 )
        {
            numeros[i] = numeros[i] / 2 ;
        }
        else {
            numeros[i] = numeros[i] * 10 ;
        }
    }
    // otro for para que trasnforme e imprima los numeros 
        cout << "Los numeros trasnformados son : " << endl; 
        for (int i = 0; i < x; i++)
        {
            cout << numeros[i] << endl ; 
        }
        




    return 0 ;
}