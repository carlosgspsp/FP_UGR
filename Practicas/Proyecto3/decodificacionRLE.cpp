/**
  * @file decodificacionRLE.cpp
  * @brief Programa para decodificar RLE
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
 int aux, cont = 0;
 double frecuencia, dato;
 string cadena = "";



 do{

  cout << "Introduce las frecuencias y los datos <frecuencia><dato>: ";
  cin >> frecuencia;
  aux = frecuencia;
  if (frecuencia/aux==1)
  {


  if (frecuencia !=0)
  cin >> dato;


    for (int i = 0; i < frecuencia; i++)
    {
        cadena+= " " + to_string(dato);
    }
  }
  }while (frecuencia > 0 && frecuencia/aux==1 );


  if (frecuencia  == 0)
    cout << endl << cadena << " -300";
  else if (frecuencia < 0)
    cout << "\nError inesperado, valor de frecuencia sin sentido.\n";
  else if (frecuencia/aux!=1)
    cout << "\nError inesperado, frecuencia no entera.\n";


 return 0;
 }
