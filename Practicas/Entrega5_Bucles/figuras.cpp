/**
  * @file figuras.cpp
  * @brief Programa para dibujar figuras en la consola
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que lea un número entero N desde la entrada estándar
  * y que acontinuación dibuje con asteriscos ?en la salida estándar? las
  * siguientes figuras:
  *    - Triángulo de lado N
  *    - Cuadrado hueco de lado N
  *    - Rombo de altura y ancho N. Sólo se dibuja si N es un número impar.
  * A continuación vemos una muestra de estas figuras para N=7:
  *      *            *******         *
  *      **           *     *        ***
  *      ***          *     *       *****
  *      ****         *     *      *******
  *      *****        *     *       *****
  *      ******       *     *        ***
  *      *******      *******         *
  */

 #include <iostream>
 using namespace std;

 int main(){

    int n;
//Triangulo
    do{
    cout << "\nIntroduzca un numero entero positivo\n";
    cin >> n;
    }while(n<=0);


    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << "\n\n";


//Cuadrado

    for (int i = 0; i<n; i++)
    {
        cout << '*';
    }

    cout << endl;

    for (int i = 0; i<n-2; i++)
    {
        cout << '*';
        for (int j = 0; j<n-2; j++)
        {
           cout << " ";
        }
        cout << '*' << endl;
    }

    for (int i = 0; i<n; i++)
    {
        cout << '*';
    }

cout << "\n\n";


//Rombo

if(n%2 == 1)
{
  for(int i = 1; i<=(n/2)+1 ;i++)
  {
      for (int j = 0; j<n-i; j++)
      {
        cout << ' ';
      }
      for (int j  = 1; j<i*2; j++)
      {
        cout << '*';
      }

      cout << endl;
  }

 for(int i =(n/2); i>0 ;i--)
  {
      for (int j = 0; j<(n-i); j++)
      {
        cout << ' ';
      }
      for (int j = 1; j<i*2; j++)
      {
        cout << '*';
      }


      cout << endl;
  }

}

 }
