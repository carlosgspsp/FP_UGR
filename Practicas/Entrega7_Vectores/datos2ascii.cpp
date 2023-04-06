/**
  * @file datos2ascii.cpp
  * @brief Programa para dibujar una gráfica de datos
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * Escriba un programa que transforme una secuencia de datos encabezada
  * con la longitud en una gráfica que representa la variación de los datos.
  * Un ejemplo con los datos 1, 10, 3, 24 y 5 es:
  *
  *   >
  *   --------------------------->
  *   ------>
  *   ---------------------------------------------------------------------->
  *   ------------>
  *
  * Como puede ver, puede rellenar con el carácter '-', terminar con el
  * carácter '>' y hacer que el máximo alcance un ancho de 70.
  *
  * Para representar la función, necesitamos determinar el intervalo donde se sitúan
  * los valores. Conociendo este intervalo, es fácil calcular de forma proporcional
  * hasta dónde hay que dibujar un determinado valor. Si es igual al mínimo, se queda
  * en un simple carácter y si es el máximo alcanza la longitud máxima.
  *
  * Por ejemplo, una ejecición de este programa podría ser:
  * 5 -10 3 7 10 3
  * Representación de datos en [-10 , 10]
  *   >
  *   --------------------------------------------->
  *   ----------------------------------------------------------->
  *   ---------------------------------------------------------------------->
  *   --------------------------------------------->
  * donde la primera línea corresponde a los datos de entrada. Observe que también se
  * informa del intervalo donde se sitúan los datos antes de hacer el dibujo.
  *
  * Nota: una vez resuelto el problema, compruebe que también funciona para una secuencia
  * de valores idénticos.
  */

   #include <iostream>
   #include <vector>

 using namespace std;

 int main(){

    int primero;
    double t = 0, mayor, menor, rango, aux, lineas;
    vector<double> v;

 cout << "\nIntroduzca los valores: ";
 cin >> primero;

 for (int i = 0; i <primero; i++)
 {

    cin >> t;
    v.push_back(t);

 }

    mayor = v[0];
    menor = mayor;

 if (v.empty())
    cout << "\nNo hay datos\n";


 else
    for (int i = 0; i<primero; i++)
    {
        if (v[i]>mayor)
            mayor = v[i];
        if (v[i]<menor)
            menor = v[i];
    }

    rango = mayor - menor;
    aux = 70/rango;
    cout << endl << aux << endl;
cout << "El rango es: [" << menor << ',' << mayor << "]\n";

    for (int i = 0; i <  v.size(); i++)
        {

        cout << endl;
        lineas = abs(v[i]-menor)*aux;
        for(int  j = 0; j< lineas-1 ; j++)
        {

            cout << '-';

        }

        cout << '>';

        }


    return 0;




 }
