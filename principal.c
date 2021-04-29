#include "data.h"
#include "interface.h"
#include "jeu.h"
#include <stdbool.h>

int main()
{
    /* Init a grid */
    echiquier grid;

    /* Pivot runner */
    int i,j;

    /* Init player */
    couleur player1 = BLANC;
    couleur player2 = NOIR;

    /* Add pieces to grid*/
    init_jeu(grid);

    /* Design pieces */
    init_dessins_pieces(dessin_piece);

    /* Draw current board state*/
    afficher_grille(grid);

    /* TODO Check possible */

    printf("\n\n\n\n\n\n \t\tMETTRE EN PLEIN ECRAN PUIS APPUYER SUR UNE TOUCHE\n");getchar();


    afficher_grille(grid);

    // /* Start playing */
    jeu_commence(grid,BLANC);
  return 0;
}


void jeu_commence(echiquier grid,couleur color){
    int turn=1;
    bool win=false;
    afficher_grille(grid);
    while (!win){
        printf("Tours: %d, Joueur: ",turn);
        deplacement d;
        if(color==BLANC){
            printf("BLANC \n");
            d = saisie_deplacement(grid,color);
            color = NOIR;
        }
        else{
            printf("NOIR \n");
            d = saisie_deplacement(grid,color);
            color = BLANC;
        }
        turn++;
        init_possible();
        init_mate();
        check_mate(grid,color);
        afficher_grille(grid);
    }

}
