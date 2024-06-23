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
        while(!(cin >> minutos) || minutos < 0)
        {
            clearScreen();
            cin.clear();
            cin.ignore();
            cout << "Ingrese un numero valido: ";
        }
        jugadores[i].minutos = minutos;

        cout << "Ingrese las muertes del jugador " << i + 1 << ": ";
        while(!(cin >> muertes) || muertes < 0)
        {
            clearScreen();
            cin.clear();
            cin.ignore();
            cout << "Ingrese un numero valido: ";
        }
        jugadores[i].muertes = muertes;

        cout << "Ingrese los asesinatos del jugador " << i + 1 << ": ";
        while(!(cin >> asesinatos) || asesinatos < 0)
        {
            clearScreen();
            cin.clear();
            cin.ignore();
            cout << "Ingrese un numero valido: ";
        }
        jugadores[i].asesinatos = asesinatos;

        cout << "Ingrese la edad del jugador " << i + 1 << ": ";
        while(!(cin >> edad) || edad < 0)
        {
            clearScreen();
            cin.clear();
            cin.ignore();
            cout << "Ingrese un numero valido: ";
        }
        jugadores[i].edad = edad;

        cout << "Ingrese la cantidad de armas del jugador " << i + 1 << ": ";
        while(!(cin >> cantArmas) || cantArmas < 0)
        {
            clearScreen();
            cin.clear();
            cin.ignore();
            cout << "Ingrese un numero valido: ";
        }
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
        cout << "9. Promedio de bajas que tuvieron los jugadores entre 15 y 20 años" << endl;
        cout << "10. Alias del jugador con mas armas usadas" << endl;
        cout << "11. Promedio de bajas de los jugadores menores de 20 años" << endl;
        cout << "12. Promedio de bajas de jugadores entre 18 y 22 años" << endl;
        cout << "13. Acumulado de minutos de los jugadores con mas de 30 asesinatos" << endl;
        cout << "14. cantidad de jugadores que tuvieron mas bajas que asesinatos" << endl;
        cout << "15. Promedio de jugadores que tuvieron mas asesinatos que bajas" << endl;
        cout << "16. Alias del jugador que mas armas utilizo" << endl;
        cout << "17. Salir" << endl;
        cin>>opcion;
        clearScreen();
        switch (opcion)
        {
        case 1:
            cout << "Ingrese la cantidad de jugadores: ";
            while(!(cin >> n) || n < 0 || n > 100)
            {
                clearScreen();
                cin.clear();
                cin.ignore();
                cout << "Ingrese un numero valido: ";
                
            }
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
            cout << "El promedio de bajas que tuvieron los jugadores entre 15 y 20 años es: " << promedioBajasEntre15y20(jugadores, n) << endl;
            wait();
            break;
        case 10:
            cout << "El alias del jugador con mas armas usadas es: " << aliasMasArmasUsadas(jugadores, n) << endl;
            wait();
            break;
        case 11:
            cout << "El promedio de bajas de los jugadores menores de 20 años es: " << promedioBajasMenoresDe20(jugadores, n) << endl;
            wait();
            break;
        case 12:
            cout << "El promedio de bajas de jugadores entre 18 y 22 años es: " << porcentajeBajasEntre18y22(jugadores, n) << endl;
            wait();
            break;
        case 13:
            cout << "El acumulado de minutos de los jugadores con mas de 30 asesinatos es: " << acumuladoMinutosMasDe30Asesinatos(jugadores, n) << endl;
            wait();
            break;
        case 14:
            cout << "La cantidad de jugadores que tuvieron mas bajas que asesinatos es: " << jugadoresMasBajasQueAsesinatos(jugadores, n) << endl;
            wait();
            break;
        case 15:
            cout << "El porcentaje de jugadores que tuvieron mas asesinatos que bajas es: " << porcentajeMasAsesinatosQueBajas(jugadores, n) << endl;
            wait();
            break;
        case 16:
            cout << "El alias del jugador que mas armas utilizo es: " << aliasMenosArmasUsadas(jugadores, n) << endl;
            wait();
            break;
        case 17:
            cout << "Saliendo..." << endl;
            wait();
            break;        
        }

    } while (opcion != 17 && opcion > 0);
    
}