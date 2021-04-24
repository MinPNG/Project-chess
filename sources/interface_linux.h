#include"data.h"

#define LARGEUR_CASE 11
#define HAUTEUR_CASE 5


unsigned char dessin_piece[2][HAUTEUR_CASE][LARGEUR_CASE];
void init_dessins_pieces(unsigned char d[][HAUTEUR_CASE][LARGEUR_CASE]);
void afficher_grille(echiquier);
deplacement saisie_deplacement(echiquier,couleur player_color);
