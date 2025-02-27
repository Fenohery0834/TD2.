#include<stdio.h>

int main()

{
    int N,i,temp;
    int T[50];
    
    printf("Entrer la taille du tableau: ");
    scanf("%d", &N);
    
    for(i=0;i<N;i++)
    {
       printf("Entrer l'élément T[%d]: ", i );
       scanf("%d", &T[i]);
    }   
    for(i=0;i<N/2;i++)
    {
       temp=T[i];
       T[i]=T[N-1-i];
       T[N-1-i]=temp;
    }
    printf ("Le tableau inversé est:%d.\n");
    for(i=0;i<N;i++)
    {
       printf("%d\n", T[i]);
    }
    printf("\n");
    
    return(0);
    
}
    