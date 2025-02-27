#include<stdio.h>

int main()

{
    int N,i,Max,Pos;
    int T[50];
    
    printf("Entrer la taille du tableau: ");
    scanf("%d", &N);
    
    if((N > 50) || (N <= 0))
    {
        printf("Erreur:Taille invalide \n");
        return(1);
    }
    for(i=0;i<N;i++)
    {
       printf("Entrer l'élément T[%d]: ", i );
       scanf("%d", &T[i]);
    }
    
    Max=T[0];
    Pos=0;
    
    for(i=0;i<N;i++)
    {
        if(T[i]>Max)
        {
        Max=T[i];
        Pos=i;
        }
    }
    printf("La valeur Maximal est:%d.\n",Max);
    printf("à la position:%d.\n",Pos);
    
    return(0);
    
}
    