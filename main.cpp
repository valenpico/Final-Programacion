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
    int n;
    cout << "ingrese la cantidad de jugadores en el torneo: " << endl;
    cin >> n;
    for(int i = 0; i<n; i++){
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
        
        cout<<"----------MENU----------"<<endl;
        cout<<"1. Encontrar el jugador con mas asesinatos."<<endl;
        cout<<"2. Minutos de juego que tuvo el jugador que mas bajas le propinaron"<<endl;
        cout<<"3. Porcentaje de muertes de los jugadores que jugaron entre 100 y 200 minutos"<<endl;
        cout<<"4. Cantidad de asesinatos del jugador de mayor edad"<<endl;
        cout<<"5. Alias jugador con menos edad"<<endl;
        cout<<"6. Cantidad de muertes en promedio durante el juego"<<endl;
        cout<<"7. Edad del jugador con menos asesinatos"<<endl; 
        cout<<"la mama de mati es mia"<<endl;
}