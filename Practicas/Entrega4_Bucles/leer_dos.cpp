/**
  * @file leer_dos.cpp
  * @brief Programa para comprobar la lectura de dos valores enteros
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Realice un programa que permita leer dos valores enteros, el primero negativo y el
  * segundo positivo. El programa debe repetir la lectura de cada uno de ellos hasta que se
  * cumpla la correspondiente condición.
  *
  * En el primero valor, se debe usar un bucle do-while, mientras que en el segundo debe
  * usarse un bucle while. Como resultado final, el programa escribe los dos números
  * introducidos.
  *
  */
 #include <iostream>
 using namespace std;

 int main(){

    double a, b = 0;

       do
        {
        cout << "\nIntroduzca un numero entero negativo (0 no es valido):\n";
        cin >> a;
        }while (a >= 0);


    while (b <= 0)
        {
        cout << "\nIntroduzca un numero entero positivo (0 no es valido):\n";
        cin >> b;
        }


    cout << "\nHa introducido los valores: " << a << " y " << b << endl;

 }
