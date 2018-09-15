#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

void ordenarPromedio(int legajos[],int pp[],int ss[],char sexos[], char nombres[][20],float promedios[], int tamanio);

int main()
{
/*
   int legajos[TAM];
   int pp[TAM];
   int ss[TAM];
   float promedios[TAM];
   char sexos[TAM];
   char nombres[TAM][20];
*/

   int legajos[]={123,456,789,};
   int pp[]={5,7,10};
   int ss[]={2,8,7};
   float promedios[3];
   char sexos[]={'f','f','m'};
   char nombres[][20]={"Gimena","Romina","Matias"};
 /*for(int i=0;i<TAM;i++){
    printf("Ingrese un Legajo: ");
    fflush(stdin);
    scanf("%d",&legajos[i]);
    printf("Ingrese un PP: ");
    fflush(stdin);
    scanf("%d",&pp[i]);
    printf("Ingrese un SS: ");
    fflush(stdin);
    scanf("%d",&ss[i]);
    printf("Ingrese el Sexo: ");
    fflush(stdin);
    gets(sexos);
    printf("Ingrese el Nombre: ");
    fflush(stdin);
    gets(nombres);

    system("pause");
    system("clear");

   }*/

ordenarPromedio(legajos,pp,ss,sexos,nombres,promedios,TAM);
    return 0;
}
void ordenarPromedio(int legajos[],int pp[],int ss[],char sexos[], char nombres[][20],float promedios[], int tamanio){
char aux;

     for(int i=0; i<tamanio-1; i++)
    {
        for(int j=i+1; j<tamanio; j++)
        {
            if(sexos[i]<sexos[j])
            {
               aux= sexos[i];
                sexos[i]=sexos[j];
                sexos[j]=aux;
           }
           else(sexos[i]==sexos[j] && strcmp(nombres[i],nombres[j])>0){
                aux=nombres[i];
                nombres[i]=nombres[j];
                nombres[j]=aux;

           }

        }



        for(int i=0;i<tamanio;i++)
            {

            printf("Primer Legajo:%d\t",legajos[i]);
            printf("Primer Nota:%d\t",pp[i]);
            printf("Segunda Nota:%d\t",ss[i]);
            printf("Sexo:%c\t",sexos[i]);
            printf("Nombre:%s\t",nombres[i]);
            promedios[i]=(float)(pp[i]+ ss[i])/2;
            printf("Promedio:%0.2f\n",promedios[i]);

        }




    }
}
