#include "interface_linux.h"

void init_dessins_pieces(unsigned char d[][HAUTEUR_CASE][LARGEUR_CASE])
{
    int i,j;

    /**** PION *****/
    for(i=0;i<HAUTEUR_CASE-3;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[0][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[0][i][j]=' ';
        d[0][i][LARGEUR_CASE-1-j]=' ';
    }
   // for(j=(LARGEUR_CASE-3)/2;j<(LARGEUR_CASE-3)/2+3;j++)
     //   d[0][i][j]='|';
     d[0][i][j++]='(';
     d[0][i][j++]='|';
     d[0][i][j++]=')';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[0][i][j]=' ';
        d[0][i][LARGEUR_CASE-1-j]=' ';
    }
    d[0][i][(LARGEUR_CASE-3)/2]=' ';
    d[0][i][(LARGEUR_CASE-3)/2+1]='|';
    d[0][i][(LARGEUR_CASE-3)/2+2]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[0][i][j]='_';
        d[0][i][LARGEUR_CASE-1-j]='_';
    };
    for(j=(LARGEUR_CASE-5)/2;j<(LARGEUR_CASE-5)/2+5;j++)
         d[0][i][j]='|';


    /**** CAVALIER *****/

    for(i=0;i<HAUTEUR_CASE;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[1][i][j]=' ';

   /*  for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[1][i][j]=' ';*/
            i=1;
    for(j=0;j<(LARGEUR_CASE-4)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][(LARGEUR_CASE-4)/2]='/';
    d[1][i][(LARGEUR_CASE-4)/2+1]='|';
    d[1][i][(LARGEUR_CASE-4)/2+2]='\\';
    d[1][i][(LARGEUR_CASE-4)/2+3]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][(LARGEUR_CASE-5)/2]='|';
    for(j=(LARGEUR_CASE-5)/2+1;j<(LARGEUR_CASE-5)/2+1+3;j++)
        d[1][i][j]=' ';
    d[1][i][j-1]='\\';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    for(j=(LARGEUR_CASE-3)/2-1;j<(LARGEUR_CASE-3)/2;j++)
        d[1][i][j]='|';
    d[1][i][j++]='\\';
    d[1][i][j]='\\';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[1][i][j]='_';
        d[1][i][LARGEUR_CASE-1-j]='_';
    }
    d[1][i][j++]='|';
    for(;j<(LARGEUR_CASE-5)/2+4;j++)
        d[1][i][j]='|';
     d[1][i][j]='|';


    /**** FOU *****/
    for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[2][i][j]=' ';

    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=' ';
    d[2][i][j++]='|';
    d[2][i][j++]='|';
    d[2][i][j++]='/';
    d[2][i][j++]=' ';

    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]='|';
    d[2][i][j++]='|';
    d[2][i][j++]='/';
    d[2][i][j++]='/';
    d[2][i][j++]='|';
    i++;

    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=' ';
    d[2][i][j++]='|';
    d[2][i][j++]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]='_';
        d[2][i][LARGEUR_CASE-1-j]='_';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[2][i][j]='|';

 /**** TOUR *****/

    for(i=0;i<HAUTEUR_CASE-3;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[3][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    d[3][i][j++]='|';
    d[3][i][j++]='_';
    d[3][i][j++]='|';
    d[3][i][j++]='_';
    d[3][i][j++]='|';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[3][i][j]='|';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]='_';
        d[3][i][LARGEUR_CASE-1-j]='_';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[3][i][j]='|';
    /**** ROI *****/

    for(i=0;i<HAUTEUR_CASE-5;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[4][i][j]=' ';

    for(j=0;j<(LARGEUR_CASE-1)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=' ';
    d[4][i][j++]='-';
    d[4][i][j++]='|';
    d[4][i][j++]='-';
    d[4][i][j++]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=' ';
    d[4][i][j++]='|';
    d[4][i][j++]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]='|';
    d[4][i][j++]='|';
    d[4][i][j++]='|';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[4][i][j]='_';
        d[4][i][LARGEUR_CASE-1-j]='_';
    }
    for(j;j<(LARGEUR_CASE-5)/2+5;j++)
        d[4][i][j]='|';
    /**** REINE *****/

    for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[5][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    d[5][i][j++]='|';
    d[5][i][j++]='_';
    d[5][i][j++]='|';
    d[5][i][j++]='_';
    d[5][i][j++]='|';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    d[5][i][j++]=' ';
    d[5][i][j++]='|';
    d[5][i][j++]='|';
    d[5][i][j++]='|';
    d[5][i][j++]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    for(j;j<(LARGEUR_CASE-3)/2+3;j++)
        d[5][i][j]='|';
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]='_';
        d[5][i][LARGEUR_CASE-1-j]='_';
    }
    for(j;j<(LARGEUR_CASE-5)/2+5;j++)
        d[5][i][j]='|';
}

void afficher_grille(piece* grid[][_SIZE])
{
    int i,j,k;

    char abscisse = 'A';
    int ordonnee = 8;
    char affche_couleur[]="BN";
    system("clear");
    unsigned char t;

    int cpt_i=0,cpt_j=0;
    for(i=0;i<_SIZE*HAUTEUR_CASE;i++)
    {

        for(j=0;j<_SIZE*LARGEUR_CASE;j++)
        {

            if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]==NULL)
            {
                if(i%HAUTEUR_CASE== HAUTEUR_CASE-1)
                    printf("_");
                else
                    printf(" ");
            }
            else
            {
                if( i%HAUTEUR_CASE== HAUTEUR_CASE-1 && j%LARGEUR_CASE==LARGEUR_CASE/2)
                    printf("%c",affche_couleur[grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->color]);
                else
                    printf("%c",dessin_piece[grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->type][i%HAUTEUR_CASE][j%LARGEUR_CASE]);

            }
            if(j%LARGEUR_CASE == LARGEUR_CASE-1)
                printf("|");

        }
       if(i%HAUTEUR_CASE==HAUTEUR_CASE/2)
            printf("  %i",ordonnee--);
       printf("\n");

    }
    printf("\n");
    for(j=0;j<_SIZE*LARGEUR_CASE;j++)
    {
        if(j%LARGEUR_CASE==LARGEUR_CASE/2)
            printf("%c ",abscisse++);
        else
            printf(" ");
    }
     printf("\n\n");
}
deplacement get_deplacement(char col1, int lig1,char col2, int lig2)
{
    position c1,c2;
    deplacement d;
    c1.colonne=col1-'A';
    c1.ligne = _SIZE-lig1;
    c2.colonne=col2-'A';
    c2.ligne = _SIZE-lig2;
    d.depart=c1;
    d.arrivee=c2;
    return d;
}

deplacement saisie_deplacement(echiquier grid,couleur player_color)
{

    int ok = 0;
    deplacement d1;
    char col,col2;
    int lig,lig2;
    while(ok==0)
    {
        scanf(" %c%i",&col,&lig);
        if(col>'H' || col < 'A' || lig <1 || lig>8 )
            printf("Coordonnees non valides. Recommencez\n");
        else
        {
            d1.depart.colonne=col-'A';
            d1.depart.ligne = _SIZE-lig;
            if(grid[d1.depart.ligne][d1.depart.colonne]==NULL)
                printf("Pas de piece ici. Recommencez\n");
            else if (grid[d1.depart.ligne][d1.depart.colonne]->color!= player_color)
                 printf("Cette piece n'est pas la votre. Recommencez\n");
            else
            {
                printf("Move ?");
                scanf(" %c%i",&col2,&lig2);
                if(col2>'H' || col2 < 'A' || lig2 <1 || lig2>8 )
                    printf("Coordonnees non valides. Recommencez\n");
                else
                {
                    d1 = get_deplacement(col,lig,col2,lig2);
                    ok=1;
                }
            }
        }
    }
    return d1;
}
