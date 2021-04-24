#include "jeu.h"


void init_jeu(echiquier grid)
{
    int i,j;
    piece*blancs[2*_SIZE];
    piece*noirs[2*_SIZE];

    for(i=0;i<_SIZE;i++)
        for(j=0;j<_SIZE;j++)
            grid[i][j]=NULL;

    /** Allocation des blancs **/
    for(i=0;i<2*_SIZE;i++)
    {
        blancs[i]=malloc(sizeof(piece));
        blancs[i]->color=BLANC;
    }
    for(i=0;i<2*_SIZE;i++)
    {
        noirs[i]=malloc(sizeof(piece));
        noirs[i]->color=NOIR;
    }

    blancs[0]->type=TOUR;
    blancs[1]->type=CAVALIER;
    blancs[2]->type=FOU;
    blancs[3]->type=DAME;
    blancs[4]->type=ROI;
    blancs[5]->type=FOU;
    blancs[6]->type=CAVALIER;
    blancs[7]->type=TOUR;
    for(i=_SIZE;i<2*_SIZE;i++)
        blancs[i]->type=PION;
    for(j=0;j<_SIZE;j++)
    {
        grid[_SIZE-1][j]=blancs[j];
        grid[_SIZE-2][j]=blancs[j+_SIZE];
    }
    noirs[0]->type=TOUR;
    noirs[1]->type=CAVALIER;
    noirs[2]->type=FOU;
    noirs[3]->type=DAME;
    noirs[4]->type=ROI;
    noirs[5]->type=FOU;
    noirs[6]->type=CAVALIER;
    noirs[7]->type=TOUR;
    for(i=_SIZE;i<2*_SIZE;i++)
        noirs[i]->type=PION;
    for(i=0;i<2;i++)
        for(j=0;j<_SIZE;j++)
            grid[i][j]=noirs[j+_SIZE*i];

}


void deplacer_piece(echiquier grid,deplacement d)
{
    if(grid[d.arrivee.ligne][d.arrivee.colonne]!=NULL)
        free(grid[d.arrivee.ligne][d.arrivee.colonne]);
    grid[d.arrivee.ligne][d.arrivee.colonne]=grid[d.depart.ligne][d.depart.colonne];
    grid[d.depart.ligne][d.depart.colonne]=NULL;
}
