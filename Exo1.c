#include<stdio.h>

int main()

{
    int N,somme=0,i;
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
    printf("Les  éléments du tableau sont: ");
    for(i=0;i<N;i++)
    {
        printf("%d", T[i]);
        somme += T[i] ;
    }
    printf("\nLa somme des éléments du tableau est:%d.\n", somme);
    return(0);
    
}
    