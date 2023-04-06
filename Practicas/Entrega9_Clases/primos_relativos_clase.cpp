/**
  * @file primos_relativos_clase.cpp
  * @brief Determinar si dos números son primos relativos
  *
  * @author Carlos Garcia Segura
  * @date Enero-2020
  *
  * Escriba un programa que lea dos números enteros positivos y escriba en la
  * salida estándar la descomposición en primos y si son primos relativos.
  *
  * Recuerde que dos números son primos relativos si no tienen ningún divisor
  * común. Si disponemos de las dos secuencias que corresponden a la descomposición
  * en números primos de ambos números, son primos relativos si no tienen ningún
  * primo en común.
  *
  * El programa consiste fundamentalmente en crear una clase diseñada para obtener
  * la descomposición en primos de un entero. Es una clase que permite almacenar
  * una secuencia de primos obtenidos a partir de un entero a descomponer.
  *
  * Un ejemplo de su ejecución es el siguiente:
  *
  *    Introduzca dos números para ver si son primos relativos: 10 20
  *    10: 2 5
  *    20: 2 2 5
  *   Los números 10 y 20 no son primos relativos
  *
  * Note que la entrada de datos consiste en los dos números 10 y 20 y el programa
  * ha obtenido como resultado las tres últimas líneas: las descomposiciones y si son
  * primos relativos.
  *
  * Otro ejemplo en el que se obtiene un resultado de primos relativos es el siguiente:
  *    Introduzca dos números para ver si son primos relativos: 65536 1334025
  *    65536: 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2
  *    1334025: 3 3 5 5 7 7 11 11
  *    Los números 65536 y 1334025 son primos relativos
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones ya resueltas de la clase.
  * Añada lo que considere oportuno y complete la función main para que resuelva
  * el problema indicado.
  *
  */

#include <iostream>
using namespace std;


class FactoresPrimos{
private:
   static const int TAMANIO = 30;
   int vector_privado[TAMANIO]; // Factores primos, ordenados
   int total_utilizados;


   void Aniade(int nuevo){
      // FIXME: Completar añadiendo el elemento al final del vector
        vector_privado[total_utilizados] = nuevo;
        total_utilizados++;

   }


public:

   FactoresPrimos()
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

   int Elemento(int indice) {
      return vector_privado[indice];
   }

   // FIXME: Añadir función para cargar la secuencia a partir de un número
    void Factorizar(int n)
    {
        for (int i  = 2; n>1; i++)
        {
            while(n%i == 0)
            {
                n = n/i;
                Aniade(i);
            }
        }

    }

   // FIXME: Añadir una función que recibe una descomposición y dice si son primos relativos
   bool Primos_Relativos(FactoresPrimos f2)
{
    bool relativos = true;
    for (int i = 0; i < TotalUtilizados(); i++)
    {
        for (int j = 0; (j < f2.TotalUtilizados() && relativos); j++)
        {
            if(Elemento(i)== f2.Elemento(j))
                relativos = false;
        }
    }

    return relativos;
}

};

int main()
{
   int numero1, numero2; // Números para comprobar si son primos
    FactoresPrimos f1, f2;
    bool relativos;
   cout <<"Introduzca dos números para ver si son primos relativos: ";
   cin >> numero1 >> numero2;

   if (numero1>1 && numero2>1) {
      // FIXME: Usar la clase para obtener dos descomposiciones
        f1.Factorizar(numero1);
        f2.Factorizar(numero2);



      // FIXME: Imprimir descomposiciones de números

      cout << "\nDescomposicion del numero " << numero1 << endl;
        for (int i = 0; i < f1.TotalUtilizados(); i++)
        {
            cout << f1.Elemento(i) << " ";
        }
      cout << "\nDescomposicion del numero " << numero2 << endl;
        for (int i = 0; i < f2.TotalUtilizados(); i++)
        {
            cout << f2.Elemento(i) << " ";
        }


      // FIXME: Usar la función miembro para indicar si son primos relativos
      relativos = f1.Primos_Relativos(f2);
       if (relativos)
        cout << "\nLos numeros " << numero1 << " y " << numero2 << " son primos relativos.\n";
      else
        cout << "\nLos numeros " << numero1 << " y " << numero2 << " no son primos relativos.\n";




   }
   else {
      cout << "Los números deben ser mayores que 1" << endl;
   }
}

