#include <stdio.h>
#include <stdlib.h>

int* repeat(int t1[],int t2[],int taille){
   int taille_tab_resultat=0;
   for (int i=0;i<taille;i++){
    taille_tab_resultat+=t1[i];
   }

   int* resultat = (int*)malloc(taille_tab_resultat*sizeof(int));

   int index=0;
   for (int i=0;i<taille;i++){
    for (int j=0;j<t1[i];j++){
        resultat[index]=t2[i];
        index+=1;
    }

   }
    return resultat;

}

int main(){

    int t1[]={1,2,3,4};
    int t2[]={10,9,8,7};

    int taille=4;

    int* result=repeat(t1,t2,taille);

    int taille_tab_final = 0;
    for (int i = 0; i < taille; i++) {
        taille_tab_final += t1[i];
    }

    // Afficher le tableau résultat
    printf("Résultat : ");
    for (int i = 0; i < taille_tab_final; i++) {
        printf("%d ", result[i]);
    }

    return 0;

    

}
