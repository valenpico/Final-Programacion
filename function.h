#ifndef FUNCTION
#define FUNCTION
using namespace std;
#include "string"
#include "personaje.h"
#include <vector>

string findMaxKiller(Personaje Jugadores[100], int n){
    int max = 0;
    string alias;
    for(int i = 0; i<n; i++){
        if(Jugadores[i].asesinatos > max){
            max = Jugadores[i].asesinatos;
            alias = Jugadores[i].alias;
        }
    }
    return alias;
}

int findMaxKills(Personaje Jugadores[100], int n){
    int max = 0;
    for(int i = 0; i<n; i++){
        if(Jugadores[i].asesinatos > max){
            max = Jugadores[i].asesinatos;
        }
    }
    return max;
}

int minutosJugadorMaxKills(Personaje jugadores[100], int n){
    int max=findMaxKills(jugadores,n);
    int minutos;
    for(int i = 0; i<n; i++){
        if(jugadores[i].asesinatos > max){
            max = jugadores[i].asesinatos;
            minutos = jugadores[i].minutos;
        }
    }
    return minutos;
}

float porcentajeMuertesJugadoresE100y200(Personaje jugadores[100], int n){
    int muertes = 0;
    for(int i = 0; i<n; i++){
        if(jugadores[i].minutos >= 100 && jugadores[i].minutos <= 200){
            muertes += jugadores[i].muertes;
        }
    }
    return muertes/100;
}

int cantKillsJugadorMayorEdad(Personaje jugadores[100], int n){
    int max = 0;
    int kills;
    for(int i = 0; i<n; i++){
        if(jugadores[i].edad > max){
            max = jugadores[i].edad;
            kills = jugadores[i].asesinatos;
        }
    }
    return kills;
}

string aliasJugadorMenorEdad(Personaje jugadores[100], int n){
    string alias;
    int edad = 100;
    for(int i = 0; i<n;i++){
        if(jugadores[i].edad < edad){
            edad = jugadores[i].edad;
            alias = jugadores[i].alias;
        }
    }
    return alias;
}

int cantMuertesPromedioTotales(Personaje jugadores[100], int n){
    int muertesTotales=0;
    for(int i = 0; i<n; i++){
        muertesTotales+=jugadores[i].muertes;
    }
    return muertesTotales/100;
}

int edadJugadorMenosKills(Personaje jugadores[100], int n){
    int edadMenosKills = jugadores[0].asesinatos;
    int indice = 0;
    for(int i = 0; i<n; i++){
        if(jugadores[i].asesinatos<edadMenosKills){
            edadMenosKills=jugadores[i].asesinatos;
            indice=i;
        }
    }
    return jugadores[indice].edad;
}



#endif