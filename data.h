#ifndef DATA

#define DATA

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Chess board size*/
#define _SIZE 8

/* Enums */

/* Pieces type */
typedef enum{
    PION,
    CAVALIER,
    FOU,
    TOUR,
    ROI,
    DAME
} type_piece;

/* Colors of pieces */
typedef enum{ 
    BLANC,
    NOIR 
} couleur;

/* Models */

/* Position of pieces */
typedef struct
{
    int ligne;
    int colonne;
} position;

/* Piece */
typedef struct
{
    couleur color;
    type_piece type;
} piece;


typedef struct
{
    position depart;
    position arrivee;
}deplacement;

typedef piece * echiquier[_SIZE][_SIZE];
#endif
