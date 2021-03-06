// Nombre: stdafx.h
// Descripción: Librería auxiliar 
//		stdafx.cpp: archivo de código fuente que contiene sólo las inclusiones estándar
//		Practica 1.pch será el encabezado precompilado
//		stdafx.obj contiene la información de tipos precompilada
// Nota: La librería incluye las declaraciones a las librerías utilizadas por los métodos y funciones
//       aquí declarados. 
#include "stdafx.h"

// Métodos y Funciones de tratamiento de cadenas.

// Nombre: fReCalcDoubleArray
// Descripción: Función auxiliar para recalcular el tamaño de un array.
bool fReCalcCharArray(char *v, int tam) {

	// Declaración de variables
	bool result = false; 
	int i;
	char *aux;

	// Validación de parametros de entrada
	if (tam >= 0) {

		// Tamaño correcto
		result = true;

		// Inicialización de variables
		aux = (char*)malloc(sizeof(char)*tam);

		// Cargar datos del array inicial al array auxiliar 
		for (i = 0; i < tam; i++) aux[i] = v[i];

		// Liberar espacio del array inicial 
		free(v);

		// Reasignar el tamaño del array con el nuevo tamaño
		v = (char*)malloc(sizeof(char)*tam);

		// Reasignar los datos desde el array auxiliar al puntero del array original de parametro 
		for (i = 0; i < tam; i++) v[i] = aux[i];
	}

	// result 
	return result;
}




