/**
  * @file temparaturas.cpp
  * @brief Programa para transformar entre escalas de temperatura (Ej. 2.3)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Escriba un programa que permita traducir entre grados Celsius (C),
  * Fahrenheit (F), Kelvin (K) y Rankine (R). El programa preguntar� en qu� unidades damos
  * la temperatura de entrada y a qu� escala queremos convertir. Para ello sabemos que:
  *       K = C + 273'15    R = F + 459'67   9 C = 5(F - 32)
  * Tenga en cuenta que el programa pregunta la temperatura y que �sta se introduce como un
  * n�mero seguido de dos letras que indican las unidades. Por ejemplo: 35CF indica que
  * queremos pasar 35 grados Celsius (C) a grados Fahrenheit (F).
  *
  * Importante: no se permite usar operadores l�gicos (&&, ||, !). Posiblemente la primera idea
  * que nos viene a la cabeza para resolver este problema es establecer las f�rmulas para
  * convertir de todas a todas las escalas. Esto nos da un total de 4x4=16 f�rmulas diferentes
  * (si tuvi�semos m�s escalas, la cantidad de f�rmulas aumenta r�pidamente). Esta
  * soluci�n, adem�s, necesitar�a el uso de condiciones compuestas (que usan operadores
  * l�gicos). Debe pensar en una soluci�n alternativa.
  *
  */

 #include <iostream>
 using namespace std;

 int main(){

 double grados, celsius, resultado;
 char origen, destino;

 cout << "\nIntroduzca los grados\n";
 cin >> grados;
 cout << "\nIntroduzca la unidad de origen (C, F, K, R).\n";
 cin >> origen;
 cout << "\nIntroduzca la unidad de destino (C, F, K, R).\n";
 cin >> destino;

 origen = toupper(origen);
 destino = toupper(destino);

 switch (origen)
 {
 case 'C':
     celsius = grados;
    break;
 case 'F':
     celsius = (5*(grados-32))/9;
    break;
 case 'K':
     celsius = grados - 273.15;
    break;
 case 'R':
     celsius = 5*(grados-491.67)/9;
    break;
 default:
     cout << "\nEl caracter introducido no corresponde con ninguno de los disponibles\n";
    break;

 }

 switch (destino)
 {
 case 'C':
     resultado = celsius;
    break;

 case 'F':
     resultado = ((9*celsius)+160)/5;
    break;
 case 'K':
     resultado = celsius+273.15;
    break;
 case 'R':
     resultado = (((9*celsius)+160)/5)+459.67;
    break;
 default:
    break;

 }
 cout << '\n' << grados << " grados " << origen << " son  " << resultado << " grados " << destino;

 }
