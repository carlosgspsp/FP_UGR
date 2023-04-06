/**
  * @file Lanzamiento.cpp
  * @author Carlos Garcia Segura
  * @date Noviembre-2020
  */

#include <iostream>
#include <cmath>
using namespace std;

int main(){

const double PI = 3.14159265358979323846;
const double GT = 9.80665;

double v; //velocidad de lanzamiento en metro/segundo
double o; //angulo de elevacion en grados
double rotacion; //angulo de rotacion en grados
double r_elevacion, r_rotacion; //radianes
double t; //Tiempo de vuelo
double h; //altura
double d; //distancia
double x_inicial, x_final, x_objetivo; //Punto coordenada X
double y_inicial, y_final, y_objetivo; //Punto coordenada Y
double distancia1, distancia2, distancia_objetivo; //distancias de impacto


cout << "\nIntroduce la posicion del canon (x,y): \n";
cin >> x_inicial >> y_inicial;

cout << "Introduce el valor de la velocidad de lanzamiento (m/s): \n";
cin >> v;
if (v>0)
{

    cout << "\nIntroduce el angulo de elevacion en grados (0-90): \n";
    cin >> o;

    if(o>0 && o<90)
    {

        cout << "\nIntroduce el angulo de rotacion en grados (-180,180): \n";
        cin >> rotacion;

        if (rotacion < -180 || rotacion > 180)
        {
            while (rotacion < -180)
            {
                rotacion+=360;
            }

            while (rotacion > 180)
            {
                rotacion-=360;
            }

   cout << "\nEl angulo de rotacion equivalente dentro del rango (-180,180) es: " << rotacion << '\n';

        }

        //transformacion de grados a radianes
        r_elevacion = (o*PI)/180;
        r_rotacion = (rotacion*PI)/180;


        t = (2*v*sin(r_elevacion))/GT;
        h = pow((v*sin(r_elevacion)),2)/(2*GT);
        d = (pow(v,2)*sin(2*r_elevacion))/GT;
        x_final = x_inicial + d*sin(r_rotacion);
        y_final = y_inicial + d*cos(r_rotacion);

        cout << "\n\nRESULTADO DEL DISPARO\n\n";
        cout << "\nEl tiempo de vuelo ha sido " << t << " segundos";
        cout << "\nLa altura maxima han sido " << h << " metros";
        cout << "\nEl alcance ha sido de " << d << " metros";
        cout << "\nEl punto de impacto del proyectil ha sido (" << x_final << ',' << y_final << ')';

        cout << "\n\nCOMPROBACION DE OBJETIVO\n";
        cout << "\nIntroduzca la posicion objetivo:\n";
        cin >>  x_objetivo >> y_objetivo;
        cout << "\nIntroduzca las distancias de impacto\n";
        cin >> distancia1 >> distancia2;

        if ( distancia1 > 0 && distancia2 > 0)
        {
            if(distancia1 > distancia2)
                {
                    double aux = distancia1;
                    distancia1 = distancia2;
                    distancia2 = aux;
                }

            distancia_objetivo = sqrt(pow((x_final-x_objetivo),2)+ pow((y_final-y_objetivo),2));
            string impacto;


            if (distancia_objetivo < distancia1)
                impacto = " por lo que ha sido un impacto directo.\n";
            else if (distancia_objetivo < distancia2)
                impacto = " por lo que ha sido un impacto parcial.\n";
            else if (distancia_objetivo > distancia2)
                impacto = " por lo que no ha habido impacto.\n";

            cout << "\nLa distancia al objetivo ha sido: " << distancia_objetivo << impacto;

        }else

            cout << "\nLas distancias de impacto deben ser no negativas.\n";
    }else
        cout << "\nNo es posible realizar el lanzamiento (El valor del angulo de elevacion es incorrecto).\n";
}else
    cout << "\nLa velocidad de lanzamiento no es correcta (debe ser positiva).\n";

}
