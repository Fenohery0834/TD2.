#include<stdio.h>

int main()

{
    int N,i,posCount,negCount;
    int T[50],TPOS[50],TNEG[50];
    
    printf("Entrer la taille du tableau: ");
    scanf("%d", &N);
    
    if((N > 50) || (N <= 0))
    {
        printf("Erreur:Taille invalide \n");
        return(1);
    }
    
    posCount=0;
    negCount=0;
    
    for(i=0;i<N;i++)
    {
       printf("Entrer l'élément T[%d]: ", i );
       scanf("%d", &T[i]);
       if(T[i]>0)
       {
          TPOS[posCount]=T[i];
          posCount=posCount+1;
       }
       else if(T[i]<0)
       {
          TNEG[negCount]=T[i];
          negCount=negCount+1;
       }
    }
    
    printf("Tableau des valeurs positives:%d.\n");
    for(i=0;i<posCount;i++)
    {
       printf("%d\n", TPOS[i]);
    }
    printf("\n");
    
    printf ("Tableau des valeurs négatives:%d.\n");
    for(i=0;i<negCount;i++)
    {
       printf("%d\n", TNEG[i]);
    }
    printf("\n");
    
    return(0);
    
}
    