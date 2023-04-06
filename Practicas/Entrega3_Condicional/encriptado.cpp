/**
  * @file encriptado.cpp
  * @brief Programa para encriptar/desencriptar con el m�todo de rotaci�n
  *
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  *
  * Un algoritmo simple de encriptado consiste en cambiar las letras para hacer el mensaje
  * no legible. Entre los m�s simples, podemos usar el de rotaci�n, usado por Julio C�sar
  * durante el imperio romano. La clave es un simple n�mero que indica cu�l es la rotaci�n:
  * todas las letras se cambian por la que corresponde a su posici�n en el alfabeto m�s la
  * clave. Se llama de rotaci�n porque se entiende que despu�s de la �z� viene la �a�, es
  * decir, el salto es una rotaci�n en el alfabeto.
  *
  * Escriba un programa que recibe tres datos:
  *   - Una letra ('e' o 'd') que indica si se quiere encriptar o desencriptar,
  *     respectivamente.
  *   - Una clave, es decir, un entero que corresponde al salto para codificar.
  *   - Una letra que corresponde a la letra a codificar/decodificar.
  *
  * Por ejemplo, si la entrada es:
  *    e3a
  * El programa deber� escribir: d
  *
  * L�gicamente, con la entrada:
  *    d3d
  * El programa deber� escribir la original: a
  *
  * Finalmente, tenga en cuenta que debe codificar tanto min�sculas como may�sculas. Las
  * min�sculas se codifican con otra min�scula y las may�sculas de forma similar. Si un
  * car�cter no es una letra del alfabeto ingl�s, se escribe sin modificar.
  *
  */

 #include <iostream>
  using namespace std;

 int main(){

  int n;
  char a, letra, resultado;

 do {
 cout << "Introduzca 'e' si quiere encriptar o 'd' si quiere desencriptar\n";
 cin >> a;

 }while (a != 'e' && a != 'd');

 cout << "\nIntroduzca en numero clave\n";
 cin >> n;
 cout << "\nIntroduzca la letra a encriptar/desencriptar\n que se encuentre en el alfabeto ingles\n";
 cin >> letra;

  if (n > 26)
    n = n%26;

    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))
        switch (a)
        {
            case 'e':
                resultado = letra+n;
                if ((letra >= 'a' && letra <= 'z') && (resultado > 'z'))
                {
                    resultado = ('a' + (resultado-'z'))-1;

                }
                else if ((letra >= 'A' && letra <= 'Z') && (resultado > 'Z'))
                {
                    resultado = ('A' + (resultado-'Z'))-1;
                }

                cout << "\nLa encriptacion de la letra " << letra << " es " << resultado;
                break;

            case 'd':
                resultado = letra-n;
                if ((letra >= 'a' && letra <= 'z') && (resultado < 'a'))
                {
                    resultado = ('z' - ('a'-resultado))+1;

                }
                else if ((letra >= 'A' && letra <= 'Z') && (resultado < 'A'))
                {
                    resultado = ('Z' - ('A'-resultado))+1;
                }
                cout << "\nLa desencriptacion de la letra " << letra << " es " << resultado;
                break;

        }


    else
        cout << "\nEl caracter " << letra << " no es modificado en la encriptacion ";


 }
