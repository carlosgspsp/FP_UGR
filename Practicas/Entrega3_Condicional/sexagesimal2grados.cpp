/**
  * @file sexagesimal2grados.cpp
  * @brief Programa para pasar de grados/minutos/segundos a grados
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * El programa recibe como entrada un entero (entre 0 y 359) que indica grados, un car�cter
  * 'g' que simboliza grados, un entero (entre 0 y 59), un car�cter 'm' que simboliza minutos
  * y un real en el intervalo [0,60) seguido de un car�cter 's' que simboliza segundos. Como
  * salida obtiene el n�mero de grados correspondiente como n�mero real.
  * Por ejemplo, con la entrada:
  *    34g 34m 1.2s
  * deber�a obtener la salida:
  *    34.467 grados
  *
  * Adem�s, deber� comprobar que se cumplen las condiciones, es decir, si alg�n valor no
  * est� en el rango correcto o alg�n car�cter simb�lico no es el esperado, la salida debe
  * indicar que hay un error de formato.
  */

 #include <iostream>
 using namespace std;

 int main(){

 double n1, n2, n3, resultado = 0;
 char c1, c2, c3;


 cout << "Introduzca los numeros con sus respectivos caracteres:\n";
 cin >> n1 >> c1 >> n2 >> c2 >> n3 >> c3;

 c1 = tolower(c1);
 c2 = tolower(c2);
 c3 = tolower(c3);

 switch (c1)
 {
    case 'g':
        if (n1 > 359 || n1 < 0)
        cout << "\nEl primer valor introducido no se encuentra entre los valores esperados\n";
        else
        resultado += n1;
        break;
    case 'm':
        if (n1 > 59 || n1 < 0)
        cout << "El primer valor introducido no se encuentra entre los valores esperados";
        else
        resultado += n1/60;
        break;
    case 's':
        resultado += n1/3600;
        break;
    default:
        cout << "\nEl primer caracter introducido no se corresponde a ninguno de los disponibles\n";
        break;
 }

 switch (c2)
 {
    case 'g':
        if (n2 > 359 || n2 < 0)
        cout << "\nEl segundo valor introducido no se encuentra entre los valores esperados\n";
        else
        resultado += n2;
        break;
    case 'm':
        if (n2 > 59 || n2 < 0)
        cout << "\nEl segundo valor introducido no se encuentra entre los valores esperados\n";
        else
        resultado += n2/60;
        break;
    case 's':
        resultado += n2/3600;
        break;
    default:
        cout << "\nEl primer caracter introducido no se corresponde a ninguno de los disponibles\n";
        break;
 }

  switch (c3)
 {
    case 'g':
        if (n3 > 359 || n3 < 0)
        cout << "\nEl tercer valor introducido no se encuentra entre los valores esperados\n";
        else
        resultado += n3;
        break;
    case 'm':
        if (n3 > 59 || n3 < 0)
        cout << "\nEl tercer valor introducido no se encuentra entre los valores esperados\n";
        else
        resultado += n3/60;
        break;
    case 's':
        resultado += n3/3600;
        break;
    default:
        cout << "\nEl primer caracter introducido no se corresponde a ninguno de los disponibles\n";
        break;
 }

cout << "El resultado es: " << resultado << " grados.";

 }
