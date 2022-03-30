#include<stdio.h>
#include<conio.h>

int main()
{
  float calif_1=0,calif_2=0,calif_3=0,calif_4=0,calif_5=0,promedio=0;
  printf("Introduce tu primera calificacion: ");scanf("%f",&calif_1);
  printf("Introduce tu segunda calificacion: ");scanf("%f",&calif_2);
  printf("Introduce tu tercera calificacion: ");scanf("%f",&calif_3);
  printf("Introduce tu cuarto calificacion: ");scanf("%f",&calif_4);
  printf("Introduce tu quinta calificacion: ");scanf("%f",&calif_5);
  promedio=(calif_1+calif_2+calif_3+calif_4+calif_5)/5;

  if(promedio<8.4)
  {
   printf("vas mal, tu promedio de %.2f no es aprobatorio",promedio);
  }
  else
  {
    printf("Vas bien, pasaste con un %.2f",promedio);
  }

  getch();
}
