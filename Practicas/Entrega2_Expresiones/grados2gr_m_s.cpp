/**
  * @file grados2gr_m_s.cpp
  * @brief Programa para pasar de grados decimales a grados, minutos, segundos (Ej. 1.16)
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Escriba un programa para convertir los grados decimales a grados,
  * minutos y segundos. Recuerde que un grado son 60 minutos y un minuto son
  * 60 segundos. Por ejemplo, si escribimos como entrada 34.567, deberá obtener en la
  * salida 34 grados 34 minutos 1.2 segundos.
  */

  #include <iostream>
using namespace std;

int main(){

double a, aux, s;
int g, m;

cout << "Introduzca un numero real\n";
cin >> a;

g = a;
aux = a-g;

aux = aux*60;
m = aux;

aux = aux - m;
s = aux*60;

cout << "El numero " << a << " son\n" << g << " grados, " << m << " minutos, " << s << " segundos\n";

}
