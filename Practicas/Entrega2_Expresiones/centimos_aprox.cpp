/**
  * @file centimos_aprox.cpp
  * @brief C�lculo de diferencia en c�ntimos (Ej. 1.4)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Comente brevemente la raz�n del resultado err�neo obtenido en
  * el programa y proponga una soluci�n (modifique este programa dejando
  * la parte err�nea comentada y a�adiendo el c�digo que considere necesario)
  *
  *
  * El valor no obtiene 46 c�ntimos porque...
  *
  *
  *
  */

#include <iostream>  // cout, cin, endl
#include <iomanip>
using namespace std;

int main()
{
    double precio, entregado;

    cout <<  "Precio y entregado en euros: ";
    cin >> precio >> entregado;

    int centimos= 100 * (entregado - precio);
    cout << "Vuelta: " << centimos << endl;
}

