/**
  * @file parabola.cpp
  * @author Carlos Garcia Segura
  * @date Octubre-2020
  */

#include <iostream>
#include <cmath>
using namespace std;

int main(){

const double PI = 3.14159265358979323846;
const double GT = 9.80665;

double v, o, r, t, y, x;

cout << "Introduce el valor de la velocidad de lanzamiento (m/s): \n";
cin >> v;
cout << "\nIntroduce el angulo de elevacion en grados (0-90): \n";
cin >> o;

//transformacion de grados a radianes
r = (o*PI)/180;

t = (2*v*sin(r))/GT;
y = pow((v*sin(r)),2)/(2*GT);
x = (pow(v,2)*sin(2*r))/GT;


cout << "\nEl tiempo de vuelo ha sido " << t << " segundos";
cout << "\nLa altura maxima han sido " << y << " metros";
cout << "\nEl alcance ha sido de " << x << " metros";

}
