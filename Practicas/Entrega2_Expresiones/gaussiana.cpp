/**
  * @file gaussiana.cpp
  * @brief Cálculo del valor de una gaussiana (Ej. 1.20)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * La expresión que define una función gaussiana es la siguiente:
  *
  * (véase ejercicio 1.20)
  *
  * Con valores 1, 2, 3, el resultado es gaussiana(3)= 0.120985
  */

    #include <iostream>
  #include <cmath>
using namespace std;

int main(){

double u, o, x, gaussiana;

cout << "Introduce el valor de 'u' \n";
cin >> u;
cout << "\nIntroduce el valor de 'o' \n";
cin >> o;
cout << "\nIntroduce el valor de 'x' \n ";
cin >> x;

double aux1 = 1/(o*sqrt(2*M_PI));

double aux2 = pow(M_E, (-1/2)*pow((x-u)/o,2));

gaussiana = aux1*aux2;


cout << "El valor de la gaussiana para los valores\n ";
cout << "u= " << u << " o= " << o << " x= " << x;
cout << "\n es " << gaussiana;

}
