#include "fct.c"

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *texte = NULL,*p1s=NULL,*p2s=NULL,*p3s=NULL;
    SDL_Rect position,p1p,p2p,p3p;
    SDL_Event event;
    TTF_Font *police = NULL,*police2 = NULL;
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    int continuer = 1;
    int tempsActuel = 0, tempsPrecedent = 0, compteur = 0;
    char titre[20] = "BLOCK PUZZEL",p1[]="partie 1",p2[]="partie 2",p3[]="partie 3";

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();


    ecran = SDL_SetVideoMode(700, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("BLOCK PUZZEL", NULL);

menu(ecran);

    TTF_Quit();


    SDL_Quit();

    return EXIT_SUCCESS;
}

