/**
  * @file datos2ascii.cpp
  * @brief Programa para dibujar una gr�fica de datos
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * Escriba un programa que transforme una secuencia de datos encabezada
  * con la longitud en una gr�fica que representa la variaci�n de los datos.
  * Un ejemplo con los datos 1, 10, 3, 24 y 5 es:
  *
  *   >
  *   --------------------------->
  *   ------>
  *   ---------------------------------------------------------------------->
  *   ------------>
  *
  * Como puede ver, puede rellenar con el car�cter '-', terminar con el
  * car�cter '>' y hacer que el m�ximo alcance un ancho de 70.
  *
  * Para representar la funci�n, necesitamos determinar el intervalo donde se sit�an
  * los valores. Conociendo este intervalo, es f�cil calcular de forma proporcional
  * hasta d�nde hay que dibujar un determinado valor. Si es igual al m�nimo, se queda
  * en un simple car�cter y si es el m�ximo alcanza la longitud m�xima.
  *
  * Por ejemplo, una ejecici�n de este programa podr�a ser:
  * 5 -10 3 7 10 3
  * Representaci�n de datos en [-10 , 10]
  *   >
  *   --------------------------------------------->
  *   ----------------------------------------------------------->
  *   ---------------------------------------------------------------------->
  *   --------------------------------------------->
  * donde la primera l�nea corresponde a los datos de entrada. Observe que tambi�n se
  * informa del intervalo donde se sit�an los datos antes de hacer el dibujo.
  *
  * Nota: una vez resuelto el problema, compruebe que tambi�n funciona para una secuencia
  * de valores id�nticos.
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
