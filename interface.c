#include"interface.h"
/* Draw an ugly board*/
void affichage_jeu(echiquier grid){

    for (int i = 0; i < _SIZE; i++){
        printf("%d       ",_SIZE - i);
        printf("|");
        for (int j = 0; j < _SIZE; j++){
            if (grid[i][j] == NULL) {
                printf("      |");
            }else {
                if ((int)grid[i][j]->type == 0) printf(" P");
                if ((int)grid[i][j]->type == 1) printf(" C");
                if ((int)grid[i][j]->type == 2) printf(" F");
                if ((int)grid[i][j]->type == 3) printf(" T");
                if ((int)grid[i][j]->type == 4) printf(" R");
                if ((int)grid[i][j]->type == 5) printf(" D");
                if ((int)grid[i][j]->color== 0) printf("(b) |");
                    else printf("(n) |");
            }
        }
        printf("\n        ---------------------------------------------------------\n");
    }
    printf("           A      B      C       D      E      F      G      H");

}

/*Draw each piece*/
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

void init_possible(){
    int i,j;
    for(i = 0; i < _SIZE; i++){
        for(j = 0; j < _SIZE; j++){
            possible[i][j] = false;
        }
    }
}
void init_mate(){
    int i,j;
    for(i = 0; i < _SIZE; i++){
        for(j = 0;j < _SIZE; j++){
            mate[i][j] = false;
        }
    }
}

/*Design board with possible moves*/
void afficher_grille(piece* grid[][_SIZE])
{

    HANDLE  hConsoleOut;
    WORD    MyAttrib;
    int i,j;
    char abscisse = 'A';
    int ordonnee = 8;

    hConsoleOut = GetStdHandle( STD_OUTPUT_HANDLE );
    system("cls");

    //init_dessins_pieces(dessin_piece);

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
            if(possible[i/HAUTEUR_CASE][j/LARGEUR_CASE] || mate[i/HAUTEUR_CASE][j/LARGEUR_CASE]){
                if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]==NULL){
                    MyAttrib=BACKGROUND_GREEN|BACKGROUND_INTENSITY;
                }
                else{
                    MyAttrib=BACKGROUND_RED|BACKGROUND_INTENSITY;
                }
            }
            if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]==NULL)
            {
                SetConsoleTextAttribute(hConsoleOut,MyAttrib);
                printf(" ");
            }
            else
            {
                if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->color==BLANC){
                        MyAttrib=MyAttrib|FOREGROUND_RED|FOREGROUND_GREEN;
                }
                else{
                        MyAttrib=MyAttrib|FOREGROUND_RED;
                }

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

deplacement make_deplacement(int col1, int lig1, int col2, int lig2){
    deplacement d;
    d.depart.colonne = col1;
    d.depart.ligne   = lig1;
    d.arrivee.colonne= col2;
    d.arrivee.ligne  = lig2;
    return d;
}

void add_possible(int lig, int col){
    possible[lig][col] = true;
}

void pion_possible(echiquier grid, int lig, int col){
    int i;
    //PION
    if(grid[lig][col]->type == PION){
        if(grid[lig][col]->color == BLANC){
            if(lig == 6){
                for(i = lig-1; i >= lig-2; i--){
                    if(grid[i][col] == NULL){
                        add_possible(i,col);
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                if(grid[lig-1][col] == NULL){
                    add_possible(lig-1,col);
                }
            }
            if(lig > 0){
                if(col < 7){
                    if(grid[lig-1][col+1] != NULL && grid[lig-1][col+1]->color == NOIR){
                        add_possible(lig-1,col+1);
                    }
                }
                if(col > 0){
                    if(grid[lig-1][col-1] != NULL && grid[lig-1][col-1]->color == NOIR){
                        add_possible(lig-1,col-1);
                    }
                }
            }
        }
        if(grid[lig][col]->color == NOIR){
            if(lig == 1){
                for(i = lig+1; i <= lig+2; i++){
                    if(grid[i][col] == NULL){
                        add_possible(i,col);
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                if(grid[lig+1][col] == NULL){
                    add_possible(lig+1,col);
                }
            }
            if(lig < 7){
                if(col < 7){
                    if(grid[lig+1][col+1] != NULL && grid[lig+1][col+1]->color == BLANC){
                        add_possible(lig+1,col+1);
                    }
                }
                if(col > 0){
                    if(grid[lig+1][col-1] != NULL && grid[lig+1][col-1]->color == BLANC){
                        add_possible(lig+1,col-1);
                    }
                }
            }
        }
    }
}
void tour_possible(echiquier grid, int lig, int col){
    int i;
    //TOUR
    if(grid[lig][col]->type == TOUR){
        for(i = lig-1; i >= 0; i--){
            if(grid[i][col] == NULL){
                add_possible(i,col);
            }
            else if(grid[i][col]->color != grid[lig][col]->color){
                add_possible(i,col);
                break;
            }
            else{
                break;
            }
        }
        for(i = lig+1; i < _SIZE; i++){
            if(grid[i][col] == NULL){
                add_possible(i,col);
            }
            else if(grid[i][col]->color != grid[lig][col]->color){
                add_possible(i,col);
                break;
            }
            else{
                break;
            }
        }
        for(i = col-1; i >= 0; i--){
            if(grid[lig][i] == NULL){
                add_possible(lig,i);
            }
            else if(grid[lig][i]->color != grid[lig][col]->color){
                add_possible(lig,i);
                break;
            }
            else{
                break;
            }
        }
        for(i = col+1; i < _SIZE; i++){
            if(grid[lig][i] == NULL){
                add_possible(lig,i);
            }
            else if(grid[lig][i]->color != grid[lig][col]->color){
                add_possible(lig,i);
                break;
            }
            else{
                break;
            }
        }
    }
}
void cavalier_possible(echiquier grid, int lig, int col){
    if(grid[lig][col]->type == CAVALIER){
        if(lig > 1){
            if(col < 7 && (grid[lig-2][col+1] == NULL || grid[lig-2][col+1]->color != grid[lig][col]->color)){
                add_possible(lig-2,col+1);
            }
            if(col > 0 && (grid[lig-2][col-1] == NULL || grid[lig-2][col-1]->color != grid[lig][col]->color)){
                add_possible(lig-2,col-1);
            }
        }
        if(lig < 6){
            if(col < 7 && (grid[lig+2][col+1] == NULL || grid[lig+2][col+1]->color != grid[lig][col]->color)){
                add_possible(lig+2,col+1);
            }
            if(col > 0 && (grid[lig+2][col-1] == NULL || grid[lig+2][col-1]->color != grid[lig][col]->color)){
                add_possible(lig+2,col-1);
            }
        }
        if(col > 1){
            if(lig < 7 && (grid[lig+1][col-2] == NULL || grid[lig+1][col-2]->color != grid[lig][col]->color)){
                add_possible(lig+1,col-2);
            }
            if(lig > 0 && (grid[lig-1][col-2] == NULL || grid[lig-1][col-2]->color != grid[lig][col]->color)){
                add_possible(lig-1,col-2);
            }
        }
        if(col < 6){
            if(lig < 7 && (grid[lig+1][col+2] == NULL || grid[lig+1][col+2]->color != grid[lig][col]->color)){
                add_possible(lig+1,col+2);
            }
            if(lig > 0 && (grid[lig-1][col+2] == NULL || grid[lig-1][col+2]->color != grid[lig][col]->color)){
                add_possible(lig-1,col+2);
            }
        }
    }
}

void fou_possible(echiquier grid, int lig, int col){
    int i;
    if(grid[lig][col]->type == FOU)
    {
        for(i = 1; lig+i < _SIZE; i++){
            if(col+i < _SIZE){
                if(grid[lig+i][col+i] == NULL){
                    add_possible(lig+i,col+i);
                }
                else if(grid[lig+i][col+i]->color != grid[lig][col]->color){
                    add_possible(lig+i,col+i);
                    break;
                }
                else{
                    break;
                }
            }
        }
        for(i = 1; lig-i >= 0; i++){
            if(col+i < _SIZE){
                if(grid[lig-i][col+i] == NULL){
                    add_possible(lig-i,col+i);
                }
                else if(grid[lig-i][col+i]->color != grid[lig][col]->color){
                    add_possible(lig-i,col+i);
                    break;
                }
                else{
                    break;
                }
            }
        }
        for(i = 1; lig+i < _SIZE; i++){
            if(col-i >= 0){
                if(grid[lig+i][col-i] == NULL){
                    add_possible(lig+i,col-i);
                }
                else if(grid[lig+i][col-i]->color != grid[lig][col]->color){
                    add_possible(lig+i,col-i);
                    break;
                }
                else{
                    break;
                }
            }
        }
        for(i = 1; lig-i >= 0; i++){
            if(col-i >= 0){
                if(grid[lig-i][col-i] == NULL){
                    add_possible(lig-i,col-i);
                }
                else if(grid[lig-i][col-i]->color != grid[lig][col]->color){
                    add_possible(lig-i,col-i);
                    break;
                }
                else{
                    break;
                }
            }
        }
    }
}

void dame_possible(echiquier grid, int lig, int col){
    int i;
    if (grid[lig][col]->type == DAME){
        //TOUR
        for(i = lig-1; i >= 0; i--){
            if(grid[i][col] == NULL){
                add_possible(i,col);
            }
            else if(grid[i][col]->color != grid[lig][col]->color){
                add_possible(i,col);
                break;
            }
            else{
                break;
            }
        }
        for(i = lig+1; i < _SIZE; i++){
            if(grid[i][col] == NULL){
                add_possible(i,col);
            }
            else if(grid[i][col]->color != grid[lig][col]->color){
                add_possible(i,col);
                break;
            }
            else{
                break;
            }
        }
        for(i = col-1; i >= 0; i--){
            if(grid[lig][i] == NULL){
                add_possible(lig,i);
            }
            else if(grid[lig][i]->color != grid[lig][col]->color){
                add_possible(lig,i);
                break;
            }
            else{
                break;
            }
        }
        for(i = col+1; i < _SIZE; i++){
            if(grid[lig][i] == NULL){
                add_possible(lig,i);
            }
            else if(grid[lig][i]->color != grid[lig][col]->color){
                add_possible(lig,i);
                break;
            }
            else{
                break;
            }
        }
    //////////////////////FOU/////////////////////////
        for(i = 1; lig+i < _SIZE; i++){
            if(col+i < _SIZE){
                if(grid[lig+i][col+i] == NULL){
                    add_possible(lig+i,col+i);
                }
                else if(grid[lig+i][col+i]->color != grid[lig][col]->color){
                    add_possible(lig+i,col+i);
                    break;
                }
                else{
                    break;
                }
            }
        }
        for(i = 1; lig-i >= 0; i++){
            if(col+i < _SIZE){
                if(grid[lig-i][col+i] == NULL){
                    add_possible(lig-i,col+i);
                }
                else if(grid[lig-i][col+i]->color != grid[lig][col]->color){
                    add_possible(lig-i,col+i);
                    break;
                }
                else{
                    break;
                }
            }
        }
        for(i = 1; lig+i < _SIZE; i++){
            if(col-i >= 0){
                if(grid[lig+i][col-i] == NULL){
                    add_possible(lig+i,col-i);
                }
                else if(grid[lig+i][col-i]->color != grid[lig][col]->color){
                    add_possible(lig+i,col-i);
                    break;
                }
                else{
                    break;
                }
            }
        }
        for(i = 1; lig-i >= 0; i++){
            if(col-i >= 0){
                if(grid[lig-i][col-i] == NULL){
                    add_possible(lig-i,col-i);
                }
                else if(grid[lig-i][col-i]->color != grid[lig][col]->color){
                    add_possible(lig-i,col-i);
                    break;
                }
                else{
                    break;
                }
            }
        }
    }
}

void roi_possible(echiquier grid,int lig,int col){
    if (grid[lig][col]->type == ROI){
        if (lig < 8){
            if (col > 0 && (grid[lig+1][col-1]== NULL || grid[lig+1][col-1]->color != grid[lig][col]->color)){
                add_possible(lig+1,col-1);
            }
            if (grid[lig+1][col]== NULL || grid[lig+1][col]->color != grid[lig][col]->color){
                add_possible(lig+1,col);
            }
            if (col < 8 && (grid[lig+1][col+1]== NULL || grid[lig+1][col+1]->color != grid[lig][col]->color)){
                add_possible(lig+1,col+1);
            }
        }
        if (lig > 0){
            if (col > 0 && (grid[lig-1][col-1]== NULL || grid[lig-1][col-1]->color != grid[lig][col]->color)){
                add_possible(lig+1,col-1);
            }
            if (grid[lig-1][col]== NULL || grid[lig-1][col]->color != grid[lig][col]->color){
                add_possible(lig+1,col);
            }
            if (col < 8 && (grid[lig-1][col+1]== NULL || grid[lig-1][col+1]->color != grid[lig][col]->color)){
                add_possible(lig-1,col+1);
            }
        }
        if (col > 0 && (grid[lig][col-1]== NULL || grid[lig][col-1]->color != grid[lig][col]->color)){
            add_possible(lig+1,col-1);
        }
        if (col < 8 && (grid[lig][col+1]== NULL || grid[lig][col+1]->color != grid[lig][col]->color)){
            add_possible(lig,col+1);
        }
    }
}

void move_possible(echiquier grid, int lig, int col){
    pion_possible(grid,lig,col);
    tour_possible(grid,lig,col);
    cavalier_possible(grid,lig,col);
    fou_possible(grid,lig,col);
    dame_possible(grid,lig,col);
    roi_possible(grid,lig,col);
}

void add_mate(int lig,int col){
    mate[lig][col]=true;
}

int check_mate(echiquier grid,couleur color){
    int i,j,check=0;
    init_mate();
    for (i = 0;i < _SIZE;i++){
        for (j = 0;j < _SIZE;j++){
            if (grid[i][j] != NULL){
                if (grid[i][j]->color != color){
                    move_possible(grid,i,j);
                }
            }
        }
    }
    for (i = 0;i < _SIZE; i++){
        for (j = 0;j < _SIZE;j++){
            if (grid[i][j] != NULL){
                if (grid[i][j]->type==ROI && grid[i][j]->color==color && possible[i][j])
                {
                    add_mate(i,j);
                    check++;
                }
            }
        }
    }
    init_possible();
    return check;
}

deplacement saisie_deplacement(echiquier grid,couleur player_color)
{

    int ok = 1;
    deplacement d1;
    char col,col2;
    int lig,lig2;
    while(ok==1)
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
                init_possible();
                move_possible(grid,d1.depart.ligne,d1.depart.colonne);
                afficher_grille(grid);
                printf("Move ?");
                scanf(" %c%i",&col2,&lig2);
                if(col2>'H' || col2 < 'A' || lig2 <1 || lig2>8 || !possible[_SIZE-lig2][col2-'A'])
                    printf("Coordonnees non valides. Recommencez\n");
                else
                {
                    d1 = get_deplacement(col,lig,col2,lig2);
                    deplacer_piece(grid,d1);
                    ok = check_mate(grid,player_color);
                    if (ok == 1){
                        d1 = get_deplacement(col2,lig2,col,lig);
                        deplacer_piece(grid,d1);
                        printf("Echoue. Recommencez\n");
                    }
                }
            }
        }
    }
    return d1;
}
