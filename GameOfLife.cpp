#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <windows.h> 
using namespace std;

// **CONSTANTES PARA EL JUEGO** //
    // Cada celda puede tener uno de estos estados //
int vacia = 0;
int viva = 1;
int obst = 2;
int nutr = 3;
int virus = 4;
    // Dimensiones del tablero //
int MAX_filas = 60; 
int MAX_columnas = 60;


// **VARIABLES GLOBALES O CONFIGURABLES** //
int num_filas = 25;             // Filas del tablero   
int num_cols = 40;              // Columnas del tablero
int MAX_edad = 20;              // Edad máxima que puede alcanzar una célula antes de morir
int estable = 50;               // Número de generaciones sin cambios para declarar un estado estable
int prob_virus = 30;            // Probablidad de que el virus se propague (0-100%)
int mejora_nutr = 40;           // Probabilidad de que un nutriente ayude a revivir una célula
bool usar_colores = true;       // Activa o desactiva colores ANSII
int retraso_tick_ms = 200;      // Pausa entre generaciones en milisegundos

int grid [MAX_filas][MAX_cols];         // Guarda los estados que pasan ahorita
int gridsig [MAX_filas][MAX_cols];      // Estados de la siguiente generacion
int gridedad [MAX_filas][MAX_cols];     // Cuántos ticks lleva viva una celula

// **GUARDADO DE DATOS** //
unsingned long cont_tick = 0

