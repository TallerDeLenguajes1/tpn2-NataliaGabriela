#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5


int main(){
int f,c;
double mt[N][M]={{12,2,3,8,5},
                {8,8,8,8,9},
                {1,5,3,2,7}};

for(f = 0;f<N; f++)
{
 for(c = 0;c<M; c++)
{
printf("%lf ", mt[f][c]);
}
printf("\n");
}
scanf(" %c");
return 0;
}