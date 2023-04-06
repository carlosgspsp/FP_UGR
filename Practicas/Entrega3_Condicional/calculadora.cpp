/**
  * @file calculadora.cpp
  * @brief Programa para realizar una operación simple entre dos números (Ej. 2.18)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Escriba un programa que haga las funciones de una calculadora básica: suma,
  * resta, multiplicación y división. Para ello, el programa debe leer dos números
  * enteros y un carácter que indique la operacióna realizar (+, -, *, /), mostrando
  * el resultado a continuación. Por ejemplo, ante esta entrada:
  *       34 12 +
  * el programa mostrará esta salida:
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
