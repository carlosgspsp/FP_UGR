/**
  * @file cambio.cpp
  * @brief Tabla de cambio entre dólar y euros
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Escriba un programa que muestre una tabla de conversión entre dólares y
  * euros. Para ello, el programa pedirá desde la entrada estándar el cambio
  * de moneda en curso ?cuántos euros vale un dólar? y el número de dólares
  * para los que se desea tener la conversión. Utilice un bucle de tipo for
  * para resolver el problema.
  *
  * Una posible ejecución sería la siguiente:
  *
  *      ¿Cuántos euros vale un dólar? 0.733
  *      ¿Límite de cambio? 12
  *      Tabla de cambio:
  *      1 $ = 0.733 e
  *      2 $ = 1.466 e
  *      3 $ = 2.199 e
  *      4 $ = 2.932 e
  *      5 $ = 3.665 e
  *      6 $ = 4.398 e
  *      7 $ = 5.131 e
  *      8 $ = 5.864 e
  *      9 $ = 6.597 e
  *      10 $ = 7.33 e
  *      11 $ = 8.063 e
  *      12 $ = 8.796 e
  */

 #include <iostream>
 using namespace std;

 int main(){

    double cambio;
    int limite;

    cout << "\nCuantos euros vale un dolar?:\n";
    cin >> cambio;
    cout << "Introduzca el limite de cambio:\n";
    cin >> limite;

    for (int i = 1; i<=limite; i++)
    {
        cout << endl << i << "$ = " << i*cambio << " euros\n";
    }

 }
