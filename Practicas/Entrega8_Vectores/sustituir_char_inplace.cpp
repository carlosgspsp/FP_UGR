/**
  * @file sustituir_char_inplace.cpp
  * @brief Programa para sustituir un car�cter de un texto
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del car�cter delimitador '#'
  *   - Un texto que sustituye, seguido por otro delimitador '#'.
  *   - Un car�cter que hay que sustituir
  *
  * El resultado del programa ser� el mismo texto pero donde se han sustituido todas las
  * ocurrencias del car�cter a sustituir por el texto que sustituye. En la soluci�n debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Cargar el texto que sustituye en un segundo vector de char.
  *   -# Realizar la sustituci�n del texto rellenando el primer vector.
  *   -# Escribir el vector resultado.
  *
  * Por tanto, no debe haber un vector aparte donde se pueda guardar el resultado, sino
  * que tiene que usar el mismo vector de entrada. Para ello, tenga en cuenta que_
  *   - Puede contar el n�mero de caracteres que hay en la entrada.
  *   - Si quiere sustituir en el mismo vector, puede calcular el tama�o final que tendr�.
  *   - Puede rellenar el vector que se obtendr� de derecha a izquierda, sin pisar otros datos.
  *
  * Un ejemplo de ejecuci�n es:
  *     * quiere que probemos este programa. Seguro que le satisface a *.#Antonio#*
  *     Antonio quiere que probemos este programa. Seguro que le satisface a Antonio.
  * donde la primera l�nea es la entrada y la segunda la salida.
  *
  */

      #include <iostream>
   #include <vector>
   #include <cmath>

 using namespace std;

 int main(){

    char aux;
    vector<char> texto;
    vector<char> sustituto;
    char c;
    int pos_alm,cont = 0;

    cout << "\nIntroduzca el texo terminado por el simbolo '#' y el texto a eliminar terminado por el simbolo '#'\n";


    aux =cin.get();
    while (aux != '#')
    {
        texto.push_back(aux);
        aux =cin.get();
    }

     aux =cin.get();
    while (aux != '#')
    {
        sustituto.push_back(aux);
        aux =cin.get();
    }

    c =cin.get();



            for (int i = 0; i < texto.size(); i++)
            {

                if (texto[i] == c)
                    {


                        texto.resize(texto.size()+sustituto.size()-1);
                        for(int j = 0; j < sustituto.size()-1; j++)
                            for (int k = texto.size(); k>i; k--)
                                 texto[k]=texto[k-1];



                        for ( int j = 0; j < sustituto.size(); j++)
                            texto[i+j] = sustituto[j];

                    }

            }


        cout << endl;
        for (int i = 0; i <texto.size(); i++)
            cout << texto[i];
        cout << endl;



    return 0;
 }
