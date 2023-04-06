/**
  * @file maxima_variacion.cpp
  * @brief Programa para calcular el máximo y mínimo incremento
  *
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que lee una secuencia de valores de temperatura hasta que
  * se introduce una temperatura menor que el cero absoluto (-273.15 grados).
  *
  * El programa debe escribir como resultado el mayor incremento y el mayor
  * decremento de temperatura. Para ello, deberá calcular el máximo y el mínimo
  * de las diferencias entre cada valor y el siguiente. Algunos ejemplos
  * de ejecución son:
  *
  *     Introduzca temperaturas: 2.5 3 6 7.1 1 -300
  *     El máximo incremento es: 3
  *     El máximo decremento es: 6.1
  *
  *     Introduzca temperaturas: 1 2 3 4 5 -300
  *     El máximo incremento es: 1
  *     El máximo decremento es: no hay decrementos
  *
  *     Introduzca temperaturas: 1 -300
  *     El máximo incremento es: no hay incrementos
  *     El máximo decremento es: no hay decrementos
  *
  *     Introduzca temperaturas: -300
  *     No hay datos.
  */

  #include <iostream>
 using namespace std;

 int main(){

 int primero = true;
 double actual, anterior, decremento, incremento, aux;
 bool inc = false, dec = false;

  cout << "Introduce temperaturas: ";
  cin >> actual;
  anterior = actual;
  if (actual < -273.15)
    cout << "\nNo hay datos\n";

 else
    {
 while (actual >= -273.15)
 {

     if (!primero)
     {
         aux = actual - anterior;
         if (aux < 0)
         {
            if(decremento < abs(aux))
            decremento = abs(aux);
            dec = true;
         }
         else if (aux > 0)
         {
             if(incremento < aux)
             incremento = aux;
             inc = true;
         }


     }
     else
        primero = false;

     cout << "Introduce temperaturas: ";
     anterior = actual;
     cin >> actual;


 }


cout << "\nEl maximo incremento es: ";
if(inc)
cout << incremento << endl;
else
cout << "No hay incrementos ";


cout << "\nEl maximo decremento es: ";
if(dec)
cout << decremento << endl;
else
cout << "No hay decrementos ";
    }


    return 0;

 }
