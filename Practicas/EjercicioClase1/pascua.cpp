/**
  * @file pascua.cpp
  * @brief Calcula la fecha del domingo de Pascua de un a�o
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  *  La fecha del domingo de Pascua corresponde al primer domingo despu�s de la primera
  * luna llena que sigue al equinoccio de primavera. El algoritmo que se presenta a
  * continuaci�n (denominado C�mputus) permite calcular esta fecha y es v�lido para a�os
  * comprendidos entre 1900 y 2100. Para un determinado a�o, los c�lculos que hay que
  * realizar son:
  *    - A = a�o mod 19
  *    - B = a�o mod 4
  *    - C = a�o mod 7
  *    - D = (19 * A + 24) mod 30
  *    - E = (2 * B + 4 * C + 6 * D + 5) mod 7
  *    - N = (22 + D + E)
  * donde mod significa m�dulo (resto de dividir el primero entre el segundo).
  *
  * El valor de N corresponde al d�a de marzo en el que se sit�a el domingo de Pascua.
  * En el caso de que sea mayor que 31, el valor se refiere a un d�a de abril. Adem�s, hay
  * dos excepciones:
  *    1.- Si la fecha obtenida es el 26 de abril, entonces la Pascua caer� en el 19
  *        de abril.
  *    2.- Si es el 25 de abril, con D = 28, E = 6 y A > 10, entonces la Pascua es el 18
  *       de abril.
  * Escriba un programa que lea un a�o y muestre el d�a y mes en el que se celebr� o
  * celebrar� el domingo de pascua para ese a�o.Tenga en cuenta que si el a�o no est� en el rango v�lido, deber� mostrar un mensaje y terminar.
  * En la siguiente lista tiene algunos datos para verificar que el ejercicio es correcto:
  *    - A�o 2005 -> Pascua el 27 de marzo
  *    - A�o 2011 -> Pascua el 24 de abril
  *    - A�o 2049 -> Pascua el 18 de abril
  *    - A�o 2076 -> Pascua el 19 de abril
  *
  */

    #include <iostream>
    #include <cmath>
    using namespace std;


int main(){
    int anio;
    cout << "\nIntroduzca el anio\n";
    cin >> anio;
    int a = anio%19;
    int b = anio%4;
    int c = anio%7;
    int d = ((19*a)+24)%30;
    int e = ((2*b)+(4*c)+(6*d)+5)%7;
    int n = 22+d+e;
    string mes;
    if(n>31)
    {
        mes = "Abril";
        n -= 31;
    }else
        mes = "Marzo";


    if (n == 26)
        n = 19;
    if (n == 25 && d==28 && e==6 && a>10)
        n = 18;


    cout << "\nEl domingo de pascua del anio " << anio << " cae el " << n << " de " << mes << '\n';

}
