
#ifndef FCT_H_INCLUDED
#define FCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <time.h>

#include <string.h>

#define hauteurdelafentre2 680
#define largeurdelafentre2 1000+50
#define hauteurdelafentre 680
#define largeurdelafentre 500
#define cordob1surlaxex 54
#define cordob1surlaxey 500
#define cordob2surlaxex (54+330)/2
#define cordob2surlaxey 500
#define cordob3surlaxex 350-20
#define cordob3surlaxey 500
#define cordopremierecasesurx 54
#define cordopremierecasesury  50
#define TAILLEBLOCK 40
typedef struct
    {

SDL_Surface* a;
        int x;
        int y;
        int b;
    }cellule;


typedef struct
{
    char date[100];
    char nom[30];
    int score;
}joueur;
int placer(cellule mat[][10],SDL_Surface *b[],int indice,SDL_Surface *t[],int px, int py,SDL_Surface *clr[]);
int nombreAleatoire(int nombreMax);
int verifier(SDL_Surface *b,cellule c[10][10],int a,int m,SDL_Surface *t[27]);
int remplie(cellule c[][10],SDL_Surface *b[],SDL_Surface *t[]);
int rempliepiece(cellule c[][10],SDL_Surface *m,SDL_Surface *t[]);
int supscore(SDL_Surface* b[],int indice,cellule c[][10],int x,int y,SDL_Surface* t[],SDL_Surface* color[]);
void saveBestScore(joueur *newbest);
void saveScore(joueur *candidate);
void sauvgarde(joueur candidate);
void sauvgardeancien1(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[], int* n);
void sauvgardeancien2(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[],int n);
void sauvgardeancien3(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[],cellule mat[][10],SDL_Surface*b2[],int resulta1,int resulta2);
void sauvgardeancien4(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[],cellule mat[][10],SDL_Surface*b2[],int*resulta1,int*resulta2);
void attent(cellule c[][10],int *resulta,SDL_Surface*ecran,int *o,int *u, int *w,SDL_Surface*t[],SDL_Surface*b[]);
void attent2(cellule c[][10],int *score1,int *score2,SDL_Surface*ecran,int *o,int *u, int *w,SDL_Surface*t[],SDL_Surface*b[],cellule mat[][10],SDL_Surface*b2[]);
void part1 (SDL_Surface *ecran);
void part1SVG (SDL_Surface *ecran);
void cpytab(int t[][10], cellule c[][10]);
int placervr(int mat[][10],SDL_Surface *b[],int indice,SDL_Surface *t[],int px, int py);
int supscorevr(SDL_Surface* b[],int indice,int c[][10],int x,int y,SDL_Surface* t[],SDL_Surface* color[]);
void part2 (SDL_Surface* ecran);
void part3 (SDL_Surface *ecran);
void part3SVG (SDL_Surface *ecran);
void m3(SDL_Surface *ecran);
void m1(SDL_Surface *ecran);
void menu (SDL_Surface *ecran);
#endif // FCT_H_INCLUDED

