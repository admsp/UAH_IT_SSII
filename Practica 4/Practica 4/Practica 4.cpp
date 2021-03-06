// ============================================================
// Nombre: Practica 4.cpp 
// Descripción: 
// Cuarta práctica de Programación de 1º de Teleco UA.
// Objetivo: Gestión de Diccionario Español - Inglés.
// ============================================================

#pragma region Librerías de Programa

// Invocación de la Librería de agrupación de librerías base Standard para la aplicación.
#include "stdafx.h"
#include "diccionario.h"

#pragma endregion

#pragma region Variables Globales 

// Gestión de Menú
char cOptionSelected;

// Diccionario
/*
Nota:
Lo ideal sería encapsular todas las posibles variables de un diccionario, así como las funcionalidades
dentro de la propia librería (ej.: siguiendo el conjunto de principios de POO base o al menos los principales:
encapsulamiento, herencia y poliformismo). 

Dado que utilizamos estructurada, de cara a que dicha librería sea reutilizable y puesto que no se puede
establecer que exista un objeto que implemente el patron singleton como factoría de repositorios cada 
programa que invoque la librería tendrá que crear los dos objetos base de trabajo: 
	- iDiccTam -> Tamaño.
	- oDiccRepo -> Repositorio. 
*/
int iDiccTam;
tPalabra oDiccRepo[MAX_PAL];

#pragma endregion

#pragma region Ciclo de Vida

int main() {

	// Declaración e Inicialización de Variables
	int iResult, auxDicTam;
	
	// Inicialización de variables globales
	
	// Menu
	cOptionSelected = ESP;
	iResult = auxDicTam = 0;

	// Diccionario
	iDiccTam = 0;

	// Presentación de opciones de menu
	do {
		// Mostrar menu de opciones
		MenuManager(PRINCIPAL, nullptr);

		// Leer de pantalla
		cOptionSelected = _getch();

		// Capturar la opción seleccionada
		if (cOptionSelected != ESP) {

			// Validar caracter
			switch (cOptionSelected) {
				case '1':
					// Lanzar inserción				
					auxDicTam = anyadir_palabra(oDiccRepo, iDiccTam);
							
					// Validar inserción
					/* Nota: verificar que haya cambiado el numero de palabras del diccionario */
					if (auxDicTam != -1 && auxDicTam != iDiccTam) iDiccTam = auxDicTam;
								
					break;
				case '2':
					// Lanzar proceso de traducción
					traducir_palabra(oDiccRepo, iDiccTam);
					
					break;
				case '3':
					// Lanzar acción de visualización de contenido de diccionario
					mostrar_diccionario(oDiccRepo, iDiccTam);

					break;
				case '4':
					// Lanzar borrado				
					auxDicTam = borrar_palabra(oDiccRepo, iDiccTam);

					// Validar borrado
					/* Nota: verificar que haya cambiado el numero de palabras del diccionario */
					if (auxDicTam != -1 && auxDicTam != iDiccTam) iDiccTam = auxDicTam;

					break;
				case '5':
				case ESC:
					// Mostrar mensaje de salida
					MenuManager(PRINCIPAL_DESPEDIDA, nullptr);

					// Esperamos que pulse una tecla
					_getch();

					break;
				default:
					// Mostrar mensaje de salida
					MenuManager(PRINCIPAL_ERROR, nullptr);
				
					// Recogemos tecla pulsada
					cOptionSelected = _getch();

					break;
				}
		}
	} while ((cOptionSelected != ESC) && (cOptionSelected != '5'));

    // Retorno por defecto
	return iResult;
}

#pragma endregion