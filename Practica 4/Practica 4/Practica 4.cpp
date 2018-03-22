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

#pragma region Area de declaración de funciones globales

void menu();

#pragma endregion 

#pragma region Ciclo de Vida

int main() {

	// Declaración e Inicialización de Variables
	int iResult = 0;
	char cOptionSelected = ESP;
	int atpDiccTam = 0;
	tPalabra atpDiccionario[MAX_PAL];

	// Presentación de opciones de menu
	do {
		// Limpieza de pantalla
		system("cls");

		// Mostrar menu de opciones
		printf("==============================================================================\n");
		printf("= Elija una de las siguientes opciones:                                      =\n");
		printf("=                                                                            =\n");
		printf("=  1. Anyadir palabra                                                        =\n");
		printf("=  2. Traducir palabra                                                       =\n");
		printf("=  3. Mostrar diccionario                                                    =\n");
		printf("=  4. Salir                                                                  =\n");
		printf("=                                                                            =\n");
		printf("= Pulse una opcion o Esc para salir...                                       =\n");
		printf("==============================================================================\n");

		// Leer de pantalla
		cOptionSelected = _getch();

		// Capturar la opción seleccionada
		if (cOptionSelected != ESP) {

			// Validar caracter
			switch (cOptionSelected) {
			case '1':
				atpDiccTam = anyadir_palabra(atpDiccionario, atpDiccTam);
				// TODO: verificar que haya cambiado el numero de palabras del diccionario 
				break;
			case '2':
				
				break;
			case '3':
				
				break;
			case '4':
			case ESC:
				// Limpieza de pantalla
				system("cls");

				// Cargar mensaje
				printf("==============================================================================\n");
				printf("= Gracias por usar nuestra aplicacion. Vuelva pronto...                      =\n");
				printf("==============================================================================\n");

				break;
			default:

				// Limpieza de pantalla
				system("cls");

				// Cargar mensaje
				printf("==============================================================================\n");
				printf("= La opción seleccionada es incorrecta. Pulse una tecla para continuar...    =\n");
				printf("==============================================================================\n");

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

#pragma region Area de Presentación

void menu() {


}

#pragma endregion 

