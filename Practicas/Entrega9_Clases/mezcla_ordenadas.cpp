/**
  * @file mezcla_ordenadas.cpp
  * @brief Mezcla de secuencias ordenadas
  *
  * @author Carlos Garcia Segrua
  * @date Enero-2020
  *
  * En este ejercicio se va a trabajar con una clase diseñada para mantener una
  * secuencia de elementos de forma ordenada. No se asignarán a una posición
  * concreta, sino que se introducirán en la posición adecuada al orden de menor
  * a mayor.
  *
  * Para resolver el problema, ya dispone con una solución parcial de una clase
  * SecuenciaOrdenada que mantiene una secuencia de números double. Las funciones
  * básicas que ya tiene resueltas son las de consulta básica.
  *
  * Es importante tener en cuenta que la secuencia siempre tendrá los elementos
  * almacenados de forma ordenada. Por tanto, no se puede modificar un elemento
  * de una determinada posición. En lugar de eso, complete:
  *    - Una función que recibe un solo dato de tipo double y lo añade al vector.
  *      La posición donde termine siendo almacenado deberá garantizar el orden.
  *
  * Una vez resuelta la clase, debe añadir una función externa a la clase.
  * Esta función no está en la clase y por tanto no puede acceder a los miembros
  * privados de la clase.
  *
  *    - La función tiene dos parámetros de entrada que corresponden a dos secuencias
  *      ordenadas y devuelve una nueva secuencia que contendrá la mezcla ordenada
  *      de las de entrada.
  * Para más detalles, observe que en la función main ya tiene el código que llamará
  * a la mezcla.
  *
  * Complete un programa que lea dos secuencias, las mezcle con una llamada a esta
  * función y escriba el resultado. Un ejemplo de ejecución es:
  *
  *    Introduzca enteros positivos (negativo para fin): 1 3 5 7 9 21 19 17 15 13 11 -1
  *    Introduzca enteros positivos (negativo para fin): 2 4 6 8 10 20 18 16 14 12 -1
  *    Mezcla: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
  *
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones de la clase. Añada lo que
  * considere oportuno y complete la función main para que resuelva el problema indicado.
  *
  */

#include <iostream>
using namespace std;


class SecuenciaOrdenada{
private:
   static const int TAMANIO = 1000;
   double vector_privado[TAMANIO];
   int total_utilizados;
public:
   SecuenciaOrdenada()
      :total_utilizados(0) {
   }

   int TotalUtilizados() {
      return total_utilizados;
   }

   int Capacidad(){
      return TAMANIO;
   }

   void EliminaTodos(){
      total_utilizados = 0;
   }

   double Elemento(int indice){
      return vector_privado[indice];
   }

   void Aniade(double nuevo){
       int posicion = -1;
      if (total_utilizados < TAMANIO){
         // FIXME: Completar añadiendo el elemento en su posición
         for (int i = 0; i < total_utilizados-1; i++)
         {
             if (nuevo <= vector_privado[i+1] && nuevo > vector_privado[i])
             {
                 for (int j = total_utilizados; j > i; j-- )
                 {
                    vector_privado[j+1] = vector_privado[j];
                 }
                 posicion = i+1;


             }

         }
         if (posicion != -1)
         {
          vector_privado[posicion] = nuevo;
          total_utilizados++;
         }
         else
            {
            vector_privado[total_utilizados] = nuevo;
            total_utilizados++;
            }




      }
   }
};

// FIXME: Función que recibe dos secuencias ordenadas y devuelve una nueva mezcla
SecuenciaOrdenada Mezclar(SecuenciaOrdenada s1, SecuenciaOrdenada s2)
{
    SecuenciaOrdenada s3;
    for (int i = 0; i<s1.TotalUtilizados(); i++)
    {
        s3.Aniade(s1.Elemento(i));
    }
    for (int i = 0; i<s2.TotalUtilizados(); i++)
    {
        s3.Aniade(s2.Elemento(i));
    }


    return s3;
}






int main(){
   SecuenciaOrdenada s1, s2;
   double dato;
   int n;

   // FIXME: Leer la secuencia 1
   cout << "\nIntroduzca la secuuencia 1: ";
   cin >> n;
   while(n>=0)
   {
   s1.Aniade(n);
   cin >> n;
   }

   // FIXME: Leer la secuencia 2

   cout << "\nIntroduzca la secuuencia 2: ";
   cin >> n;
   while(n>=0)
   {
   s2.Aniade(n);
   cin >> n;
   }

   SecuenciaOrdenada mezcla;
   mezcla= Mezclar(s1,s2);

     // FIXME: Escribir la secuencia mezcla
   cout << endl;
   for (int i = 0; i < mezcla.TotalUtilizados(); i++)
   {
      cout << mezcla.Elemento(i) << " ";
   }




}

