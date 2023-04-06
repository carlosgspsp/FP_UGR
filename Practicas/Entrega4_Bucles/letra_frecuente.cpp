/**
  * @file letra_frecuente.cpp
  * @brief Programa para determinar la letra más frecuente
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Suponga que se ha procesado un texto y se han obtenido las frecuencias con las que
  * aparecen cada una de las letras. Escriba un programa que lee pares de valores letra y
  * frecuencia y escribe como resultado la letra más frecuente. El programa lee un número
  * indeterminado de pares delimitado con un carácter centinela #.
  * Un ejemplo de ejecución es:
  *      Introduzca frecuencias:
  *      a 45
  *      c 32
  *      Z 39
  *      h 25
  *      #
  *      La letra más frecuente es 'a' con 45 repeticiones.
  *
  */
 #include <iostream>
 using namespace std;

 int main(){

    int n_aux, num;
    char c_aux, letra;

       do
        {
        cout << "\nIntroduzca una letra o el caracter terminador '#':\n";
        cin >> c_aux;
        n_aux=-1;
        while (n_aux<0 && c_aux != '#')
        {
          cout << "\nIntroduzca la frecuencia con la que aparece la letra:\n";
          cin >> n_aux;
        }
        if (num < n_aux)
        {
            num = n_aux;
            letra = c_aux;
        }

        }while (c_aux != '#');


    cout << "\nLa letra mas frecuente es: " << letra << " con " << num << " apariciones" << endl;

 }
