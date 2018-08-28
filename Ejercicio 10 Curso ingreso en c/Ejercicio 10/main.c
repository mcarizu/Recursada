#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char s='s';
    int cont_ingre=0;
    int cont_pos=0;
    int cont_neg=0;
    int cont_ceros=0;
    int cont_pares=0;
    int prom_pos;
    int prom_neg;
    int suma_pos=0;
    int suma_neg=0;

    int Par_imp=0;
    int max;
    int min;
    int diferencia;


    do{
    printf("Ingrese un valor\n");
    scanf("%d",&a);
    cont_ingre ++;



            if(a>0){  //Positivo
                cont_pos ++;
                suma_pos=suma_pos+a;

            };
            if(a<0){
             cont_neg ++;
             suma_neg=suma_neg+a;
            }//negativos
            if(a==0){
                cont_ceros ++;


            }// ceros


            if(a%2==0){
               Par_imp ++;

            }//
            printf("\nDesea Continuar?\t S - N\n");
            scanf("%c",&s);

    }while(s!='n');
    printf("\ncant positivos son %d:\n",cont_pos);
    printf("\ncant negativo son %d:\n",cont_neg);
    printf("\ncant ceros %d:\n",cont_ceros);
    printf("\nSuma positivos %d:\n",suma_pos);
    printf("\nSuma Negativos %d:\n",suma_neg);
    printf("\nCantidad Pares %d:\n",Par_imp);

    return 0;
}
