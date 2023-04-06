/**
  * @file arcotangente.cpp
  * @brief Expresión genérica incluyendo arco tangente de un racional (Ej 1.19)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Escriba un programa C ++ que calcule el valor de la siguiente expresión:
  *
  * (véase ejercicio 1.19)
  *
  * Por ejemplo, para los valores a=1, b=2, c=3, e=4, p=5 y ángulo =6 el resultado
  * es 2.92803. Para resolver este ejercicio deberá buscar información sobre las
  * funciones de biblioteca atan y atan2. Estudie sus diferencias y determine cuál es
  * la adecuada en este caso.
  * La mas adecuada es atan2 ya que devuelve el valor principal de la arcotangente de y/x
  * siendo y el numerador de nuestra expresion y x el denominador de esta
  */


  #include <iostream>
  #include <cmath>
using namespace std;

int main(){

double a, b, c, e, p, o, arcotangente, aux;

cout << "Introduce el valor de 'a' \n";
cin >> a;
cout << "\nIntroduce el valor de 'b' \n";
cin >> b;
cout << "\nIntroduce el valor de 'c' \n ";
cin >> c;
cout << "\nIntroduce el valor de 'e' \n ";
cin >> e;
cout << "\nIntroduce el valor de 'p' \n ";
cin >> p;
cout << "\nIntroduce el valor de 'o' \n ";
cin >> o;

double numerador = c + (pow(e,2)*b*pow(sin(o),3));
double denominador = p - (pow(e,2)*a*pow(pow(cos(o),3),1/5));

arcotangente = atan2(numerador, denominador);

cout << "El valor de la exprresion para los valores\n ";
cout << "a= " << a << " b= " << b << " c= " << c << " e= " << e << " p= " << p << " o= " << o;
cout << "\n es " << arcotangente;

}
