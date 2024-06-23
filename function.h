#ifndef FUNCTION
#define FUNCTION
#include <string>
#include "personaje.h"
#include <vector>
using namespace std;

string findMaxKiller(Personaje Jugadores[100], int n)
{
    int max = 0;
    string alias;
    for (int i = 0; i < n; i++)
    {
        if (Jugadores[i].asesinatos > max)
        {
            max = Jugadores[i].asesinatos;
            alias = Jugadores[i].alias;
        }
    }
    return alias;
}

int findMaxKills(Personaje Jugadores[100], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Jugadores[i].asesinatos > max)
        {
            max = Jugadores[i].asesinatos;
        }
    }
    return max;
}

int minutosJugadorMaxKills(Personaje jugadores[100], int n)
{
    int max = findMaxKills(jugadores, n);
    int minutos;
    for (int i = 0; i < n; i++)
    {
        if (jugadores[i].asesinatos > max)
        {
            max = jugadores[i].asesinatos;
            minutos = jugadores[i].minutos;
        }
    }
    return minutos;
}

float porcentajeMuertesJugadoresE100y200(Personaje jugadores[100], int n)
{
    float muertes = 0;
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (jugadores[i].minutos >= 100 && jugadores[i].minutos <= 200)
        {
            muertes += jugadores[i].muertes;
            contador++;
        }
    }
    return (muertes * 100) / contador;
}

int cantKillsJugadorMayorEdad(Personaje jugadores[100], int n)
{
    int max = 0;
    int kills;
    for (int i = 0; i < n; i++)
    {
        if (jugadores[i].edad > max)
        {
            max = jugadores[i].edad;
            kills = jugadores[i].asesinatos;
        }
    }
    return kills;
}

string aliasJugadorMenorEdad(Personaje jugadores[100], int n)
{
    string alias;
    int edad = 100;
    for (int i = 0; i < n; i++)
    {
        if (jugadores[i].edad < edad)
        {
            edad = jugadores[i].edad;
            alias = jugadores[i].alias;
        }
    }
    return alias;
}

int cantMuertesPromedioTotales(Personaje jugadores[100], int n)
{
    int muertesTotales = 0;
    for (int i = 0; i < n; i++)
    {
        muertesTotales += jugadores[i].muertes;
    }
    return muertesTotales / 100;
}

int edadJugadorMenosKills(Personaje jugadores[100], int n)
{
    int edadMenosKills = jugadores[0].asesinatos;
    int indice = 0;
    for (int i = 0; i < n; i++)
    {
        if (jugadores[i].asesinatos < edadMenosKills)
        {
            edadMenosKills = jugadores[i].asesinatos;
            indice = i;
        }
    }
    return jugadores[indice].edad;
}

//---------funciones de aldo-----
float promedioBajasEntre15y20(Personaje jugadores[100], int N) {
    int total_muertes = 0;
    int total_jugadores = 0;
    for (int i = 0; i < N; i++) {
        if (jugadores[i].edad >= 15 && jugadores[i].edad <= 20) {
            total_muertes += jugadores[i].muertes;
            total_jugadores++;
        }
    }
    if (total_jugadores > 0) {
        return total_muertes * 1.0 / total_jugadores;
    } else {
        return 0;
    }
}

string aliasMasArmasUsadas(Personaje jugadores[100], int N) {
    int max_armas = 0;
    string alias;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].cantArmas > max_armas) {
            max_armas = jugadores[i].cantArmas;
            alias = jugadores[i].alias;
        }
    }
    return alias;
}

float promedioBajasMenoresDe20(Personaje jugadores[100], int N) {
    int total_muertes = 0;
    int total_jugadores = 0;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].edad < 20) {
            total_muertes += jugadores[i].muertes;
            total_jugadores++;
        }
    }
    if (total_jugadores > 0) {
        return total_muertes * 1.0 / total_jugadores;
    } else {
        return 0;
    }
}

float porcentajeBajasEntre18y22(Personaje jugadores[100], int N) {
    int total_muertes = 0;
    int total_jugadores = 0;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].edad >= 18 && jugadores[i].edad <= 22) {
            total_muertes += jugadores[i].muertes;
            total_jugadores++;
        }
    }
    if (total_jugadores > 0) {
        return (total_muertes * 1.0 / total_jugadores) * 100;
    } else {
        return 0;
    }
}

int acumuladoMinutosMasDe30Asesinatos(Personaje jugadores[100], int N) {
    int total_minutos = 0;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].asesinatos > 30) {
            total_minutos += jugadores[i].minutos;
        }
    }
    return total_minutos;
}

int jugadoresMasBajasQueAsesinatos(Personaje jugadores[100], int N) {
    int contador = 0;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].muertes > jugadores[i].asesinatos) {
            contador++;
        }
    }
    return contador;
}

float porcentajeMasAsesinatosQueBajas(Personaje jugadores[100], int N) {
    int contador = 0;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].asesinatos > jugadores[i].muertes) {
            contador++;
        }
    }
    if (N > 0) {
        return (contador * 1.0 / N) * 100;
    } else {
        return 0;
    }
}

string aliasMenosArmasUsadas(Personaje jugadores[100], int N) {
    int min_armas = jugadores[0].cantArmas; 
    string alias;
    for (int i = 0; i < N; ++i) {
        if (jugadores[i].cantArmas < min_armas) {
            min_armas = jugadores[i].cantArmas;
            alias = jugadores[i].alias;
        }
    }
    return alias;
}

#endif