#include <stdio.h>
#include<windows.h>


int main(int argc, char *argv[]) {
	
	int clave;
	
	printf("Programa de contrase�a \n \n");
	
	do{
		
		printf("Dime tu contrase�a de acceso :  ");
		scanf("%i",&clave);
		
			if (clave != 897){
				system("cls");
				printf("Contrase�a Incorrecta \n");
			}
			
		
	} while(clave!=897);
	
		system("cls");
		printf(" ************************** \n");
		printf(" Contrase�a Correcta \n\n");
		printf(" ************************** \n \n");
		printf(" Bienvenido ");
	
	return 0;
}

