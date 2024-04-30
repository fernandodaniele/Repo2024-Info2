#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "../inc/menu.h"

// Programa principal
int main (void){
	IniciarMenu();
	while(1){
		ActualizarMenu();
	}
	return 0;
}