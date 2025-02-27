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
    
    int j=0;
    for(i=0;i<N;i++)
    {
       if(T[i]!=0)
       {
          T[j]=T[i];
          j=j+1;
       } 
    }
    
    N=j;
    printf("Le Tableau après supression des zéros:%d.\n");
    for(i=0;i<N;i++)
    {
       printf("T[%d]\n",T[i]);
    }
    
    return(0);
    
}
    