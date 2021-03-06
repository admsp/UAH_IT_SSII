// ============================================================================================
// Nombre: stdafx.h: 
// Descripción: 
// Librería global con las librerías standard del sistema y otros específicos del proyecto.
// =============================================================================================

#pragma once

// Librería para determinar el uso de la versión más reciente de Windows
#include "targetver.h"

// Librerías standard del sistema

// Funciones base
#include <stdlib.h>

// Tratamiento de entrada y salida
#include <stdio.h>
#include <conio.h>

// Tratamiento de caracteres y cadenas
#include <tchar.h>
#include <string.h>

// Tratamiento de funciones y operaciones matematicas
#include <math.h>

// Metodos específicos auxiliares
bool fReCalcCharArray(char *v, int tam);
