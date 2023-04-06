/**
  * @file codificacionRLE.cpp
  * @brief Programa para codificar en RLE
  *
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  */

    #include <iostream>
    #include <cmath>
 using namespace std;

 int main(){

 const int factor = 3;
 int cont = 0;
 double actual, anterior;
 string cadena = "";
 bool primero = true;

  cout << "Introduce temperaturas: ";
  cin >> actual;
  anterior = actual;


 while (actual >= -273.15){


    if (!primero)
     if(actual == anterior)
        cont++;
     else
     {
         cadena+=  "  " + to_string(cont) + "  " + to_string(anterior) ;
         cont = 1;
     }
    else
        primero = false;

    anterior = actual;
    cout << "\nIntroduce temperaturas:\n";
    cin >> actual;

 }

 cadena+=  "  " + to_string(cont) + "  " + to_string(anterior) + "  " + to_string(0) ;
 cout << endl << cadena;

 return 0;
 }
