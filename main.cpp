#include "function.h"
#include "personaje.h"
#include "cstring"
#include <iostream>
using namespace std;
int main(){
    Personaje jugadores[100];
    string alias;
    int minutos;
    int muertes;
    int asesinatos;
    int edad;
    int cantArmas;
    int cantJugadores;
    cout << "ingrese la cantidad de jugadores en el torneo: " << endl;
    cin >> cantJugadores;
    for(int i = 0; i<cantJugadores; i++){
        cout<<"ingrese el alias del jugador "<<i+1<<": ";
        cin >> alias;
        jugadores[i].alias = alias;

        cout << "Ingrese los minutos jugados del jugador " << i+1 << ": ";
        cin >> minutos;
        jugadores[i].minutos = minutos;

        cout << "Ingrese las muertes del jugador " << i+1 << ": ";
        cin >> muertes;
        jugadores[i].muertes = muertes;

        cout << "Ingrese los asesinatos del jugador " << i+1 << ": ";
        cin >> asesinatos;
        jugadores[i].asesinatos = asesinatos;

        cout << "Ingrese la edad del jugador " << i+1 << ": ";
        cin >> edad;
        jugadores[i].edad = edad;

        cout << "Ingrese la cantidad de armas del jugador " << i+1 << ": ";
        cin >> cantArmas;
        jugadores[i].cantArmas = cantArmas;
    } 
}