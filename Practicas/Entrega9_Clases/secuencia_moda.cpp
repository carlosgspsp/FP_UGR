/**
  * @file secuencia_moda.cpp
  * @brief Cálculo de la moda
  *
  * @author Carlos Garcia Segura
  * @date Enero-2020
  *
  * Escriba un programa que lea una secuencia de datos y que escriba en la salida
  * estándar el valor de la moda.
  *
  * Recuerde que la moda es aquel valor que más se repite en la muestra. En caso
  * de que haya varios candidatos porque se repiten el mismo número de veces,
  * cualquiera de ellos será válido. Un ejemplo de ejecución es:
  *
  *
  *    ¿Cuántos datos quiere procesar? 8
  *    Introduzca los datos: 1 2 3 4 5 6 7 7
  *    Moda:       7
  *    Frecuencia: 2
  *
  * Otro ejemplo de ejecución es:
  *    ¿Cuántos datos quiere procesar? -5
  *    No es posible procesar esos datos.
  *
  * Otra con datos desordenados:
  *
  *   ¿Cuántos datos quiere procesar? 8
  *    Introduzca los datos: 1 20 30 42 6 51 20 7
  *    Moda:       20
  *    Frecuencia: 2
  *
  * puesto que el programa requiere que haya al menos 2 datos.
  *
  * Observe que se ha incluido una estructura, un tipo Frecuencia que permite trabajar
  * con pares de valores. Este tipo será el valor que devuelva la clase como resultado
  * del cálculo de la moda.
  *
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones ya resueltas de la clase.
  * Añada lo que considere oportuno y complete la función  main para que resuelva el
  * problema indicado.
  *
  */


#include <iostream>
using namespace std;


struct Frecuencia{
   double dato;
   int  frecuencia;
};


class SecuenciaDatos {
private:
   static const int TAMANIO = 1000;
   double vector_privado[TAMANIO];
   int total_utilizados;
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

   void Elimina (int posicion) {
      if (posicion >= 0 && posicion < total_utilizados){
         int tope = total_utilizados-1;

         for (int i = posicion ; i < tope ; i++)
            vector_privado[i] = vector_privado[i+1];

         total_utilizados--;
      }
   }

   // Hace falta añadir más código para calcular la moda de la secuencia
   Frecuencia Moda()
   {
       int cont = 0;
       Frecuencia f;
       f.frecuencia = 0;
       for (int i = 0; i<total_utilizados; i++)
       {
           cont = 0;
           for (int j =0; j<= total_utilizados; j++)
           {
               if (vector_privado[i] == vector_privado[j])
               cont++;
           }
           if(cont > f.frecuencia)
           {
               f.dato = vector_privado[i];
               f.frecuencia = cont;
           }
       }
       return f;
   }





};

int main(){
   SecuenciaDatos secuencia;
   int total_leer;

   int capacidad_secuencia;
   double dato;
   Frecuencia moda_secuencia;

   cout << "Cuántos datos quiere procesar? ";
   cin >> total_leer;
   capacidad_secuencia = secuencia.Capacidad();

   if (total_leer>1 && total_leer <= capacidad_secuencia) {
      cout << "Introduzca los datos: ";

      // hay que leer los datos, calcular moda y escribir el resultado
      for (int i = 0; i < total_leer; i++)
      {
          cin >> dato;
          secuencia.Aniade(dato);
      }

        moda_secuencia = secuencia.Moda();

        cout << "\nLa moda de la secuencia\n";

        for (int i = 0; i< secuencia.TotalUtilizados(); i++)
        {
            cout << secuencia.Elemento(i) << " ";
        }

        cout << "\nEs: " << moda_secuencia.dato << " Con una frecuencia de: " << moda_secuencia.frecuencia;


   }
   else {
      cout << "No es posible procesar esos datos.\n";
   }
}

