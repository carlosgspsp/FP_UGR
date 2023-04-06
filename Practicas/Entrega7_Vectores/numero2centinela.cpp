/**
  * @file numero2centinela.cpp
  * @brief Programa para transformar secuencia con número de datos a secuencia con centinela
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * Escriba un programa que transforme una secuencia encabezada con la longitud en una de
  * longitud indeterminada marcada con un centinela.
  *
  * El programa lee una secuencia de valores de temperatura compuesta por un número entero
  * n seguido de n valores de temperatura.
  *
  * Una vez cargada la secuencia, deberá escribirla en el mismo orden con un valor por
  * línea. Escribirá tantas líneas como valores de temperatura más una última con un valor
  * que actúe como centinela de fin de secuencia.
  *
  * Un ejemplo de ejecución donde hay 2 temperaturas es:
  *     2 2.5 3.2
  *     2.5
  *     3.2
  *     -300
  *
  * Otro ejemplo, con una secuencia vacía:
  *     0
  *     -300
  */


   #include <iostream>
   #include <vector>

 using namespace std;
 int main(){

    int primero;
    double t;
    vector<double> v;

 cout << "\nIntroduzca los valores: ";
 cin >> primero;

 for (int i = 0; i <primero; i++)
 {

    cin >> t;
    v.push_back(t);

 }

 if (v.empty())
    cout << "\n0";

    cout << endl;
     for (int i  = 0; i<v.size(); i++)
     cout << v[i] << endl;
     cout << "-300";



    return 0;




 }
