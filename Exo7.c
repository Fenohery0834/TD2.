#include<stdio.h>

int main()
{
   int N,i;
   int U[50],V[50];
   int produit_scalaire=0;
   
   printf("Entrer la taille des vecteurs: ");
   scanf("%d", &N);
   
   printf("Entrer les éléments du vecteur U: ");
   for(i=0;i<N;i++)
   {
     printf("U[%d]= ", i);
     scanf("%d", &U[i]);
   }
   printf("\n");
   
   printf("Entrer les éléments du vecteur V: ");
   for(i=0;i<N;i++)
   {
      printf("V[%d]= ", i);
      scanf("%d", &V[i]);
   }
   printf("\n");
   
   for(i=0;i<N;i++)
   {
       produit_scalaire += U[i]*V[i];
   }
   
   printf("Le produit scalaire des deux vecteurs est:%d", produit_scalaire);
}