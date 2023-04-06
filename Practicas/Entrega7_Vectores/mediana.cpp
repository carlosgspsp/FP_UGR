/**
  * @file mediana.cpp
  * @brief Programa para calcular la mediana de una secuencia de valores
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * Escriba un programa que procese una secuencia de datos encabezada con
  * la longitud para obtener el valor de la mediana.
  *
  * Recuerde que la mediana es el valor que se sitúa en el centro cuando
  * los datos están ordenados. En caso de que hay un número par de datos,
  * puede seleccionar cualquiera de los dos centrales.
  *
  * Un ejemplo de ejecución es:
  *     9   6.1  1.5  2  1.9  2.6  6  2.1  2.2  4
  *     Mediana de 9 valores: 2.2
  *
  * donde la primera línea es la entrada del programa y la segunda el resultado.
  */

   #include <iostream>
   #include <vector>
   #include <cmath>

 using namespace std;

 int main(){

    int primero;
    double t = 0, mediana, aux;
    vector<double> v;

 cout << "\nIntroduzca los valores: ";
 cin >> primero;

 for (int i = 0; i <primero; i++)
 {

    cin >> t;
    v.push_back(t);

 }

 if (v.empty())
    cout << "\nNo hay datos\n";
 else
{

  for (int i =0; i < primero; i++)
    {
    aux = v[i];
    int j = i -1;
    while ((v[j] > aux) && (j >= 0) )
    {
        v[j+1] = v[j];
        j--;
    }

    v[j+1] = aux;

    }


  mediana = v[primero/2];

}

cout << "El vector ordenado es: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << ", ";
}


cout << endl << "\nLa Mediana es: " << mediana << endl;


    return 0;




 }
