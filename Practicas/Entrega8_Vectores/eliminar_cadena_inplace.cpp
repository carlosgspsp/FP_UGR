/**
  * @file eliminar_cadena.cpp
  * @brief Programa para eliminar una cadena de un texto
  *
  * @author Carlos Garcia Segura
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del carácter delimitador '#'
  *   - Un texto a eliminar, seguido por otro delimitador '#'.
  *
  * El resultado del programa será el mismo texto pero donde se han eliminado todas las
  * ocurrencias del texto a eliminar. En la solución debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Cargar el texto a eliminar en un segundo vector de char.
  *   -# Realizar la eliminación del texto modificando el vector de entrada.
  *   -# Escribir el vector original, que ahora no contendrá la cadena a eliminar.
  *
  * Por tanto, no debe haber un vector aparte donde se pueda guardar el resultado, sino
  * que tiene que usar el mismo vector de entrada.
  *
  * Un ejemplo de ejecución es:
  *     Esto es un ejemplo prueba, una frase prueba que debe salir sin la cadena prueba.#prueba#
  *     Esto es un ejemplo, una frase que debe salir sin la cadena .
  * donde la primera línea es la entrada y la segunda la salida.
  *
  * Otro ejemplo puede ser:
  *     prueba para probar de nuevo un ejemplo, con la cadena al principio, y un final:prueba#prueba#
  *      para probar de nuevo un ejemplo, con la cadena al principio, y un final:
  */



   #include <iostream>
   #include <vector>
   #include <cmath>

 using namespace std;

 int main(){

    char aux;

    vector<char> texto;
    vector<char> eliminar;
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
        eliminar.push_back(aux);
        aux =cin.get();
    }

   for (int i = 0; i < texto.size(); i++)
            {
                if (texto[i] == eliminar[cont])
                    {
                    cont++;
                    if (cont == eliminar.size())
                       {

                        texto.resize(texto.size()-cont);
                        cont = 0;
                       }
                    }
                else
                    cont = 0;

            }


        cout << endl << endl;
        for (int i = 0; i <texto.size(); i++)
            cout << texto[i];
        cout << endl;




    return 0;
 }




