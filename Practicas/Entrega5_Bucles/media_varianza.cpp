/**
  * @file media_varianza.cpp
  * @brief Programa para calcular la media y varianza
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que lea un n�mero entero que indica el n�mero de datos
  * y a continuaci�n tantos n�meros reales como indique dicho entero. Como
  * resultado, escribir� la media y la varianza de dichos datos.
  *
  * Consulte la formulaci�n en el ejercicio 3.13 (Media y varianza)
  */
 #include <iostream>
 #include <cmath>
 using namespace std;

 int main(){

int n;
double real, suma = 0,suma_var, media, varianza;

cout << "\nIntroduzca en numero de datos que quiere leer:\n";
cin >> n;

for (int i = 0; i < n; i++)
{
    cout << "\nIntroduzca un numero real:\n";
    cin >> real;
    suma+=real;
    suma_var+=pow(real,2);
}


media = suma/n;

varianza= (suma_var/n)-pow(media,2);


cout << "La media es: " << media << endl;
cout << "La varianza es: " << varianza << endl;
 }
