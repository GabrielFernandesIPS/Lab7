#include <stdio.h> 
#include <stdlib.h>
#include "vector3d.h"


void printComponentsOf(PtVector3d vec){

    if(vec == NULL){
        printf("Nao é possivel apresentar as coordenadas. Vector nulo.");
    }
    double *x = vector3dX(vec, &x);
    double *y = vector3dY(vec, &y);
    double *z = vector3dZ(vec, &z);
    printf("x = %.1f| y = %.1f| z = %.1f", x,y,z);
}
int main() {

    PtVector3d v1 = vector3dCreate(2, 1, -4);
    PtVector3d v2 = NULL;
    if(v1 == NULL) {
        printf("No memory available. \n");
        return EXIT_FAILURE;
    }

    vector3dPrint(v1, true);
    printComponentsOf(v1);

    vector3dDestroy(&v1);
    return EXIT_SUCCESS;
}
