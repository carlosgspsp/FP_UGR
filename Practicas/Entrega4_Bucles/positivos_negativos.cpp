/**
  * @file positivos_negativos.cpp
  * @brief Cuenta los n�meros positivos y negativos (lectura anticipada y centinela)
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Se desea implementar un programa que cuente la cantidad de datos que son positivos y
  * negativos en una secuencia de valores enteros. Implemente un programa que lea datos hasta
  * que se lea el valor cero. Como resultado, indicar� en la salida est�ndar cu�ntos han sido
  * positivos y cu�ntos negativos.
  *
  */

 #include <iostream>
 using namespace std;

 int main(){

    int num, pos = 0, neg = 0;


       do
        {
        cout << "\nIntroduzca un numero positivo, negativo o el numero terminador '0':\n";
        cin >> num;

        if (num < 0)
        {
            neg++;

        }else if (num > 0)
        {
            pos++;
        }

        }while (num != 0);


    cout << "\nHan habido " << pos << " numeros positivos y " << neg << " numeros negativos en total";

 }
