//Carlos Garcia Segura GIIADE
#include <iostream>
using namespace std;

int main(){

double v_inicial, v_final, variacion;


cout << "Introduzca el valor inicial\n";
cin >> v_inicial;


cout << "Introduzca el valor final\n";
cin >> v_final;

variacion = ((v_final-v_inicial)/v_inicial)*100;

cout << "La variacion porcentual es de un " << variacion << '%';
}
