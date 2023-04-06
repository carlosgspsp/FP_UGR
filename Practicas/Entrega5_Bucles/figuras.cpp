/**
  * @file figuras.cpp
  * @brief Programa para dibujar figuras en la consola
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que lea un n�mero entero N desde la entrada est�ndar
  * y que acontinuaci�n dibuje con asteriscos ?en la salida est�ndar? las
  * siguientes figuras:
  *    - Tri�ngulo de lado N
  *    - Cuadrado hueco de lado N
  *    - Rombo de altura y ancho N. S�lo se dibuja si N es un n�mero impar.
  * A continuaci�n vemos una muestra de estas figuras para N=7:
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
