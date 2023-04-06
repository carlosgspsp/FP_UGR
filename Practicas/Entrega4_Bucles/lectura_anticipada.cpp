/**
  * @file lectura_anticipada.cpp
  * @brief Programa para comprobar la lectura de dos valores enteros
  *
  * @author Fulanito...
  * @date Noviembre-2020
  *
  * Realice un programa que permita leer un número real en el intervalo [0,1]. El programa
  * debe diseñarse mediante una lectura anticipada, es decir, una lectura para el primer dato
  * y un bucle que implementa la repetición de la lectura hasta que el valor sea correcto.
  *
  * Tenga en cuenta que dado que el primer dato se lee aparte, el mensaje para introducirlo
  * indicará el intervalo válido, mientras que en las siguientes entradas podemos usar un
  * mensaje que avisa de que el valor anterior no es válido.
  *
  * Como resultado final, el programa debe escribir el dato introducido.
  *
  */
 #include <iostream>
 using namespace std;

 int main(){

    double a;
    cout << "\nIntroduzca un numero real entre 0 y 1 ambos inclusive:\n";
    cin >> a;

    while (a < 0 || a > 1)
        {
        cout << "\nEl valor introducido es incorrecto\n";
        cin >> a;
        }

    cout << "\nHa introducido el valor: " << a << endl;

 }
