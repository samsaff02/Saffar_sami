#include <stdint.h>
#include <stdlib.h>
#define SIZE 5

int matrix_mult(int matriceResultat[SIZE][SIZE],int matrice1[][SIZE], int matrice2[][SIZE]){
    /*Colonne de matrice 1 est égale à colonne de matrice 2 */
    if (SIZE==sizeof(matrice2)/sizeof(matrice2[0])){
        for(int i=0; i<sizeof(matrice2)/sizeof(matrice2[0]);i++){
            for(int j=0; j<SIZE;j++){
                matriceResultat[i][j]=matrice1[i][j]*matrice2[i][j];
            }
        }
    }
}

int main(void) {
//matrices en ligne * colonne
int64_t matrice1[][SIZE]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
int64_t matrice2[][SIZE]={{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10}};
int64_t matriceResultat[SIZE][SIZE];
matrix_mult(matriceResultat,matrice1,matrice2);
matrix_print(matriceResultat);
return EXIT_SUCCESS;
}
