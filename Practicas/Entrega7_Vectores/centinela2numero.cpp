/**
  * @file centinela2numero.cpp
  * @brief Programa para transformar secuencia con centinela a secuencia con n�mero de datos
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * Escriba un programa que transforme una secuencia de longitud indeterminada marcada con
  * un centinela a una secuencia que comienza con el n�mero de datos y sigue con los mismos
  * valores pero sin centinela.
  *
  * El programa lee una secuencia de valores de temperatura hasta que se introduce una
  * temperatura menor que el cero absoluto (-273.15 grados).
  *
  * Una vez cargada la secuencia, deber� escribirla en el mismo orden con un valor por l�nea.
  * La primera l�nea ser� un entero con el n�mero de datos. Las siguientes ser�n valores
  * flotantes con las temperaturas.
  *
  * Un ejemplo de ejecuci�n donde hay 2 temperaturas es:
  *     2.5 3.2 -300
  *     2
  *     2.5
  *     3.2
  *
  * Otro ejemplo, con una secuencia vac�a:
  *     -300
  *     0
  */

   #include <iostream>
   #include <vector>

 using namespace std;

 int main(){

    double t = 0;
    vector<double> v;

 cout << "\nIntroduzca los valores (mayores que -273.15): ";

 while (t >= -273.15)
 {

    cin >> t;
    if (t >= -273.15)
    v.push_back(t);

 }

 if (v.empty())
    cout << "\n0\n";
 else
{
    cout << endl;
     for (int i  = 0; i<v.size(); i++)
     cout << v[i] << endl;

}


    return 0;




 }
