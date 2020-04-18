#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

struct compus{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};
typedef struct compus compu;
//funciones 
compu cargarpc(compu pc,char *tipo);
void mostrarpc(compu pc);
compu cargarpuntero(compu *p, int c,char *tipo);
void mostrarlistapc(compu *p_pc,int cant_pc);
void pcmasvieja(compu *p_pc,int cant_pc);
void mayorvelocidad(compu *p_pc,int cant_pc);
int main(){
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"},*tipo=tipos[0];
    int cant_pc;
    printf("Ingrese la cantidad de PC");
    scanf("%d",&cant_pc);
    fflush(stdin);
    compu pc,arre_pc[cant_pc],*p_pc=arre_pc;
   

    
    //cargar datos
    pc=cargarpc(pc,tipo);
    
    fflush(stdin);
    //mostrar una pc
    mostrarpc(pc);
     printf("\n---------------------------\n");
    //cargar puntero
    *p_pc=cargarpuntero(p_pc,cant_pc,tipo);
  
    mostrarlistapc(p_pc,cant_pc);
    printf("\n---------------------------\n");
    //PC mas vieja
    pcmasvieja(p_pc,cant_pc);
    printf("\n---------------------------\n");
    //PC mas rapida
    mayorvelocidad(p_pc,cant_pc);

    scanf(" %c");
    return 0;
}
compu cargarpc(compu pc,char *tipo){
    
    

    pc.velocidad=1 + rand() % (4-1);
    pc.anio=2000 + rand() % (2018-2000);
    pc.cantidad=1 + rand() % (5-1);
    pc.tipo_cpu=tipo+ ( rand ()% 6 * 10 );
    
    return pc;
}
void mostrarpc(compu pc){
    printf("Velocidad: %d\n",pc.velocidad);
    printf("Anio: %d\n",pc.anio);
    printf("Cantidad: %d\n",pc.cantidad);
    printf("Tipo de CPU: %s",pc.tipo_cpu);
    printf("\n");
}
compu cargarpuntero(compu *p, int c,char *tipo){
    int i,j;
    compu pc;
    for ( i = 0; i < c; i++)
    {
        *(p+i)=cargarpc(pc,tipo);
        
    }
   return *p;

}
void mostrarlistapc(compu *p_pc,int cant_pc){
    int i;
    for ( i = 0; i < cant_pc; i++)
    {
        mostrarpc(*(p_pc+i));
        
    }
    
}
void pcmasvieja(compu *p_pc,int cant_pc){
      int i,min=2018,aux,aux1,j;
    for ( i = 0; i < cant_pc; i++)
    {
            aux1=(p_pc+i)->anio;
             
            if (aux1<min)
            {   min=aux1;
                
                aux=i;
            }
            
    }
    printf("La PC mas vieja es: \n");
    for ( j = 0; j < cant_pc; j++)
    {
        if (aux==j)
        {
            mostrarpc(p_pc[j]);
        }
    
    }
    
}
void mayorvelocidad(compu *p_pc,int cant_pc){
    int i,max=0,aux,aux1,j;
    for ( i = 0; i < cant_pc; i++)
    {
            aux1=(p_pc+i)->velocidad;
             
            if (aux1>max)
            {   max=aux1;
                
                aux=i;
            }
            
    }
    printf("La PC mas veloz es: \n");
    for ( j = 0; j < cant_pc; j++)
    {
        if (aux==j)
        {
            mostrarpc(p_pc[j]);
        }
        
    }
    
    
}