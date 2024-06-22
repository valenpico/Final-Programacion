#include "function.h"
#include "personaje.h"
#include "cstring"
#include <cstdlib>
#include <iostream>
using namespace std;

void clearScreen()
{
    system("cls");
}

void wait()
{
    cout << "Presione enter para continuar...";
    cin.get();
    cin.ignore();
}

void ingresarJugador(Personaje jugadores[100], int n)
{
    string alias;
    int minutos;
    int muertes;
    int asesinatos;
    int edad;
    int cantArmas;
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el alias del jugador " << i + 1 << ": ";
        cin >> alias;
        jugadores[i].alias = alias;

        cout << "Ingrese los minutos jugados del jugador " << i + 1 << ": ";
        cin >> minutos;
        jugadores[i].minutos = minutos;

        cout << "Ingrese las muertes del jugador " << i + 1 << ": ";
        cin >> muertes;
        jugadores[i].muertes = muertes;

        cout << "Ingrese los asesinatos del jugador " << i + 1 << ": ";
        cin >> asesinatos;
        jugadores[i].asesinatos = asesinatos;

        cout << "Ingrese la edad del jugador " << i + 1 << ": ";
        cin >> edad;
        jugadores[i].edad = edad;

        cout << "Ingrese la cantidad de armas del jugador " << i + 1 << ": ";
        cin >> cantArmas;
        jugadores[i].cantArmas = cantArmas;
    }
}


int main()
{
    Personaje jugadores[100];
    int n;
    int opcion;

    do
    {
        clearScreen();
        cout << "----------MENU----------" << endl;
        cout << "1. Ingresar jugadores" << endl;
        cout << "2. Encontrar el jugador con mas asesinatos." << endl;
        cout << "3. Minutos de juego que tuvo el jugador que mas bajas le propinaron" << endl;
        cout << "4. Porcentaje de muertes de los jugadores que jugaron entre 100 y 200 minutos" << endl;
        cout << "5. Cantidad de asesinatos del jugador de mayor edad" << endl;
        cout << "6. Alias jugador con menos edad" << endl;
        cout << "7. Cantidad de muertes en promedio durante el juego" << endl;
        cout << "8. Edad del jugador con menos asesinatos" << endl;
        cout << "9. Salir" << endl;
        cin>>opcion;
        clearScreen();
        switch (opcion)
        {
        case 1:
            cout << "Ingrese la cantidad de jugadores: ";
            cin >> n;
            ingresarJugador(jugadores, n);
            break;
        case 2:
            cout << "El jugador con mas asesinatos es: " << findMaxKiller(jugadores, n) << endl;
            wait();
            break;
        case 3:
            cout << "El jugador que mas bajas recibio jugo: " << minutosJugadorMaxKills(jugadores, n) << " minutos" << endl;
            wait();
            break;
        case 4:
            cout << "El porcentaje de muertes de los jugadores que jugaron entre 100 y 200 minutos es: " << porcentajeMuertesJugadoresE100y200(jugadores, n) << "%" << endl;
            wait();
            break;        
        case 5:
            cout << "La cantidad de asesinatos del jugador de mayor edad es: " << cantKillsJugadorMayorEdad(jugadores, n) << endl;
            wait();
            break;    
        case 6:
            cout << "El alias del jugador con menos edad es: " << aliasJugadorMenorEdad(jugadores, n) << endl;
            wait();
            break;
        case 7:
            cout << "La cantidad de muertes en promedio durante el juego es: " << cantMuertesPromedioTotales(jugadores, n) << endl;
            wait();
            break;
        case 8:
            cout << "La edad del jugador con menos asesinatos es: " << edadJugadorMenosKills(jugadores, n) << endl;
            wait();
            break;
        case 9:
            cout << "Saliendo..." << endl;
            wait();
            break;        
        }

    } while (opcion != 9 && opcion > 0);
    
}