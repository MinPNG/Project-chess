#include "data.h"
#include "interface.h"
#include "jeu.h"
#include <stdbool.h>

int main()
{
    echiquier grid ;
    int i,j;
    couleur player1 = BLANC;
    couleur player2 = NOIR;
    init_jeu(grid);
    init_dessins_pieces(dessin_piece);
    affichage_jeu(grid);
    printf("\n\n\n\n\n\n \t\tMETTRE EN PLEIN ECRAN PUIS APPUYER SUR UNE TOUCHE\n");getchar();
    init_possible();
    afficher_grille(grid);
    int turn = 1;
    bool ok  = true;
    while(ok){
        printf("Tours: %d, Joueur: ",turn);
        deplacement d;
        if(turn % 2 != 0){
            printf("BLANC \n");
            d = saisie_deplacement(grid, player1);
        }
        else{
            printf("NOIR \n");
            d = saisie_deplacement(grid, player2);
        }
        turn++;
        deplacer_piece(grid,d);
        init_possible();
        afficher_grille(grid);

    }

  return 0;
}
