#include <stdio.h>
typedef unsigned long long TypeEntier;
TypeEntier factorielle(TypeEntier);

int main()
{
    TypeEntier nombre;
    printf("Entrez un nombre pour calculer son factorielle ");
    int f=8;

    printf("La factorielle de %hd est %hd",f,factorielle(f));

    return 0;
}

TypeEntier factorielle(TypeEntier n){
    TypeEntier result=1;
    for (TypeEntier i=1; i<=n;i++){
        result=result * i;
    }

    return result;
}