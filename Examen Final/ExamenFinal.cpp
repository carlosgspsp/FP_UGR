/*

   Carlos Garcia Segura
   DNI 45901676R

  */

    using namespace std;


class SecuenciaCaracteres{
private:
...

public:



SecuanciaCaracteres Subsecuencia(int inicio, final)
{

SecuanciaCaracteres aux;


if (inicio < final)
{
    int intercambia = inicio;
    inicio = final;
    final = intercambia;
}

if ( inicio < total_utilizados && final < total_utilizados)
{
    for (int i = inicio; i <= final: i++)
    aux.Aniade(vector_privado[i]);

}

return aux;

}


bool EsEcualitaria() //Deuvuelve true si es ecualitario
{

    bool par, ecualitario = false;
    int a[26];                      //Vector de frecuencias para la primera subcadena
    int b[26];                      //Vector de frecuencias para la segunda subcadena
    SecuanciaCaracteres aux, aux2;

    for (int i = 0; i<26; i++)      //Inicializa los vectores de frecuencias a 0
    {
        a[i] = 0;
        b[i] = 0;

    }


    if (total_utilizados%2 == 0)        //Compruebo si la longitud de la secuencia es par o impar
        par = true;
    else
        par = false;

    if (par)                            //Al ser par no tengo que preocuparme por el caracter intermedio
    {
        aux = Subsecuencia(0, (total_utilizados/2)-1);          //Subseciancia entre el primer valor de la secuencia y el valor ultimo valor de la primera mitad
        for (int i = 0; i < aux.TotalUtilizados(); i++)
        {
            a[aux.Elemento(i)-97]++; //La posicion 97 en ASCII corresponde al caracter 'a' que es nuestra posicion 0 en el vector de frecuencias por lo que al restar 97 a los caracteres tendremos su posicion en el vector de frecuencias.
        }


        aux = Subsecuencia(total_utilizados/2, total_utilizados-1) //Subseciancia entre el primer valor de la segundo mitad y el valor final de la secuencia
        for (int i = 0; i < aux.TotalUtilizados(); i++)
        {
            b[aux.Elemento(i)-97]++; //ASCII
        }
    }
    else                                //Al ser impar no tengo que contar el caracter intermedio
    {
        aux = Subsecuencia(0, (total_utilizados/2)-1);      //Subseciancia entre el primer valor y el valor intermedio sin incluir este ultimo
        for (int i = 0; i < aux.TotalUtilizados(); i++)
        {
            a[aux.Elemento(i)-97]++; //ASCII
        }


        aux = Subsecuencia((total_utilizados/2)+1, total_utilizados-1);         //Subseciancia entre el valor intermidio y el valor final de la secuencia sin incluir el valor intermedio
        for (int i = 0; i < aux.TotalUtilizados(); i++)
        {
            b[aux.Elemento(i)-97]++; //ASCII
        }
    }

    for (int = 0; i<26; i++)
    {
        if(a[i] != b[i])
        {
            ecualitario = false;  //Mientras los vectores de frecuencias coincidan ecualitario sera true.

        }

    }

    return ecualitario;

   /*Lo que hago en este metodo para comprobar si son ecualitarios es:
    Primero comprobar si el tamaño de la cadena es par o no para saber si debo contar el caracter central o no. Para esto hago el modulo 2 del total utilizados
    y si este da 0 es par, si no impar.
    Teniendo esto en cuenta separo la cadena en 2 subcadenas teniendo o no en cuenta el caracter centrar. Al principio creo dos vectores de frecuencia "a" y "b"
    que los uso ahora para ver cuantas veces se repite cada letra en cada subcadena. para rellenar los vectores de frecuencia tengo en cuenta su posicion en ASCCI
    que para la 'a' es 97, asi que restandole 97 a todas las letras deberia de dar si posicion en el vector entre (0, 25).
    Una vez hecho esto compruebo que los dos vectores de frecuencia son iguales y si lo son es que es ecualitario. */

    /*Ambos metodos pueden ser publicos perfectamente, ya que son metodos de consulta y pueden ser utiles para otras operaciones fuera de la clase*/
    /*El metodo Subsecuencia devolvera una SecuenciaCaracteres ya que es lo que pide el ejercicio y el metodo Esecualitaria devolvera un booleano ya que estamos haciendo una comprobacion sobre
    los datos del propio objeto.*/

    /*
    Para mi nombre carlosgarciasegura que tiene 18 letras primero comprobaria que efectivamente es par. Dividiria la cadena en las dos subcadenas "carlosgar" , "ciasegura".
    Rellenaria los 2 vectores de frecuencias (por ejemplo, c seria 99 en ASCII, al restarle 97 seria la posicion 2 de nuestros vectores de frecuencias a los que se les sumaria 1 por cada coincidencia)
    y al comprobar que los dos vectores de frecuencias a y b no son iguales el metodo pondia el booleano ecualitario a false y al final devolveria este booleano.
    */


}

};





class Tablero{
private:
...

public:


SecuenciaCaracteres Secuencia() //Devuelve una secuencia de enteros compuesta por las sumas de las filas, columnas, y la diagonal
{

SecuenciaEnteros sec;

int suma = 0;

    for (int i = 0; i < dimension; i++)
    {
        suma = 0;
        for (int j = 0; j < dimension; j++)   //Calculamos las sumas de las filas
        {
         suma+= vp[i][j];

        }
        sec.Aniade(suma);
    }


     suma = 0;
     for (int i = 0; i < dimension; i++)        //Calculamos la suma de la diagonal principal
    {
         suma+= vp[i][i];
    }
    sec.Aniade(suma);

     suma = 0;


     for (int i = 0; i < dimension; i++)        //Calculamos la suma de la diagonal inversa
    {
        int j = dimension-1;
         suma+= vp[i][j];
         j--;
    }
    sec.Aniade(suma);



    for (int i = 0; i < dimension; i++)         //Calculamos las sumas de las columnas
    {
        suma = 0;
        for (int j = 0; j < dimension; j++)
        {
         suma+= vp[j][i];

        }
        sec.Aniade(suma);
    }


    return sec;

}

bool Polifacetico()
{

    SecuenciaEnteros sec = Secuencia();
    bool poli = true;


    for (int i = 0; i < sec.TotalUtilizados())
    {
        for (int j = 0; i < sec.TotalUtilizados())
        {
            if (sec.Elemento(i) == sec.Elemento(j) &&  i != j) //Comprobamos si algun elemento de la secuencia calculada con el metodo Secuencia se repite
            {
                poli = false;                                   //Mientras no se repita ningun elemento poli se mantendrá en true
            }

        }
    }

    return poli;

}


bool SuperPolifacetico()
{
    bool superpoli = true;

if (Polifacetico())
{
    SecuenciaEnteros sec = Secuencia();
    sec.OrdenaCreciente();

    for (int i = 0; i < sec.TotalUtilizados()-1; i++)
    {
        if (sec.Elemento(i)+1 != sec.Elemento(i+1))         //Al estar ordenada la secuencia en orden creciente siempre se debe de cumplir que el Elemento(i)+1 = Elemento(i+1) para que sea polifacetica
            superpoli = false;                              //Mientras se cumpla la condicion descrita en la anterior linea superpoli se mantendra en true.
    }


    return superpoli;

}

else return false;

}


/*
Ambos metodos devuelven un booleano ya que tienen que hacer una comprobacion, no tienen que devolver ningun otro tipo de dato.
Ademas pueden ser publicos ya que al ser una consulta puede servir para otro tipo de operaciones externas.
*/

/*
El metodo de SuperPolifacetico lo primero que hace es comprobar si la tabla es polifacetica ya que si esta no lo es tampoco
sera Superpolifacetica (al repetirse al menos 2 valores no se puede cumplir la condicion necesaria). Si es polifacetica
entonces llama al metodo que he creado llamado Secuencia que nos da una SecuenciaEnteros compuesta por las sumas de todas
las filas, las columnas y las diagonales.
Una vez hecho esto llamamos al metodo ya implementado en SecuenciaEnteros OrdenaCreciente que nos ordena la secuencia en orden
creciente.
A partir de aqui solo tenemos que comprobar mediante el uso de un bucle for que el valor de la posicion i mas 1 es igual al valor de la posicion siguiente (i+1).
Si en algun momento esto no se cumple esto quiere decir que no es SuperPolifacetica por lo que el booleano superpoli se pone a false.
Al final se devuelve el booleano superpoli.
*/

/*
    4   5   9   18
    0   1   6   7
    7   6   2   15

17  11  12  17  7

Lo primero que haria aqui nuestro metodo es comprobar si es polifacetico. Para ello primero hace los calculos que tenemos arriba y los mete en una SecuenciaEnteros
tal que asi: " 18 7 15 7 17 11 12 17 " Al ver que el 7 se repite poner la variable poli a false y la devuelve.
Al no ser polifacetico el metodo SuperPolifacetico entra en el else haciendo un return false. Esto se debe a que si la tabla no es polifacetica tampoco será superpolifacetica.
Vamos a comprobar esto. Primero vamos a ordenar los valores de la secuencia " 7 7 11 12 15 17 17 18 ". Para que fuera superpolifacetica despues del 7 si o si tendria que haber un 8.
Si se repitiera cualquier otro numero. El la secuencia primero estaria este numero y en la siguiente posicion deberia de estar su siguiente, pero siempre vuelve a estar el mismo numero repetido.


*/

};

