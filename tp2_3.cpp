#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 15
void pares(int*p_mtr, int c);
int main(){
    srand(time(NULL));
    int i,j,c=5 + rand() % (16-5);
    int mtr[F][c],*p_mtr;
    
    
    
for ( i = 0; i < F; i++)
{
    for (j = 0; j < c; j++)
    {
        mtr[i][j]=100 + rand() % (1000-100);
        printf("%d ", mtr[i][j]);
    }
    printf("\n");
}
p_mtr= & mtr[0][0];
pares(p_mtr,c);

scanf(" %c");
return 0;
}
void pares(int *p_mtr,int c){
    int cont=0,i,j,vector[F];
    for(i=0;i < F;i++){
        
        for (j=0; j < c; j++)
        {
            if ((*p_mtr%2)==0)
            {
                cont++;
                              
            } 
            
            p_mtr++;
        }
        
        printf("Fila numero: %d cantidad de numeros pares: %d \n", i,cont);
        vector[i]=cont;
        cont=0;
    
}
printf("Mostrando vector: \n");
for (i = 0; i < F; i++)
{
    printf("%d ", vector[i]);
}


}