/**
  * @file menu_calculadora.cpp
  * @brief Menú para realizar operaciones básicas de calculadora
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  *
  * Escriba un programa que lea dos valores reales y que presente un menú con siete
  * alternativas:
  *    1. Suma
  *    2. Resta
  *    3. Producto
  *    4. División
  *    5. Modificar primer operando
  *    6. Modificar segundo operando
  *    7. finalizar el programa
  *
  * El programa deberá pedir al usuario que seleccione una de las opciones y presentar en la
  * salida estándar el resultado de la operación correspondiente.
  *
  * Tenga en cuenta que el usuario puede responder a la selección también con cualquiera de los * cuatro operadores + - * / para seleccionar alguna de las 4 opciones.
  *
  * Para ello, tenga en cuenta que el valor inicial de los operandos es cero, y que la solución
  * debe contener un bucle do-while junto con una instrucción switch para gestionar el menú.
  *
  */
 #include <iostream>
 using namespace std;

 int main(){
    char opcion;
    double a , b, c;

    cout << "\nIntroduzca 2 valores reales sobre los que quiere realizar la operacion\n";
    cin >> a >> b;

   do{
    do{
    cout << "\nIntroduzca el valor de la operacion que desea realizar:\n 1. Suma\n 2. Resta\n 3. Producto\n 4. Division\n 5. Modificar Primer Operando\n 6. Modificar Segundo Operando\n 7. Finalizar el programa\n\n";
    cin >> opcion;
    }while((opcion > '7' || opcion < '1') && (opcion != '+' && opcion != '-' && opcion != '*' && opcion != '/'));

   switch(opcion)
   {
   case '+':
   case '1':
       c = a+b;
       cout << "\nEl resultado de la suma es: " << c << endl;;
    break;

   case '-':
   case '2':
    c = a-b;
    cout << "\nEl resultado de la resta es: " << c << endl;
    break;

   case '*':
   case '3':
    c = a*b;
    cout << "\nEl resultado de la multiplicacion es: " << c << endl;
    break;

   case '/':
   case '4':
    c = a/b;
    cout << "\nEl resultado de la division es: " << c << endl;
    break;

   case '5':
    cout << "\nIntroduzca el nuevo Primer Operando:\n";
    cin >> a;
    break;

   case '6':
    cout << "\nIntroduzca el nuevo Segundo Operando:\n";
    cin >> b;
    break;

   case '7':
    cout << "\nUsted ha elegido finalizar el programa.\n";
    break;
   }

   }while(opcion != '7');
 }
