/**
  * @file submuestreo.cpp
  * @brief Programa para muestrear una secuencia de temperaturas
  *
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que lee una secuencia de valores de temperatura para
  * obtener un submuestreo. El programa deberá seleccionar un subconjunto de
  * muestras a partir de un parámetro que corresponde a la tasa de muestreo,
  * es decir, cada cuántos elementos seleccionamos una muestra.
  *
  * Tenga en cuenta que los datos de entrada terminarán cuando se introduce
  * una temperatura menor que el cero absoluto (-273.15 grados centígrados).
  * Además el resultado será una secuencia terminada en un valor menor que
  * el cero absoluto para marcar el final de secuencia.
  *
  * Por ejemplo, si el programa tiene n muestras x1, x2, ..., xn, -300, un
  * factor de 3 obtendrá la secuencia x1, x4, ..., -300.
  *
  * Para que el programa pueda trabajar sólamente con la secuencia de
  * temperaturas, la tasa de muestreo no se leerá desde la entrada estándar.
  * Deberá quedar fijada en el programa. Puede usar, por ejemplo, el valor 3
  * (el resultado tendrá aproximadamente un 33% de los datos).
  *
  * Algunos ejemplos de ejecución son:
  * Introduzca temperaturas: 2.5 3 6 7.1 1 -300
  * 2.5 7.1 -300
  *
  * Introduzca temperaturas: 1 2 3 4 -300
  * 1 4 -300
  *
  * Introduzca temperaturas: 1 -300
  * 1 -300
  *
  * Introduzca temperaturas: -300
  * -300
  *
  * donde la segunda línea corresponde a la salida del programa.
  *
  * Note que no es necesario cargar todos los valores, es decir, podemos
  * ir leyendo y generando la secuencia resultante sin almacenar los valores
  * anteriores. Puede suponer que la secuencia de salida tendrá al menos un
  * elemento.
  */


    #include <iostream>
    #include <cmath>
 using namespace std;

 int main(){

 const int factor = 3;
 int cont = 0;
 double temperatura;
 bool primero = true;
 string cadena = "";


 do
 {

     cout << "\nIntroduce temperaturas:\n";
     cin >> temperatura;

     if (cont%factor == 0 || temperatura <= -273.15)
     cadena+= to_string(temperatura) + " ";
       cont++;



 }while (temperatura >= -273.15);

 cout << endl << cadena;

 return 0;
 }
