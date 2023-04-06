/**
  * @file eliminar_char_inplace.cpp
  * @brief Programa para eliminar un car�cter de un texto
  *
  * @author Fulanito...
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del car�cter delimitador '#'
  *   - Un car�cter a eliminar.
  *
  * El resultado del programa ser� el mismo texto pero donde se han eliminado todas las
  * ocurrencias del car�cter a eliminar. En la soluci�n debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Realizar la eliminaci�n del texto modificando el mismo vector de entrada.
  *   -# Escribir el vector resultado.
  *
  * Por tanto, no debe haber un vector aparte donde se pueda guardar el resultado, sino
  * que tiene que usar el mismo vector de entrada.
  *
  * Un ejemplo de ejecuci�n es:
  *     *Esto es un* ejemplo,* una frase que debe **salir sin el ***car�cter extra�o.#*
  *     Esto es un ejemplo, una frase que debe salir sin el car�cter extra�o.
  * donde la primera l�nea es la entrada y la segunda la salida.
  */

      #include <iostream>
   #include <vector>
   #include <cmath>

 using namespace std;

 int main(){

    char aux;
    vector<char> texto;
    char c;
    int pos_alm,cont = 0;

    cout << "\nIntroduzca el texo terminado por el simbolo '#' y el texto a eliminar terminado por el simbolo '#'\n";


    aux =cin.get();
    while (aux != '#')
    {
        texto.push_back(aux);
        aux =cin.get();
    }

    c =cin.get();


            for (int i = 0; i < texto.size(); i++)
            {
                if (texto[i] == c)
                    {
                    for (int j = i+1; j <texto.size(); j++)
                            texto[j-1] = texto[j];
                    i--;
                    texto.resize(texto.size()-1);
                    }
            }


        cout << endl;
        for (int i = 0; i <texto.size(); i++)
            cout << texto[i];
        cout << endl;



    return 0;
 }
