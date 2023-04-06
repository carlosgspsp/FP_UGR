/**
  * @file menu_circunferencia.cpp
  * @brief Menú para calcular datos sobre una circunferencia (Ej. 3.2)
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Realice un programa que permita realizar algunos cálculos sobre una circunferencia.
  * En concreto calculará el área del círculo y el perímetro correspondiente. El programa
  * presentará un menú de opciones al usuario como el siguiente:
  *    1. Cambiar el valor del radio
  *    2. Mostrar el valor del radio
  *    3. Calcular el área del círculo
  *    4. Calcular el perímetro de la circunferencia
  *    5. Finalizar el programa
  *
  * Al comienzo, el radio de la circunferencia se inicializará a 1. La estructura del
  * programa consistirá en un bucle de tipo do?while cuyo cuerpo consistirá en presentar el
  * menú, leer una opción desde la entrada estándar y finalmente ejecutar y mostrar el
  * resultado de la acción seleccionada mediante una estructura de bifurcación switch.
  *
  */


 #include <cmath>
 #include <iostream>
 using namespace std;

 int main(){
    int opcion;
    double r = 1, c;



   do{
    do{
    cout << "\nIntroduzca el valor de la operacion que desea realizar:\n 1. Cambiar el valor del radio\n 2. Mostrar el valor del radio\n 3. Calcular el area del circulo\n 4. Calcular el perimetro de la circunferencia\n 5. Finalizar el programa\n\n";
    cin >> opcion;
    }while (opcion > 5 || opcion < 1);

   switch(opcion)
   {

   case 1:
       cout << "\nIntroduzca el nuevo valor del radio:\n";
       cin >> r;
    break;

   case 2:
       cout << "\nEl valor del radio es: " << r << endl;
    break;

   case 3:
    c = M_PI*pow(r,2);
    cout << "\nEl area del circulo con radio " << r << " es " << c << endl;
    break;

   case 4:
    c = 2*M_PI*r;
    cout << "\nEl perimetro del circulo con radio " << r << " es " << c << endl;
    break;

   case 5:
     cout << "\nUsted ha elegido finalizar el programa.\n";
    break;

   }

   }while(opcion != '7');
 }
