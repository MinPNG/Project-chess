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

    // -> state changed

    printf("\n\n\n\n\n\n \t\tMETTRE EN PLEIN ECRAN PUIS APPUYER SUR UNE TOUCHE\n");getchar();
    
    
    // afficher_grille(grid);

    // /* Start playing */
    // int turn = 1;
    // bool ok  = true;
    // while(ok){
    //     printf("Tours: %d, Joueur: ",turn);
    //     deplacement d;
    //     if(turn % 2 != 0){
    //         printf("BLANC \n");
    //         d = saisie_deplacement(grid, player1);
    //     }
    //     else{
    //         printf("NOIR \n");
    //         d = saisie_deplacement(grid, player2);
    //     }
    //     turn++;
    //     -> state changed
    //     deplacer_piece(grid,d);
    //     init_possible();
    //     afficher_grille(grid);

    // }

  return 0;
}
