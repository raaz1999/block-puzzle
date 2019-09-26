#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED


typedef struct
    {
        SDL_Surface  *a =NULL;
        int x;
        int y;
        int b;
    }cellule;



void pliplou(int *b);



#endif // FICHIER_H_INCLUDED
