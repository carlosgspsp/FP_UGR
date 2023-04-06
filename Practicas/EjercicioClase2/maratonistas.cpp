/**
  * @file maratonistas.cpp
  * @brief Procesa tiempos de llegada y determina el ganador
  *
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  *
  * Suponga una serie de datos correspondientes al resultado de una maratón. Los datos
  * consisten en varios valores por maratonista:
  *
  *    - Número de dorsal. Los dorsales de corredores son número positivos.
  *    - Tiempo obtenido. El tiempo que ha necesitado para acabar la maratón. Está compuesto
  *      de dos valores: horas y minutos.
  *
  * Escriba un programa que lea los resultados de una carrera e indique quién es el ganador.
  * El formato de entrada de valores será un valor de dorsal más el tiempo que ha necesitado
  * para terminar. El tiempo se especifica con un formato horas:minutos (vea el ejemplo más
  * abajo).
  *
  * Una ejemplo de ejecución es el siguiente:
  *      Introduzca los dorsales y tiempos correspondientes. Termine con el dorsal 0:
  *      5 1:37
  *      2 0:59
  *      9 1:04
  *      0
  *      Número de participantes: 3
  *      Primera posición corresponde al dorsal 2 con un tiempo de 0:59
  *
  * donde puede ver que los datos terminan cuando se introduce un dorsal de número 0.
  * El resultado del programa corresponde a las dos últimas líneas, donde aparece el número
  * de participantes seguido por el dorsal ganador y el tiempo correspondiente.
  *
  * Debe tener en cuenta que también puede haber cero participantes; en este caso, el
  * programa responde como sigue:
  *
  *      Introduzca los dorsales y tiempos correspondientes. Termine con el dorsal 0:
  *      0
  *      Número de participantes: 0
  *      No hay ganador
  *
  */

 #include <iostream>
 using namespace std;

 int main(){

    int dorsal, dorsal_aux = 0;
    double tiempo_h, tiempo_m, tiempo_h_aux = 0, tiempo_m_aux = 0;
    char caracter;
    int contador = 0;
    bool primero = true;


    while(dorsal != 0 || primero){

            cout << "\nIntroduzca los dorsales y tiempos correspondientes. Termine con el dorsal 0:\n";
            cin >> dorsal;
            if(dorsal != 0)
                cin >> tiempo_h >> caracter >> tiempo_m;

            if(dorsal < 0)
            {
                cout << "\nEl numero del dorsal debe ser mayor o igual a 0\n";
            }
            else if (dorsal !=0)
            {
                contador++;

                if (primero)
                {
                    tiempo_h_aux = tiempo_h;
                    tiempo_m_aux = tiempo_m;
                    dorsal_aux = dorsal;
                    primero = false;
                }
                else if((tiempo_h*60 + tiempo_m ) <= (tiempo_h_aux*60 + tiempo_m_aux))
                {
                    tiempo_h_aux = tiempo_h;
                    tiempo_m_aux = tiempo_m;
                    dorsal_aux = dorsal;
                }

            }

    }

    cout << "\nNumero de Participantes: " << contador << endl;
    cout << "\nPrimera posicion corresponde al dorsal " << dorsal_aux << " con un tiempo de " << tiempo_h_aux << caracter << tiempo_m_aux;
    return(0);

 }
