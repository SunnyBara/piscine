#include <stdio.h>
int SIZE_X = 5 ;
int SIZE_Y  = 5 ;
int verificationligne( int i, int j, char game[SIZE_X] [SIZE_Y])
{
    char l = 0;
    while (i<SIZE_Y)
    {
	while (j < (SIZE_X-3))
	{
	    if  (game[i][j] == game[i][j+1] && game[i][j] == game[i][j+2] && game[i][j+3] == game[i][j])
	    {
		if (game[i][j] == 'O')
		{
		    l = l + 1;
		}
		else if (game[i][j] == 'X')
		{
		    l = l + 2;
	       	}
	    }
	    j++;
	}	
	i++;
	j=0;
    }
    return(l);
}
int verificationcolonne( int i, int j, char game[SIZE_X] [SIZE_Y])
{
    char c = 0;
    while (j < SIZE_X)
    {
	while (i < (SIZE_Y-3))
	{
	    if  (game[i][j] == game[i+1][j] && game[i+2][j] == game[i+3][j] && game[i+2][j] == game[i][j])
	    {
		if (game[i][j] == 'O')
		{
		    c = c + 1;
	     	}
		else if (game[i][j] == 'X')
		{
		    c = c + 2;
		}
	    }
	    i++;
	}	
	j++;
	i=0;
    }
    return(c);
}
int verificationdiagoxy( int i, int j, char game[SIZE_X] [SIZE_Y])
{
    char dxy = 0;
    while (j<SIZE_X-3)
    {
	if  (game[i][j] == game[i+1][j+1] && game[i+2][j+2] == game[i+3][j+3] && game[i+2][j+2] == game[i][j])
	{
	    if (game[i][j] == 'O')
	    {
		dxy = dxy + 1;
	    }
	    else if (game[i][j] == 'X')
	    {
		dxy = dxy + 2;
	    }
	}
    
	i++;
	j++;
    }
    return(dxy);
}
int verificationdiagoop( int i, int j, char game[SIZE_X] [SIZE_Y])
{
    char dop = 0;
    while (j<SIZE_X-3)
    {
	if  (game[i][j] == game[i-1][j+1] && game[i-2][j+2] == game[i-3][j+3] && game[i-2][j+2] == game[i][j])
	{
	    if (game[i][j] == 'O')
	    {
		dop = dop + 1;
	    }
	    else if (game[i][j] == 'X')
	    {
		dop = dop + 2;
	    }
	}
    
	i--;
	j++;
    }  
    return(dop);    
}
    
int puissance4( char game[SIZE_X] [SIZE_Y])
{
    char Ligne   = verificationligne(0, 0, game);
    char colonne = verificationcolonne(0, 0, game);
    char diagoxy = verificationdiagoxy(0, 0, game);
    char diagoop = verificationdiagoop((SIZE_Y - 1) , 0, game);
    char somme   = Ligne + colonne + diagoxy + diagoop;

    if (somme == 1)
    {
	return(1);
    }
    else if (somme == 2)
    {
	return(2);
    }
    else
    {
	return(0);
    }
     
}

int main(int argc, char **argv)
{
    char mat[SIZE_X][SIZE_Y];
    mat[0][0] = 'X';
    mat[0][1] = 'O';
    mat[0][2] = 'O';
    mat[0][3] = '-';
    mat[0][4] = '-';
    mat[1][0] = 'X';
    mat[1][1] = '-';
    mat[1][2] = 'X';
    mat[1][3] = '-';
    mat[1][4] = '-';
    mat[2][0] = 'X';
    mat[2][1] = '-';
    mat[2][2] = 'X';
    mat[2][3] = '-';
    mat[2][4] = 'X';
    mat[3][0] = 'X';
    mat[3][1] = 'O';
    mat[3][2] = 'X';
    mat[3][3] = '-';
    mat[3][4] = '-';
    mat[4][0] = 'O';
    mat[4][1] = '-';
    mat[4][2] = 'X';
    mat[4][3] = '-';
    mat[4][4] = '-';
    return( puissance4(mat));
}
