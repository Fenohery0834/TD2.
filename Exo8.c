#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,i;
    int T[50];
    int tentative=0;
    do
    {
        if(tentative==2)
        {
            printf("Nombre de tentative depasse \n");
            exit(0);
        }
        printf("Entrer la taille du tableau: ");
        scanf("%d", &N);
        if(N<1 || N>50)
        {
            printf("Erreur: Taille invalide \n");
            tentative++;
        }
    }
    while(N<1 || N>50);
    printf("Entrer les elements du tableau:  ");
    for(i=0; i<N; i++)
    {
       printf("T[%d]=", i);
       scanf("%d", &T[i]);
    }
    
    int Min=T[0];
    int Max=T[0];
    int posmin=0;
    int posmax=0;
    
    for(i=0; i<N; i++)
    {
        if(T[i] < Min) 
        {
            Min=T[i];
            posmin=i;
        }
        if(T[i] > Max) 
        {
            Max=T[i];
            posmax=i;
        }
    }
    printf("\n");
    
    printf("La valeur minimale est: %d", Min);
    printf("à la position:%d\n ", posmin);
    printf("La valeur maximale est: %d", Max);
    printf("à la position:%d\n", posmax);
    
    return(0);
}  