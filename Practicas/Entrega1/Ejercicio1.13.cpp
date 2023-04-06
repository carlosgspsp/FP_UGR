//Carlos Garcia Segura GIIADE
#include <iostream>
using namespace std;

int main(){

int a,b,c,d;


cout << "Introduzca un numero entero de 3 digitos\n";
cin >> a;



b = a/100;
cout << b << '\n';

c= a/10 -b*10;
cout << c << '\n';

d= a-(b*100 +c*10);
cout << d << '\n';


}
