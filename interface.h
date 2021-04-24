
#include"data.h"
#include"windows.h"
#include"jeu.h"
#include <stdbool.h>
#define LARGEUR_CASE 11
#define HAUTEUR_CASE 5

bool possible[_SIZE][_SIZE];
bool tmp[_SIZE][_SIZE];
unsigned char dessin_piece[2][HAUTEUR_CASE][LARGEUR_CASE];
void init_dessins_pieces(unsigned char d[][HAUTEUR_CASE][LARGEUR_CASE]);
void afficher_grille(piece* grid[][_SIZE]);
void init_possible;
deplacement saisie_deplacement(echiquier,couleur player_color);


