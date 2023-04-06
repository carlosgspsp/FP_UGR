//Carlos Garcia Segura GIIADE
#include <iostream>
using namespace std;

int main(){

int a,s,m,h,d;


cout << "Introduzca un numero entero de segundos\n";
cin >> a;


m = a/60;
s= a%60;

h=m/60;
m=m%60;

d=h/24;
h=h%24;

cout << "Hay " << d << " dias, " << h << " horas, " << m << " minutos y " << s << " segundos\n";


}
