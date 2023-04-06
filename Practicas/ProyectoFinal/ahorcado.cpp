/**
  * @file ahorcado.cpp
  * @brief Programa para jugar al ahorcado en consola
  *
  * @author Carlos Garcia Segura
  * @date Enero-2020
  *
  * El programa implementa una versi�n b�sica del juego del ahorcado como
  * ejercicio de uso de clases simples.
  *
  * El objetivo que se pretende es programar el juego en base a una clase "Ahorcado"
  * que resuelva las operaciones que se tienen que realizar. El programa principal
  * deber� declarar un objeto de esta clase y llamar a los distintos m�todos hasta
  * el final de la partida.
  *
  * Para hacerse una idea de qu� componentes formar�n parte de la clase:
  *
  * - Un objeto de esta clase, deber� tener informaci�n sobre:
  *    - La frase o palabra que hay que acertar.
  *    - La plantilla con el estado actual de la partida (la palabra con guiones).
  *    - El n�mero de intentos que quedan.
  *    - Las letras que ya se han dicho hasta el momento.
  *
  * - Para que la clase controle el proceso de la partida, deber� tener operaciones para:
  *    - Consultar el estado actual de la plantilla (la cadena de letras/guiones actual)
  *    - Consultar el n�mero de intentos que quedan.
  *    - Consultar la cadena de letras que ya se han usado.
  *    - Saber si la partida se ha terminado.
  *    - Saber si una letra se puede decir o no.
  *    - Saber si se ha ganado la partida.
  *    - Procesar una nueva letra seleccionada por el jugador, teniendo en cuenta que si
  *      se da en may�scula tambi�n debe funcionar. La funci�n devolver� si se ha procesado
  *      correctamente, es decir, si la letra ten�a sentido y no se hab�a usado antes. Por
  *      ejemplo, si le da un car�cter que no es una letra no se puede procesar.
  *
  * Para hacer el programa m�s interesante, el juego deber�a "inventarse" una palabra. Para
  * resolver esto, creamos una clase con la responsabilidad de seleccionar una palabra
  * aleatoria. El dise�o que se propone es crear una nueva clase "Bolsa" que nos hace de
  * generador aleatorio.
  *
  * Para hacerse una idea de qu� componenetes formar�n parte de la clase, tenga en cuenta
  * que deber� tener m�ltiples palabras y nos deber�a permitir "sacar palabras" en un orden
  * arbitrario. Para ello, puede considerar
  *     - Deber� contener un vector privado con las palabras que hay en la bolsa.
  *     - El constructor deber�a cargar ese vector privado con m�ltiples palabras en un
  *       orden aleatorio.
  *     - Deber�a tener un m�todo para seleccionar una nueva palabra.
  *
  * Ya que es una bolsa, podemos realizar el siguiente comportamiento:
  *     - Cuando se declara un objeto de la bolsa, se cargan las palabras y se barajan.
  *     - Se puede pedir la siguiente palabra, dando lugar a una secuencia de palabras que
  *       surgen con un orden aleatorio seg�n hayan quedado ordenadas al construir la bolsa.
  *     - Si se llegan a pedir todas las palabras, pedir la siguiente palabra implicar� volver
  *       a barajar la bolsa y comenzar con la primera de ellas.
  *
  * Para simplificar el problema sin entrar en soluciones que impliquen pedir palabras desde
  * cin, puede declarar un vector con un contenido predeterminado en el constructor y que nos
  * permite inicializar la bolsa. Si quiere, puede usar:
  *       "caballero",  "Dulcinea",   "historia",   "escudero",
  *       "rocinante",  "adelante",   "gobernador", "andantes",
  *       "voluntad",   "capitulo",   "menester",   "doncella",
  *       "caballeria", "castillo",   "Fernando",   "finalmente",
  *       "aventura",   "hermosura",  "palabras",   "gobierno",
  *       "intencion",  "cardenio",   "pensamientos", "Luscinda",
  *       "lagrimas",   "aposento",   "aventuras",  "quisiera",
  *       "libertad",   "desgracia",  "entendimiento", "pensamiento",
  *       "licencia",   "Mercedes",   "semejantes", "silencio",
  *       "valeroso",   "doncellas",  "labrador",   "caballerias",
  *       "cristiano",  "cristianos", "discreto",   "hicieron",
  *       "llegaron",   "quisiere",   "espaldas",   "muestras",
  *       "escuderos",  "discurso",   "grandeza",   "altisidora",
  *       "princesa",   "haciendo",   "renegado",   "provecho",
  *       "quedaron",   "resolucion", "presente",   "encantadores",
  *       "enamorado",  "valiente",   "encantado",  "molino",
  *       "licenciado", "necesidad",  "responder",  "discrecion",
  *       "ejercicio",  "hacienda",   "posadero",   "Rocinante",
  *       "presencia",  "historias",  "presentes",  "verdadero"
  *
  * Observe que una vez que tenga las dos clases, puede declarar una bolsa de palabras y despu�s
  * inicializar un objeto de la clase Ahorcado con una palabra aleatoria, ya que la palabra se pide
  * al objeto "Bolsa".
  *
  * Para programar el juego, puede definir la clase "Ahorcado" e inicializar el objeto con una palabra
  * fija y conocida (por ejemplo, en el constructor). Una vez que ya lo ha depurado y obtenido
  * una soluci�n que funciona, puede a�adir la clase bolsa y crear un programa que juega varias
  * partidas del ahorcado.
  *
  * En concreto, el programa pedir� cu�ntas palabras quiere adivinar y repetir� el juevo con un
  * bucle que permita al usuario jugar varias partidas. Note que declarar� una Bolsa al principio del
  * main y el bucle que repite las partidas pedir� a dicha bolsa una nueva palabra para cada nueva partida.
  *
  */
    #include <iostream>
    #include <string>
    #include <vector>
    #include <stdlib.h>

    using namespace std;


    class Ahorcado
    {
    private:
    string palabra, estado, usados;
    int intentos;

    public:

    Ahorcado(string palabra_aleatoria)
    {
      palabra = palabra_aleatoria;

      for (int i = 0; i < palabra.size(); i++)
      {
          palabra[i] = tolower(palabra[i]);
      }

      intentos = 10;
      usados = "";

      for (int i = 0; i < palabra.size(); i++)
      {
          estado.push_back('_');
      }

    }

    string GetEstado()  //devuelve el estado actual de la palabra a adivinar
    {
        return estado;
    }

    int GetIntentos() //devuelve el numero de intentos restantes
    {
        return intentos;
    }

    string GetUsados() //devuelve todas las letras utilizadas
    {
        return usados;
    }

    bool PartidaTerminada() // devuelve true si los intentos son menores o iguales a 0
    {
        if (intentos <= 0)
            return true;
        else
            return false;
    }

    bool LetraUsada(char letra) //Devuelve true si la letra que pasamos como parametro esta dentro de usados
    {
        if (usados.find(letra) == -1)
        return false;
        else
        return true;
    }

    bool HeGanado () //Devuelve true si estado no tiene ningun '_'
    {
        if (estado.find('_') == -1)
            return true;
        else
            return false;
    }

    void ProcesarLetra(char letra)
    {
      usados.push_back(letra);


      if (palabra.find(letra) == -1)
      {
        intentos--;
      }
      else
      {
        for(int i = 0; i < palabra.size(); i++)
        {
            if (palabra[i] == letra)
                estado[i]=letra;
        }


      }



    }

    };


     class Bolsa
    {
    private:
        vector<string> palabras;
        vector<int> usados;


    public:
        Bolsa()
        {
         palabras = {"caballero",  "Dulcinea",   "historia",   "escudero", "rocinante",  "adelante",   "gobernador", "andantes", "voluntad",   "capitulo",   "menester",   "doncella","caballeria", "castillo",   "Fernando",   "finalmente",
         "aventura",   "hermosura",  "palabras",   "gobierno", "intencion",  "cardenio",   "pensamientos", "Luscinda", "lagrimas",   "aposento",   "aventuras",  "quisiera", "libertad",   "desgracia",  "entendimiento", "pensamiento",
         "licencia",   "Mercedes",   "semejantes", "silencio", "valeroso",   "doncellas",  "labrador",   "caballerias", "cristiano",  "cristianos", "discreto",   "hicieron", "llegaron",   "quisiere",   "espaldas",   "muestras",
         "escuderos",  "discurso",   "grandeza",   "altisidora", "princesa",   "haciendo",   "renegado",   "provecho", "quedaron",   "resolucion", "presente",   "encantadores", "enamorado",  "valiente",   "encantado",  "molino",
        "licenciado", "necesidad",  "responder",  "discrecion", "ejercicio",  "hacienda",   "posadero",   "Rocinante", "presencia",  "historias",  "presentes",  "verdadero"};
        }


       string ObtenerPalabra()
       {
         string palabra;
         if (usados.size() == palabras.size())
         {
             usados.resize(0);
             usados.clear();
         }
         else
         {
              palabra = PalabraAleatoria();
                return palabra;

         }



       }
       string PalabraAleatoria()
       {
           int pos;

                pos = rand() % palabras.size();
               usados.push_back(pos);
               return palabras[pos];

       }






    };


  int main()
  {
    Bolsa bolsa;
    int n;
    string palabra;
    char letra;

    cout << "\nIntroduzca el numero de palabras que desea adivinar: ";
    cin >> n;
    bool terminado = false;

    for (int i = 0; i<n; i++)
    {
        cout << "\nNueva Partida\n";
        palabra = bolsa.ObtenerPalabra();
        Ahorcado partida(palabra);
        terminado = false;
        while (!terminado)
        {
            cout << "\nEl estado actual de la palabra es:\n";
            for (int i = 0; i < partida.GetEstado().size(); i++)
            {
                cout << " " << partida.GetEstado()[i];
            }

            cout << "\nTe quedan " << partida.GetIntentos() << " intentos.";
            cout << "\nHas usado las letras:  " << partida.GetUsados();
            cout << "\nIntroduce una letra: ";
            cin >> letra;
            letra = tolower(letra);
            if(partida.LetraUsada(letra))
                cout << "\nEsta letra ya ha sido utilizada\n";
            else if(letra >= 'a' && letra <= 'z'  )
                partida.ProcesarLetra(letra);
            else
                cout << "\nEl caracter introducido no es valido;";



            if (partida.HeGanado())
            {
            cout << "\nENHORABUENA, HAS GANAGO! La palabra era: " << palabra << endl;
            terminado = true;
            }
            else if (partida.PartidaTerminada())
            {
            cout << "\nNo te quedan mas intentos. Has Perdido :(  la palabra era: " << palabra << endl;
            terminado = true;
            }

        }








    }

  }
