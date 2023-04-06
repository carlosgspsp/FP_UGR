//Carlos Garcia Segura GIIADE
#include <iostream>
using namespace std;

int main(){

int a, b, c;


cout << "Introduzca el numero de dia en el que estamos\n";
cout << "Lunes(0), Martes(1),Miercoles(2),Jueves(3),Viernes(4),Sabado(5),Domingo(6)\n";
cin >> a;

cout << "Introduzca el numero de dias que van a transcurrir\n";
cin >> b;

c= a+ b%7;
cout << "\n\nEstamos en el dia " << c << " por lo que ";
switch (c)
{
case 0:
  cout << "estamos a lunes ";
    break;
case 1:
  cout << "estamos a martes ";
    break;
case 2:
  cout << "estamos a miercoles ";
    break;
case 3:
  cout << "estamos a jueves ";
    break;
case 4:
   cout << "estamos a viernes ";
    break;
case 5:
   cout << "estamos a sabado ";
    break;
case 6:
   cout << "estamos a domingo ";
    break;

}

}
