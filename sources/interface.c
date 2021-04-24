#include"interface.h"


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
    for(j=(LARGEUR_CASE-3)/2;j<(LARGEUR_CASE-3)/2+3;j++)
        d[0][i][j]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[0][i][j]=' ';
        d[0][i][LARGEUR_CASE-1-j]=' ';
    }
    d[0][i][(LARGEUR_CASE-3)/2]=220;
    d[0][i][(LARGEUR_CASE-3)/2+1]=219;
    d[0][i][(LARGEUR_CASE-3)/2+2]=220;
    i++;
    d[0][i][0]=' ';
    d[0][i][LARGEUR_CASE-1]=' ';
    for(j=(LARGEUR_CASE-5)/2;j<(LARGEUR_CASE-5)/2+5;j++)
         d[0][i][j]=219;

    /**** CAVALIER *****/
     for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[1][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-4)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][(LARGEUR_CASE-4)/2]=220;
    d[1][i][(LARGEUR_CASE-4)/2+1]=219;
    d[1][i][(LARGEUR_CASE-4)/2+2]=223;
    d[1][i][(LARGEUR_CASE-4)/2+3]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][(LARGEUR_CASE-5)/2]=219;
    for(j=(LARGEUR_CASE-5)/2+1;j<(LARGEUR_CASE-5)/2+1+3;j++)
        d[1][i][j]=' ';
    d[1][i][j]=223;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    for(j=(LARGEUR_CASE-3)/2-1;j<(LARGEUR_CASE-3)/2+1;j++)
        d[1][i][j]=219;
    d[1][i][j]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][j++]=220;
    for(;j<(LARGEUR_CASE-5)/2+4;j++)
        d[1][i][j]=219;
     d[1][i][j]=220;


    /**** FOU *****/
    for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[2][i][j]=' ';

    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=220;
    d[2][i][j++]=219;
    d[2][i][j++]=219;
    d[2][i][j++]=223;
    d[2][i][j++]=' ';

    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=219;
    d[2][i][j++]=219;
    d[2][i][j++]=220;
    d[2][i][j++]=220;
    d[2][i][j++]=219;
    i++;

    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=220;
    d[2][i][j++]=219;
    d[2][i][j++]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[2][i][j]=219;

 /**** TOUR *****/

    for(i=0;i<HAUTEUR_CASE-3;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[3][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    d[3][i][j++]=219;
    d[3][i][j++]=' ';
    d[3][i][j++]=219;
    d[3][i][j++]=' ';
    d[3][i][j++]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[3][i][j]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[3][i][j]=219;
    /**** ROI *****/

    for(i=0;i<HAUTEUR_CASE-5;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[4][i][j]=' ';

    for(j=0;j<(LARGEUR_CASE-1)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=' ';
    d[4][i][j++]=223;
    d[4][i][j++]=219;
    d[4][i][j++]=223;
    d[4][i][j++]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=220;
    d[4][i][j++]=219;
    d[4][i][j++]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=219;
    d[4][i][j++]=219;
    d[4][i][j++]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[4][i][j]=219;
    /**** DAME *****/

    for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[5][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    d[5][i][j++]=219;
    d[5][i][j++]=220;
    d[5][i][j++]=219;
    d[5][i][j++]=220;
    d[5][i][j++]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    d[5][i][j++]=220;
    d[5][i][j++]=219;
    d[5][i][j++]=219;
    d[5][i][j++]=219;
    d[5][i][j++]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-3)/2+3;j++)
        d[5][i][j]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[5][i][j]=219;
    i++;


}

void afficher_grille(piece* grid[][_SIZE])
{

    HANDLE  hConsoleOut;
    WORD    MyAttrib;
    int i,j;
    char abscisse = 'A';
    int ordonnee = 8;

    hConsoleOut = GetStdHandle( STD_OUTPUT_HANDLE );
    system("cls");


    for(i=0;i<_SIZE*HAUTEUR_CASE;i++)
    {
        for(j=0;j<_SIZE*LARGEUR_CASE;j++)
        {
            if((i/HAUTEUR_CASE)%2==0)
            {
                if(((i/HAUTEUR_CASE)*_SIZE+j/LARGEUR_CASE)%2==0){
                    MyAttrib=BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_BLUE;
                }
                else
                    MyAttrib=0;
            }
            else
            {
                if(((i/HAUTEUR_CASE)*_SIZE+j/LARGEUR_CASE)%2==0){
                    MyAttrib=0;
                }
                else
                    MyAttrib=BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_BLUE;
            }
            if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]==NULL)
            {
                SetConsoleTextAttribute(hConsoleOut,MyAttrib);
                printf(" ");
            }
            else
            {
                if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->color==BLANC)
                    MyAttrib=MyAttrib|FOREGROUND_RED|FOREGROUND_GREEN;
                else
                    MyAttrib=MyAttrib|FOREGROUND_RED;
                SetConsoleTextAttribute(hConsoleOut,MyAttrib);
                printf("%c",dessin_piece[grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->type][i%HAUTEUR_CASE][j%LARGEUR_CASE]);
            }
       }
        SetConsoleTextAttribute(hConsoleOut,FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
        if(i%HAUTEUR_CASE==HAUTEUR_CASE/2)
            printf("  %i",ordonnee--);
        printf("\n");

    }
    printf("\n");
    for(j=0;j<_SIZE*LARGEUR_CASE;j++)
    {
        if(j%LARGEUR_CASE==LARGEUR_CASE/2)
            printf("%c",abscisse++);
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
