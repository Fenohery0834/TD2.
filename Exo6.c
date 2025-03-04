#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,M,i;
    int TA[50],TB[100];
    int tentative = 0;
    do
    {
        if (tentative == 3)
        {
            printf("nombre de tentative depasse \n");
            exit(0);
        }
        printf("Entrer la taille du tableau TA: ");
        scanf("%d", &N);
        printf("Entrer la taille du tableau TB: ");
        scanf("%d",&M);

        if ((N<1 || N>50) || (M<1 || M>100))
        {
            printf("veuillez ressayer \n");
            tentative++ ;
        }
    } 
    while((N<1 || N>50) || (M<1 || M>100));
    printf("Entrer les elments du tableau TA:\n");
    for(i=0;i<N;i++)
    {
        printf("TA[%d]= ",i);
        scanf("%d", &TA[i]);
    }
    printf("\n");

    printf("Entrer les elements du tableau TB:\n");
    for(i=0;i<M;i++)
    {
        printf("TB[%d]= ",i);
        scanf("%d", &TB[i]);
    }
    printf("\n");
    for(i=0;i<N;i++);
    {
        TB[M+i]=TA[i];
    }
    M +=N;
    printf("Tableau TB après ajout:\n");
    for(i=0;i<M;i++)
    {
        printf("%d", TB[i]);
    } 
    printf("\n");   
    return (0);
}
 