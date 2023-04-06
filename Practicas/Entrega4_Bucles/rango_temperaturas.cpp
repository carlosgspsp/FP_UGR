/**
  * @file rango_temperaturas.cpp
  * @brief Calcula el rango de temperaturas (mínimo, máximo, lectura anticipada, centinela)
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que lee una secuencia de valores de temperatura hasta que se
  * introduce una temperatura menor que el cel absoluto (-273,15 grados centígrados).
  *
  * El programa debe escribir como resultado el intervalo mínimo donde se sitúan el
  * conjunto de temperaturas.
  *
  * Por ejemplo, si se introducen los siguientes valores:
  *      2.5 3 6 7.1 1 -300
  * El programa deberá escribir: [1,7.1]
  *
  * Si se introducen los valores:
  *      -5 -4 -10 -2 -300
  * El programa deberá escribir: [-10,-2]
  *
  * Si se introduce:
  *      -300
  * El programa deberá escribir: No hay datos
  *
  */
 #include <iostream>
 using namespace std;

 int main(){

    double maximo, minimo, aux;
    const double cero_absoluto = -273.15;

       do
        {
        cout << "\nIntroduzca un valor de temperatura en grados centigrados:\n";
        cin >> aux;

        if (aux<minimo && aux>=cero_absoluto)
            minimo = aux;
        else if (aux>maximo)
            maximo = aux;

        }while (aux >= cero_absoluto );


        cout << "\nEl intervalo minimo donde se situan el conjunto de valores es [" << minimo << ',' << maximo << "]\n";

 }

