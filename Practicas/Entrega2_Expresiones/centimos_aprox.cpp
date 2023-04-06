/**
  * @file centimos_aprox.cpp
  * @brief Cálculo de diferencia en céntimos (Ej. 1.4)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Comente brevemente la razón del resultado erróneo obtenido en
  * el programa y proponga una solución (modifique este programa dejando
  * la parte errónea comentada y añadiendo el código que considere necesario)
  *
  *
  * El valor no obtiene 46 céntimos porque...
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

