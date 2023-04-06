/**
  * @file calculadora.cpp
  * @brief Programa para realizar una operaci�n simple entre dos n�meros (Ej. 2.18)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Escriba un programa que haga las funciones de una calculadora b�sica: suma,
  * resta, multiplicaci�n y divisi�n. Para ello, el programa debe leer dos n�meros
  * enteros y un car�cter que indique la operaci�na realizar (+, -, *, /), mostrando
  * el resultado a continuaci�n. Por ejemplo, ante esta entrada:
  *       34 12 +
  * el programa mostrar� esta salida:
  *        46
  */

 #include <iostream>
 using namespace std;

 int main(){

     double a, b, resultado;
     char c;

     cout << "Introduzca el primer numero:\n";
     cin >> a;
     cout << "Introduzca el segundo numero:\n";
     cin >> b;
     cout << "Introduzca el caracter de operacion (+,-,*,/):\n";
     cin >> c;

    switch (c)
    {
    case '+':
      cout << "\nHa elegido la operacion suma";
        resultado = a+b;
        break;
    case '-':
        cout << "\nHa elegido la operacion resta";
        resultado = a-b;
        break;
    case '*':
        cout << "\nHa elegido la operacion multiplicacion";
        resultado = a*b;
        break;
    case '/':
        cout << "\nHa elegido la operacion division";
        resultado = a/b;
        break;
    default:
        cout << "\nEl caracter introducido no coincide con ninguna de las operaciones disponibles.\n";
    }

    cout << "\nEl resultado es: " << resultado;
 }
