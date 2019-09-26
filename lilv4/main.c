#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include "fct.h"

#define hauteurdelafentre 680
#define largeurdelafentre 500
#define cordob1surlaxex 50
#define cordob1surlaxey 500
#define cordob2surlaxex 200
#define cordob2surlaxey 500
#define cordob3surlaxex 350
#define cordob3surlaxey 500
#define cordopremierecasesurx 54
#define cordopremierecasesury  50


int main (int argc, char *argv[])
{
    SDL_Surface *ecran=NULL,*man=NULL,*b[4]= {NULL},*t[27]= {NULL};
    cellule c[10][10];
    int  i,j,k,r;
    SDL_Event event;
    SDL_Rect po,pu,pi,pa;
    po.x=cordopremierecasesurx;//position de la premiere case
    po.y=cordopremierecasesury;
    int cont=1,on=0,z;
    SDL_Init(SDL_INIT_VIDEO);
    ecran=SDL_SetVideoMode(largeurdelafentre,hauteurdelafentre,32,SDL_HWSURFACE|SDL_DOUBLEBUF );
    SDL_WM_SetCaption("rayan !", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));// ecran recois la couleur blanc
    b[1]=IMG_Load("1v.bmp");
    b[2]=IMG_Load("4b.bmp");
    b[3]=IMG_Load("6v.bmp");
    for(i=0; i<10; i++)
    {

        po.x=cordopremierecasesurx;
        for(j=0; j<10; j++)
        {
            c[i][j].a=IMG_Load("carre.png");
            c[i][j].x= po.x;
            c[i][j].y= po.y;
            c[i][j].b=0;
            po.x=po.x+40;

        }
        po.y=po.y+40;
    }
    while(cont)
    {
        SDL_WaitEvent(&event);

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                pu.x=c[i][j].x;
                pu.y=c[i][j].y;
                man=c[i][j].a;
                SDL_BlitSurface(man, NULL, ecran, &pu);
            }
        }
        pu.y=cordob1surlaxey;
        pu.x=cordob1surlaxex;




        if(b[1]!=NULL)//b1 recoit les cordonne (50,500)
        {
            SDL_SetColorKey(b[1], SDL_SRCCOLORKEY, SDL_MapRGB(b[1]->format,255,255,255));
            SDL_BlitSurface(b[1], NULL, ecran, &pu);
        }
        pi.x=cordob2surlaxex;
        pi.y=cordob2surlaxey;

        SDL_SetColorKey(b[2], SDL_SRCCOLORKEY, SDL_MapRGB(b[2]->format,255,255,255));
        SDL_BlitSurface(b[2], NULL, ecran, &pi);
        pa.x=cordob3surlaxex;
        pa.y=cordob3surlaxey;

        SDL_SetColorKey(b[3], SDL_SRCCOLORKEY, SDL_MapRGB(b[3]->format,255,255,255));
        SDL_BlitSurface(b[3], NULL, ecran, &pa);

        switch(event.type)
        {
        case SDL_QUIT:
            cont=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if((event.motion.x>=50)&&(event.motion.y>=500)&&(event.motion.x<170)&&(event.motion.y<=660)&&(b[1]!=NULL))//
            {
                // cest condition donne a b1 son espace  comme un carre si tu appui dessu b1 bouje
                on=1;
            }
            if((event.motion.x>=170)&&(event.motion.y>=500)&&(event.motion.x<290)&&(event.motion.y<=660))
            {
                on=2;
            }
            if((event.motion.x>=290)&&(event.motion.y>=500)&&(event.motion.x<410)&&(event.motion.y<=660))
            {
                on=3;
            }
            break;
        case SDL_MOUSEMOTION:
            if((on==1)&&(b[1]!=NULL))
            {
                pu.x=event.motion.x;
                pu.y=event.motion.y;
                SDL_BlitSurface(b[1], NULL, ecran, &pu);

            }
            if(on==2)
            {
                pi.x=event.motion.x;
                pi.y=event.motion.y;
                SDL_BlitSurface(b[2], NULL, ecran, &pi);
            }
            if(on==3)
            {
                pa.x=event.motion.x;
                pa.y=event.motion.y;
                SDL_BlitSurface(b[3], NULL, ecran, &pa);
            }
            break;
        case SDL_MOUSEBUTTONUP:
            if((on==1)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454)&&(b[1]!=NULL))
            {

                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                c[k][r].a=IMG_Load("rouge.png");
                c[k][r].b=1;
                c[k][r+1].a=IMG_Load("rouge.png");
                c[k][r+1].b=1;
                c[k][r+2].a=IMG_Load("rouge.png");
                c[k][r+2].b=1;
                c[k+1][r+1].a=IMG_Load("rouge.png");
                c[k+1][r+1].b=1;
                b[1]=NULL;
                on=0;
            }
            if((on==2)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                c[k][r].a=IMG_Load("bleu.png");
                c[k][r].b=1;
                c[k+1][r].a=IMG_Load("bleu.png");
                c[k+1][r].b=1;
                c[k+1][r+1].a=IMG_Load("bleu.png");
                c[k+1][r+1].b=1;
                on=0;
            }
            if((on==3)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                c[k][r].a=IMG_Load("rouge.png");
                c[k][r].b=1;
                c[k+1][r].a=IMG_Load("rouge.png");
                c[k+1][r].b=1;
                c[k+2][r].a=IMG_Load("rouge.png");
                c[k+2][r].b=1;
                c[k+3][r].a=IMG_Load("rouge.png");
                c[k+3][r].b=1;

                on=0;
            }
            on=0;
            break;

        }
        for(i=0; i<10; i++)
        {
            z=1;
            for(j=0; j<10; j++)
            {
                if(c[i][j].b!=1)
                {
                    z=0;
                }
            }
            if(z==1)
            {
                for(j=0; j<10; j++)
                {
                    c[i][j].a=IMG_Load("carre.png");
                    c[i][j].b=0;
                }
            }
        }
        for(j=0; j<10; j++)
        {
            z=1;
            for(i=0; i<10; i++)
            {
                if(c[i][j].b!=1)
                {
                    z=0;
                }
            }
            if(z==1)
            {
                for(i=0; i<10; i++)
                {
                    c[i][j].a=IMG_Load("carre.png");
                    c[i][j].b=0;

                }

            }
        }
        SDL_Flip(ecran);
    }
    SDL_Quit();

}
