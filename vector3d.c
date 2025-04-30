#include "vector3d.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* TODO: -- define data structure here -- */ 
typedef struct vector3d
{
    /* data */
    double x;
    double y;
    double z;
} Vector3d;


PtVector3d  vector3dCreate(double x, double y, double z) {
    PtVector3d v = (PtVector3d) malloc(sizeof(Vector3d));

    if(v == NULL) return NULL;

    v->x = x;
    v->y = y;
    v->z = z;

    return v;
}

void vector3dPrint(PtVector3d vec, bool lineBreakAfter) {
    if(lineBreakAfter == true){
        printf("<%.1f, %.1f, %.1f>\n", vec->x, vec->y, vec->z);
    } else{
        printf("<%.1f, %.1f, %.1f>", vec->x, vec->y, vec->z);
    }

}

int vector3dX(PtVector3d vec, double *x) {
    
    return VECTOR3D_OK;
}

int vector3dY(PtVector3d vec, double *y) {
    
    return VECTOR3D_OK;
}

int vector3dZ(PtVector3d vec, double *z) {
    
    return VECTOR3D_OK;
}

int vector3dDestroy(PtVector3d *pVec) {
    
    return VECTOR3D_OK;
}

PtVector3d vector3dMultiplyByScalar(PtVector3d vec, double scalar) {
    return NULL;
}

PtVector3d vector3dAdd(PtVector3d vec1, PtVector3d vec2) {
    return NULL;
}

int vector3dMagnitude(PtVector3d vec, double *magnitude) {
   
    return VECTOR3D_OK;
}

PtVector3d vector3dNormalize(PtVector3d vec) {
    return NULL;
}

