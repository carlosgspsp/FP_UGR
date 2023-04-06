/**
  * @file media_varianza.cpp
  * @brief Programa para calcular la media y varianza de una secuencia de valores
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * Escriba un programa que procesa una secuencia de valores de temperatura hasta
  * que se introduce una temperatura menor que el cero absoluto (-273.15 grados).
  *
  * Como resultado, escribirá la media y la varianza de dichos datos. Las fórmula
  * que se utilizará paa la varianza es la que calcula la media de las diferencias
  * al cuadrado.
  *
  * Nota: tenga en cuenta que primero calcula la media y una vez obtenida,
  * calculamos la varianza. Por tanto, se almacenarán los datos en un vector.
  */

    #include <iostream>
   #include <vector>
   #include <cmath>

 using namespace std;

 int main(){

    double t = 0, suma = 0, media, varianza;
    vector<double> v;

 cout << "\nIntroduzca los valores (mayores que -273.15): ";

 while (t >= -273.15)
 {

    cin >> t;
    if (t >= -273.15)
    v.push_back(t);

 }

 if (v.empty())
    cout << "\nNo hay datos\n";
 else
{
    cout << endl;
     for (int i  = 0; i<v.size(); i++)
       {
        suma += v[i];
       }
    media = suma/v.size();
    suma = 0;
     for (int i  = 0; i<v.size(); i++)
       {
        suma += pow(v[i]-media,2);
       }

       varianza = suma/v.size();


}

cout << "\nLa Media es: " << media << endl;
cout << "\nLa Varianza es: " << varianza << endl;

    return 0;




 }
