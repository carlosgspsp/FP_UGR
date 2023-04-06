/**
  * @file menu_circunferencia.cpp
  * @brief Men� para calcular datos sobre una circunferencia (Ej. 3.2)
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Realice un programa que permita realizar algunos c�lculos sobre una circunferencia.
  * En concreto calcular� el �rea del c�rculo y el per�metro correspondiente. El programa
  * presentar� un men� de opciones al usuario como el siguiente:
  *    1. Cambiar el valor del radio
  *    2. Mostrar el valor del radio
  *    3. Calcular el �rea del c�rculo
  *    4. Calcular el per�metro de la circunferencia
  *    5. Finalizar el programa
  *
  * Al comienzo, el radio de la circunferencia se inicializar� a 1. La estructura del
  * programa consistir� en un bucle de tipo do?while cuyo cuerpo consistir� en presentar el
  * men�, leer una opci�n desde la entrada est�ndar y finalmente ejecutar y mostrar el
  * resultado de la acci�n seleccionada mediante una estructura de bifurcaci�n switch.
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
