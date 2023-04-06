/**
  * @file media_varianza.cpp
  * @brief Programa que calcula la media y varianza de una secuencia de temperaturas
  *
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que procesa una secuencia de valores de temperatura hasta
  * que se introduce una temperatura menor que el cero absoluto (-273.15 grados).
  *
  * Como resultado, escribirá la media y la varianza de dichos datos.
  *
  * Nota: tenga en cuenta que no se pueden almacenar todos los datos
  */

   #include <iostream>
    #include <cmath>
 using namespace std;

 int main(){

 int cont= 0;
 double temperatura, media, varianza, suma = 0, suma_var = 0;
 bool primero = false;

  cout << "\nIntroduce temperaturas:\n";
  cin >> temperatura;

 while (temperatura >= -273.15)
 {
  cont++;
  suma+=temperatura;
  suma_var+=pow(temperatura,2);
  primero = true;

  cout << "\nIntroduce temperaturas:\n";
  cin >> temperatura;

 }

media = suma/cont;

varianza= (suma_var/cont)-pow(media,2);

if (primero)
    {
cout << "\nLa media es: " << media << endl;
cout << "\nLa varianza es: " << varianza << endl;
    }
else
cout << "\nNo se han introducido valores validos:\n ";



return 0;

 }
