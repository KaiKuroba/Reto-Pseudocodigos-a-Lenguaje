#include <stdio.h>
#include<windows.h>


int main(int argc, char *argv[]) {
	
	int clave;
	
	printf("Programa de contraseņa \n \n");
	
	do{
		
		printf("Dime tu contraseņa de acceso :  ");
		scanf("%i",&clave);
		
			if (clave != 897){
				system("cls");
				printf("Contraseņa Incorrecta \n");
			}
			
		
	} while(clave!=897);
	
		system("cls");
		printf(" ************************** \n");
		printf(" Contraseņa Correcta \n\n");
		printf(" ************************** \n \n");
		printf(" Bienvenido ");
	
	return 0;
}

