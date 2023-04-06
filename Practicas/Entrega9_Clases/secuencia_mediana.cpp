/**
  * @file secuencia_mediana.cpp
  * @brief Cálculo de la mediana
  *
  * @author Carlos Garcia Segura
  * @date Enero-2020
  *
  * Escriba un programa que lea una secuencia de datos  y que escriba en la salida
  * estándar el valor de la mediana.
  *
  * Recuerde que la mediana es aquel valor que después de ordenar los datos queda
  * en medio. Si hubiera un número par de datos, cualquiera de los dos centrales
  * es válido. Un ejemplo de ejecución es:
  *
  *    ¿Cuántos datos quiere procesar? 17
  *    Introduzca los datos: 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
  *    Mediana: 5
  *
  * Otro ejemplo de ejecución es:
  *
  *    ¿Cuántos datos quiere procesar? -5
  *    No es posible procesar esos datos.
  *
  * puesto que el programa requiere que haya al menos 2 datos.
  *
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones ya resueltas de la clase.
  * Añada lo que considere oportuno y complete la función  main para que resuelva el
  * problema indicado.
  *
  */

#include <iostream>
using namespace std;


class SecuenciaDatos{
private:
   static const int TAMANIO = 1000;
   double vector_privado[TAMANIO];
   int total_utilizados;

   void IntercambiaComponentesDirectamente (int pos_izda, int pos_dcha){
      double intercambia;

      intercambia = vector_privado[pos_izda];
      vector_privado[pos_izda] = vector_privado[pos_dcha];
      vector_privado[pos_dcha] = intercambia;
   }
public:

   SecuenciaDatos()
      :total_utilizados(0) {
   }

   int TotalUtilizados() {
      return total_utilizados;
   }

   int Capacidad() {
      return TAMANIO;
   }

   void EliminaTodos() {
      total_utilizados = 0;
   }

   void Aniade(double nuevo) {
      if (total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }

   void Modifica(int posicion, double nuevo) {
      if (posicion >= 0 && posicion < total_utilizados)
         vector_privado[posicion] = nuevo;
   }

   double Elemento(int indice) {
      return vector_privado[indice];
   }

   void Elimina (int posicion){
      if (posicion >= 0 && posicion < total_utilizados) {
         int tope = total_utilizados-1;

         for (int i = posicion ; i < tope ; i++)
            vector_privado[i] = vector_privado[i+1];

         total_utilizados--;
      }
   }

   //Hace falta añadir más código para facilitar el cálculo de la mediana

    void Ordenar()
    {
            for (int i = 0; i < total_utilizados; i++)
            {
                for (int j = i; j< total_utilizados; j++)
                {
                    if (vector_privado[i] > vector_privado[j])
                    {
                        IntercambiaComponentesDirectamente(i, j);
                    }
                }

            }


    }




};

int main(){
   SecuenciaDatos secuencia;
   int total_leer;
   int capacidad_secuencia;
   double dato;

   cout << "¿Cuántos datos quiere procesar? ";
   cin >> total_leer;
   capacidad_secuencia = secuencia.Capacidad();

   if (total_leer>1 && total_leer <= capacidad_secuencia) {
      cout << "Introduzca los datos: ";

      // hay que leer los datos y escribir la mediana de la secuencia
      for (int i = 0; i < total_leer; i++)
      {
          cin >> dato;
          secuencia.Aniade(dato);
      }

      cout << "\nLa secuencia sin ordenar es:\n";
      for (int i = 0; i< secuencia.TotalUtilizados(); i++)
      {
          cout << secuencia.Elemento(i);
      }



      secuencia.Ordenar();

      cout << "\nLa secuencia ordenada es:\n";
      for (int i = 0; i< secuencia.TotalUtilizados(); i++)
      {
          cout << secuencia.Elemento(i);
      }

      cout << "\nLa mediana es: " << secuencia.Elemento(secuencia.TotalUtilizados()/2);




   }
   else {
      cout << "No es posible procesar esos datos.\n";
   }
}

