/**
  * @file rachas.cpp
  * @brief Programa para analizar las rachas de crecimiento/decrecimiento
  *
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que procese y obtenga las rachas para una secuencia
  * de valores de temperatura finalizada con una temperatura menor que el
  * cero absoluto (-273.15 grados centígrados).
  *
  * El resultado será una secuencia de pares que corresponden a todas y cada
  * una de las rachas. Estos pares estarán compuestos por:
  *    - Un carácter que indica el tipo de racha. Se usarán los caracteres
  *      '+', '=' y '-' para indicar que es creciente, estable o decreciente
  *      respectivamente.
  *    - La longitud de la racha. Si la racha se produce a partir de n valores,
  *      será de longitud n-1.
  *
  * Algunos ejemplos de ejecución son:
  *     Introduzca temperaturas: 1 2 3 4 -300
  *     + 3
  *
  *     Introduzca temperaturas: 1 -300
  *
  *
  *     Introduzca temperaturas: 1 2 3 3 3 4 5 6 6 6 5 4 3 2 1 1 -300
  *     + 2 = 2 + 3 = 2 - 5 = 1
  *
  * donde la segunda línea corresponde a la salida del programa.
  */

     #include <iostream>
    #include <cmath>
 using namespace std;

 int main(){

 int cont_crec= 0, cont_est=0,cont_dec=0;
 double actual,anterior;
 bool primero = true;
 string rachas = "";

  cout << "\nIntroduce temperaturas:\n";
  cin >> actual;
  anterior = actual;

 while (actual >= -273.15)
 {
     if (actual > anterior)
     {
        cont_crec++;
        if (cont_dec>0)
            rachas+=" -"+ to_string(cont_dec);
        if (cont_est>0)
            rachas+=" =" + to_string(cont_est);
        cont_dec= 0;
        cont_est=0;
     }
     else if (actual == anterior && !primero)
     {
        cont_est++;
        if (cont_crec>0)
            rachas+= " +" + to_string(cont_crec);
        if (cont_dec>0)
            rachas+= " -" + to_string(cont_dec);
        cont_crec=0;
        cont_dec=0;
     }
     else if (actual < anterior)
     {
        cont_dec++;
        if (cont_crec>0)
            rachas+= " +" + to_string(cont_crec);
        if (cont_est>0)
            rachas+= " =" + to_string(cont_est);
        cont_crec=0;
        cont_est=0;
     }

         anterior = actual;
         cout << "\nIntroduce temperaturas:\n";
         cin >> actual;
         primero  = false;

 }

    if (cont_crec>0)
            rachas+= " +" + to_string(cont_crec);
    if (cont_est>0)
            rachas+= " =" + to_string(cont_est);
    if (cont_dec>0)
            rachas+= " -" + to_string(cont_dec);

    cout << endl << rachas;

    return 0;
 }
