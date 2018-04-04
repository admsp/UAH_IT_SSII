// ============================================================================================
// Nombre: stdafx.h: 
// Descripción: 
// Librería global con las librerías standard del sistema y otros específicos del proyecto.
// =============================================================================================

#pragma region Librerías de Trabajo

// Librería para determinar el uso de la versión más reciente de Windows
#include <SDKDDKVer.h>

// Librerías standard del sistema

// Funciones base
#include <stdlib.h>

// Tratamiento de entrada y salida
#include <stdio.h>
#include <conio.h>

// Tratamiento de caracteres y cadenas
#include <tchar.h>
#include <string.h>

#pragma endregion

#pragma region Area de declaración de variables/literales/constantes globales

// Teclas de aplicación
#define ENTER			13
#define ESP				32
#define ESC				27
#define EOL	            '\0'
#define DEL				8

#pragma endregion 

#pragma region Modelo de datos específico

// Enumerado de Opciones de Menu Principal
enum eMainMenuOptions {
	OPT_PRINCIPAL_MATEMATICA = '1',
	OPT_PRINCIPAL_ARRAYS = '2',
	OPT_PRINCIPAL_SALIDA = '3'
};

// Enumerado de Opciones de Menu Matemática
enum eMatematicaMenuOptions {
	OPT_MATEMATICA_POTENCIA = '1',
	OPT_MATEMATICA_FACTORIAL = '2',
	OPT_MATEMATICA_FACTORIAL_RECURSIVO = '3',
	OPT_MATEMATICA_SALIDA = '4'
};

// Enumerado de Opciones de Menu Matemática
enum eMatematicaPotenciaMenuOptions {
	OPT_MATEMATICA_POTENCIA_SALIDA = ESC
};


// Enumerado de Mensajes de Menus
enum eMenusMessages {
	PRINCIPAL,
	MATEMATICA, 
	ARRAYS,
	MATEMATICA_POTENCIA,
	MATEMATICA_FACTORIAL,
	MATEMATICA_FACTORIAL_RECURSIVO,
	MATEMATICA_POTENCIA_BASE,
	MATEMATICA_POTENCIA_EXPONENTE,
	MATEMATICA_POTENCIA_RESULTADO,
	PARCIAL_ERROR,
	PARCIAL_DESPEDIDA,
	PRINCIPAL_DESPEDIDA,
	GLOBAL_ERROR
};

// Tipo de negocio para el tratamiento de tipos de menús
typedef eMenusMessages tMenusMessagesType;

#pragma endregion 
