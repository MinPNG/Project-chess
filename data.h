#ifndef DATA

#define DATA

#include <stdio.h>
#include <stdlib.h>

#define _SIZE 8

typedef enum{PION,CAVALIER,FOU,TOUR,ROI,DAME}type_piece;
typedef enum{BLANC,NOIR}couleur;

typedef struct
{
    int ligne;
    int colonne;
}position;

typedef struct
{
    couleur color;
    type_piece type;
}piece;


typedef struct
{
    position depart;
    position arrivee;
}deplacement;

typedef piece * echiquier[_SIZE][_SIZE];
#endif
