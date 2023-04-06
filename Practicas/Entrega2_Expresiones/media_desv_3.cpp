/**
  * @file media_desv_3.cpp
  * @brief Programa para calcular media y desviación con 3 valores (Ej. 1.17)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Lectura de tres valores desde el teclado y salida de dos valores:
  * la media aritmética y la desviación estándar. Las expresiones son las siguientes:
  *
  *  (véase ejercicio 1.17)
  */

  #include <iostream>
  #include <cmath>
using namespace std;

int main(){

double a, b, c, media, desviacion;

cout << "Introduce 3 numeros reales.\n";
cin >> a >> b >> c;

media = (a+b+c)/3;
desviacion = sqrt((pow(a-media,2)+pow(b-media,2)+pow(c-media,2))/3);


cout << "La media es: " << media;
cout << "\nLa desviacion tipica es: " << desviacion;

}
