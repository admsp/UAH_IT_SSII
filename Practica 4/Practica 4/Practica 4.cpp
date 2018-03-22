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

#pragma region Area de declaración de variables/literales/constantes globales
 
// Teclas de aplicación
#define ENTER			13
#define ESP				32
#define ESC				27

#pragma endregion 

#pragma region Ciclo de Vida

int main() {

	// Declaración e Inicialización de Variables
	int iResult = 0,
		auxDicTam = 0, 
		atpDiccTam = 0;
	tPalabra atpDiccionario[MAX_PAL];
	char cOptionSelected = ESP;
	
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
				auxDicTam = anyadir_palabra(atpDiccionario, atpDiccTam);
				
				// Validar inserción
				// Nota: verificar que haya cambiado el numero de palabras del diccionario 
				if (auxDicTam > atpDiccTam) atpDiccTam = auxDicTam;
								
				break;
			case '2':
				
				break;
			case '3':
				
				break;
			case '4':
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
	} while ((cOptionSelected != ESC) && (cOptionSelected != '4'));

    // Retorno por defecto
	return iResult;
}

#pragma endregion