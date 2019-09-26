#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include "fct.h"
#include <string.h>

int placer(cellule mat[][10],SDL_Surface *b[],int indice,SDL_Surface *t[],int px, int py,SDL_Surface *clr[])
    {

if(b[indice]==t[0])
{
        mat[px][py].a=clr[0];
        mat[px][py].b=1;
        return(1*10);

}


if(b[indice]==t[1])
{
    mat[px][py].a=clr[1];
    mat[px][py].b=2;
    mat[px][py+1].a=clr[1];
     mat[px][py+1].b=2;
       return(2*10);

}
if(b[indice]==t[2])
{
mat[px][py].a=clr[1];
mat[px][py].b=3;
mat[px+1][py].a=clr[1];
mat[px+1][py].b=3;
return(2*10);
}
if(b[indice]==t[3])
{
mat[px][py].a=clr[2];
mat[px][py].b=3;
mat[px][py+1].a=clr[2];
mat[px][py+1].b=3;
mat[px][py+2].a=clr[2];
mat[px][py+2].b=3;
return(3*10);
}
if(b[indice]==t[4])
{
mat[px][py].a=clr[2];
mat[px][py].b=3;
mat[px+1][py].a=clr[2];
mat[px+1][py].b=3;
mat[px+2][py].a=clr[2];
mat[px+2][py].b=3;
return(3*10);
}
if(b[indice]==t[5])
{
mat[px][py].a=clr[2];
mat[px][py].b=3;
mat[px][py+1].a=clr[2];
mat[px][py+1].b=3;
mat[px+1][py+1].a=clr[2];
mat[px+1][py+1].b=3;
return(3*10);
}
if(b[indice]==t[6])
{
mat[px][py].a=clr[2];
mat[px][py].b=3;
mat[px+1][py].a=clr[2];
mat[px+1][py].b=3;
mat[px+1][py+1].a=clr[2];
mat[px+1][py+1].b=3;
return(3*10);
}
if(b[indice]==t[7])
{
mat[px][py+1].a=clr[2];
mat[px][py+1].b=3;
mat[px+1][py].a=clr[2];
mat[px+1][py].b=3;
mat[px+1][py+1].a=clr[2];
mat[px+1][py+1].b=3;
return(3*10);
}
if(b[indice]==t[8])
{

mat[px][py].a=clr[2];
mat[px][py].b=3;
mat[px][py+1].a=clr[2];
mat[px][py+1].b=3;
mat[px+1][py].a=clr[2];
mat[px+1][py].b=3;
return(3*10);
}
if(b[indice]==t[9])
{
mat[px][py].a=clr[3];
mat[px][py].b=4;
mat[px][py+1].a=clr[3];
mat[px][py+1].b=4;
mat[px+1][py].a=clr[3];
mat[px+1][py].b=4;
mat[px+1][py+1].a=clr[3];
mat[px+1][py+1].b=4;
return(4*10);
}
if(b[indice]==t[10])
{
mat[px][py].a=clr[3];
mat[px][py].b=4;
mat[px+1][py].a=clr[3];
mat[px+1][py].b=4;
mat[px+1][py+1].a=clr[3];
mat[px+1][py+1].b=4;
mat[px+2][py].a=clr[3];
mat[px+2][py].b=4;
return(4*10);

}
if(b[indice]==t[11])
{
mat[px][py].a=clr[3];
mat[px][py].b=4;
mat[px][py+1].a=clr[3];
mat[px][py+1].b=4;
mat[px][py+2].a=clr[3];
mat[px][py+2].b=4;
mat[px+1][py+1].a=clr[3];
mat[px+1][py+1].b=4;
return(4*10);

}
if(b[indice]==t[12])
{

mat[px][py+1].a=clr[3];
mat[px][py+1].b=4;
mat[px+1][py].a=clr[3];
mat[px+1][py].b=4;
mat[px+1][py+1].a=clr[3];
mat[px+1][py+1].b=4;
mat[px+2][py+1].a=clr[3];
mat[px+2][py+1].b=4;
return(4*10);
}
if(b[indice]==t[13])
{
mat[px+1][py].a=clr[3];
mat[px+1][py].b=4;
mat[px+1][py+1].a=clr[3];
mat[px+1][py+1].b=4;
mat[px][py+1].a=clr[3];
mat[px][py+1].b=4;
mat[px+1][py+2].a=clr[3];
mat[px+1][py+2].b=4;

return(4*10);
}
if(b[indice]==t[14])
{

mat[px][py].a=clr[3];
mat[px][py].b=4;
mat[px+1][py].a=clr[3];
mat[px+1][py].b=4;
mat[px+2][py].a=clr[3];
mat[px+2][py].b=4;
mat[px+3][py].a=clr[3];
mat[px+3][py].b=4;
return(4*10);
}
if(b[indice]==t[15])
{
mat[px][py].a=clr[3];
mat[px][py].b=4;
mat[px][py+1].a=clr[3];
mat[px][py+1].b=4;
mat[px][py+2].a=clr[3];
mat[px][py+2].b=4;
mat[px][py+3].a=clr[3];
mat[px][py+3].b=4;
return(4*10);
}
if(b[indice]==t[16])
{
mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px+1][py].a=clr[4];
mat[px+1][py].b=5;
mat[px+2][py].a=clr[4];
mat[px+2][py].b=5;
mat[px+3][py].a=clr[4];
mat[px+3][py].b=5;
mat[px+4][py].a=clr[4];
mat[px+4][py].b=5;
return(5*10);
}
if(b[indice]==t[17])
{
mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px][py+1].a=clr[4];
mat[px][py+1].b=5;
mat[px][py+2].a=clr[4];
mat[px][py+2].b=5;
mat[px][py+3].a=clr[4];
mat[px][py+3].b=5;
mat[px][py+4].a=clr[4];
mat[px][py+4].b=5;
return(5*10);
}
if(b[indice]==t[18])
{

mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px][py+1].a=clr[4];
mat[px][py+1].b=5;
mat[px][py+2].a=clr[4];
mat[px][py+2].b=5;
mat[px+1][py+2].a=clr[4];
mat[px+1][py+2].b=5;
mat[px+2][py+2].a=clr[4];
mat[px+2][py+2].b=5;
return(5*10);
}
if(b[indice]==t[19])
{

mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px+1][py].a=clr[4];
mat[px+1][py].b=5;
mat[px+2][py].a=clr[4];
mat[px+2][py].b=5;
mat[px+2][py+1].a=clr[4];
mat[px+2][py+1].b=5;
mat[px+2][py+2].a=clr[4];
mat[px+2][py+2].b=5;
return(5*10);
}
if(b[indice]==t[20])
{

mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px][py+1].a=clr[4];
mat[px][py+1].b=5;
mat[px][py+2].a=clr[4];
mat[px][py+2].b=5;
mat[px+1][py].a=clr[4];
mat[px+1][py].b=5;
mat[px+2][py].a=clr[4];
mat[px+2][py].b=5;
return(5*10);
}
if(b[indice]==t[21])
{

mat[px+2][py].a=clr[4];
mat[px+2][py].b=5;
mat[px+2][py+1].a=clr[4];
mat[px+2][py+1].b=5;
mat[px+2][py+2].a=clr[4];
mat[px+2][py+2].b=5;
mat[px+1][py+2].a=clr[4];
mat[px+1][py+2].b=5;
mat[px][py+2].a=clr[4];
mat[px][py+2].b=5;
return(5*10);
}
if(b[indice]==t[22])
{
mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px][py+1].a=clr[4];
mat[px][py+1].b=5;
mat[px+1][py+1].a=clr[4];
mat[px+1][py+1].b=5;
mat[px+2][py+1].a=clr[4];
mat[px+2][py+1].b=5;
mat[px+2][py].a=clr[4];
mat[px+2][py].b=5;
return(5*10);
}
if(b[indice]==t[23])
{
mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px+1][py].a=clr[4];
mat[px+1][py].b=5;
mat[px+1][py+1].a=clr[4];
mat[px+1][py+1].b=5;
mat[px+1][py+2].a=clr[4];
mat[px+1][py+2].b=5;
mat[px][py+2].a=clr[4];
mat[px][py+2].b=5;
return(5*10);
}
if(b[indice]==t[24])
{
mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px+1][py].a=clr[4];
mat[px+1][py].b=5;
mat[px+2][py].a=clr[4];
mat[px+2][py].b=5;
mat[px][py+1].a=clr[4];
mat[px][py+1].b=5;
mat[px+2][py+1].a=clr[4];
mat[px+2][py+1].b=5;
return(5*10);
}
if(b[indice]==t[25])
{
mat[px][py].a=clr[4];
mat[px][py].b=5;
mat[px][py+1].a=clr[4];
mat[px][py+1].b=5;
mat[px][py+2].a=clr[4];
mat[px][py+2].b=5;
mat[px+1][py].a=clr[4];
mat[px+1][py].b=5;
mat[px+1][py+2].a=clr[4];
mat[px+1][py+2].b=5;
return(5*10);
}
if(b[indice]==t[26])
{
mat[px][py].a=clr[5];
mat[px][py].b=6;
mat[px][py+1].a=clr[5];
mat[px][py+1].b=6;
mat[px][py+2].a=clr[5];
mat[px][py+2].b=6;
mat[px+1][py].a=clr[5];
mat[px+1][py].b=6;
mat[px+1][py+1].a=clr[5];
mat[px+1][py+1].b=6;
mat[px+1][py+2].a=clr[5];
mat[px+1][py+2].b=6;
mat[px+2][py].a=clr[5];
mat[px+2][py].b=6;
mat[px+2][py+1].a=clr[5];
mat[px+2][py+1].b=6;
mat[px+2][py+2].a=clr[5];
mat[px+2][py+2].b=6;
return(9*10);
}
    }
int nombreAleatoire(int nombreMax)
{
    srand(time(NULL));
    return (rand() % nombreMax);
}

int verifier(SDL_Surface *b,cellule c[10][10],int a,int m,SDL_Surface *t[27])
{

if(b==t[0])
{
if(c[a][m].b==0)
    return 1;
    else return 0;
}
if(b==t[1])
{
if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(m+1<10))
    return 1;
    else return 0;
}
if(b==t[2])
{
if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(a+1<10))
    return 1;
    else return 0;
}
if(b==t[3])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[4])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(a+2<10))
        return 1;
        else return 0;
}
if(b==t[5])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a+1][m+1].b==0)&&(m+1<10)&&(a+1<10))
        return 1;
        else return 0;
}
if(b==t[6])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+1].b==0)&&(a+1<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[7])
{
 if((c[a][m+1].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+1].b==0)&&(a+1<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[8])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a+1][m].b==0)&&(a+1<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[9])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+1].b==0)&&(a+1<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[10])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(c[a+1][m+1].b==0)&&(a+2<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[11])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a+1][m+1].b==0)&&(c[a][m+2].b==0)&&(a+1<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[12])
{
 if((c[a][m+1].b==0)&&(c[a+1][m+1].b==0)&&(c[a+2][m+1].b==0)&&(c[a+1][m].b==0)&&(a+2<10)&&(m+1<10))
        return 1;
        else return 0;

}
if(b==t[13])
{
 if((c[a][m+1].b==0)&&(c[a+1][m+1].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+2].b==0)&&(a+1<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[14])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(c[a+3][m].b==0)&&(a+3<10))
        return 1;
        else return 0;
}
if(b==t[15])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(c[a][m+3].b==0)&&(m+3<10))
        return 1;
        else return 0;
}
if(b==t[16])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(c[a+3][m].b==0)&&(c[a+4][m].b==0)&&(a+4<10))
        return 1;
        else return 0;
}
if(b==t[17])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(c[a][m+3].b==0)&&(c[a][m+4].b==0)&&(m+4<10))
        return 1;
        else return 0;
}
if(b==t[18])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(c[a+1][m+2].b==0)&&(c[a+2][m+2].b==0)&&(a+2<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[19])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(c[a+2][m+1].b==0)&&(c[a+2][m+2].b==0)&&(a+2<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[20])
{
 if((c[a][m].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(a+2<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[21])
{
 if((c[a][m+2].b==0)&&(c[a+1][m+2].b==0)&&(c[a+2][m+1].b==0)&&(c[a+2][m+2].b==0)&&(c[a+2][m].b==0)&&(a+2<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[21])
{
 if((c[a][m+2].b==0)&&(c[a+1][m+2].b==0)&&(c[a+2][m+1].b==0)&&(c[a+2][m+2].b==0)&&(c[a+2][m].b==0)&&(a+2<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[22])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a+1][m+1].b==0)&&(c[a+2][m+1].b==0)&&(c[a+2][m].b==0)&&(a+2<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[23])
{
 if((c[a][m].b==0)&&(c[a][m+2].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+1].b==0)&&(c[a+1][m+2].b==0)&&(a+1<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[24])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a+1][m].b==0)&&(c[a+2][m].b==0)&&(c[a+2][m+1].b==0)&&(a+2<10)&&(m+1<10))
        return 1;
        else return 0;
}
if(b==t[25])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+2].b==0)&&(a+1<10)&&(m+2<10))
        return 1;
        else return 0;
}
if(b==t[26])
{
 if((c[a][m].b==0)&&(c[a][m+1].b==0)&&(c[a][m+2].b==0)&&(c[a+1][m].b==0)&&(c[a+1][m+1].b==0)&&(c[a+1][m+2].b==0)&&(c[a+2][m].b==0)&&(c[a+2][m+1].b==0)&&(c[a+2][m+2].b==0)&&(a+2<10)&&(m+2<10))
        return 1;
        else return 0;
}
}
 int remplie(cellule c[][10],SDL_Surface *b[],SDL_Surface *t[])
{
    int i,j,r,m,g,z=0;
    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
          r=verifier(b[1],c,i,j,t);
          m=verifier(b[2],c,i,j,t);
          g=verifier(b[3],c,i,j,t);
          if((r==1)||(m==1)||(g==1))
          {
              z=1;
          }
        }
    }
    return z;
}
 int rempliepiece(cellule c[][10],SDL_Surface *m,SDL_Surface *t[])
{
    int i,j,r,z=0;
    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
          r=verifier(m,c,i,j,t);

          if(r==1)
          {
              z=1;
          }
        }
    }
    return z;
}

int supscore(SDL_Surface* b[],int indice,cellule c[][10],int x,int y,SDL_Surface* t[],SDL_Surface* color[])
{
    int resulta=placer(c,b,indice,t,x,y,color);
    int ligne=0,i,j;
 for(i=0; i<10; i++)
        {

            int z=1;
            for(j=0; j<10; j++)
            {
                if(c[i][j].b==0)
                {
                    z=0;
                }
            }


            if(z==1)
            {
                ligne++;
             for(j=0; j<10; j++)
            {
                c[i][j].b=100;
            }
            }


        }
        int colone=0;
        for(j=0; j<10; j++)
        {

            int z=1;
            for(i=0; i<10; i++)
            {
                if(c[i][j].b==0)
                {
                    z=0;
                }
            }
            if(z==1)
            {
                colone++;
             for(i=0; i<10; i++)
            {
                c[i][j].b=100;
            }
            }

        }
        if((ligne!=0)||(colone!=0))
        {
         if(((ligne==1)&&(colone==0))||((ligne==0)&&(colone==1)))
         {
             resulta=resulta+100;
         }
        if(((ligne==2)&&(colone==0))||((ligne==0)&&(colone==2)))
         {
             resulta=resulta+300;
         }
         if(((ligne==3)&&(colone==0))||((ligne==0)&&(colone==3)))
         {
             resulta=resulta+600;
         }
         if(((ligne==4)&&(colone==0))||((ligne==0)&&(colone==4)))
         {
             resulta=resulta+1000;
         }
         if(((ligne==5)&&(colone==0))||((ligne==0)&&(colone==5)))
         {
             resulta=resulta+1500;
         }
        }
         for(i=0; i<10; i++)
        {

            for(j=0; j<10; j++)
            {
                if(c[i][j].b==100)
                {
                    c[i][j].a=b[0];
                    c[i][j].b=0;
                }
            }
        }
    return resulta;
}
void saveBestScore(joueur *newbest)
{
    FILE *st;

    st=fopen("best.dat","wb+");
    fwrite(newbest,sizeof(*newbest),1,st);
    fclose(st);
}

void saveScore(joueur *candidate)
{
    FILE *st;

    st=fopen("best.dat","rb");
    if(st==NULL)
        saveBestScore(candidate);
    else {
        joueur best_one;
        fread(&best_one,sizeof(best_one),1,st);
        fclose(st);
        if(best_one.score < candidate->score)
            saveBestScore(candidate);
    }
}
void sauvgarde(joueur candidate)
{
    FILE*F=NULL;
    joueur t[7]={0},z;

        time_t rawtime;
        struct tm * timeinfo;
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        char s[100];
        strftime(s,30,"%b.%d.%Y",timeinfo);
    int i=0,nb,j;
      strcpy(z.date,s);
         strcpy(z.nom,candidate.nom);
          z.score=candidate.score;
F=fopen("saved.dat","rb");



if(F!=NULL)
{

       fread(&t[0],sizeof(t[0]),1,F);
               i++;

   while(!feof(F))
          {


               fread(&t[i],sizeof(t[i]),1,F);
               i++;

          }
          fclose(F);
          strcpy(z.date,s);
         strcpy(z.nom,candidate.nom);
          z.score=candidate.score;
          t[i]=z;
          i++;
          nb=i;
          for(i=0;i<nb;i++)
          {
               for(j=i+1;j<nb;j++)
               {
                if(t[i].score<=t[j].score)
                {
                    z=t[i];
                    t[i]=t[j];
                    t[j]=z;
                }
               }
          }
          F=fopen("saved.dat","wb+");
          if(nb>5)
          {
             for(i=0;i<5;i++)
             {


               fwrite(&t[i],sizeof(joueur),1,F);

             }
          fclose(F);
      }else
      {
             for(i=0;i<nb;i++)
             {

               fwrite(&t[i],sizeof(joueur),1,F);
             }
 fclose(F);
       }

}else
{

    F=fopen("saved.dat","wb+");
    fwrite(&z,sizeof(joueur),1,F);
    fclose(F);
}
}
void sauvgardeancien1(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[], int* n)
{

 FILE* M = NULL,*f=NULL;
 int s;

    int i = 0, j = 0,x;

M=fopen("niveaux.lvl","r");
  x=fgetc(M);
        b[1]=t[x];
        x=fgetc(M);
        b[2]=t[x];
       x=fgetc(M);
        b[3]=t[x];
       for(i=0; i<10; i++)
    {


    for(j=0; j<10; j++)
    {
       x=fgetc(M);
       niveau[i][j].b=x;
       if(x==1)
       {


       niveau[i][j].a=IMG_Load("jaune.png") ;
    }
     if(x==2)
       {


       niveau[i][j].a=IMG_Load("bleu.png") ;
    }
     if(x==3)
       {


       niveau[i][j].a=IMG_Load("rouge.png") ;
    }
     if(x==4)
       {


       niveau[i][j].a=IMG_Load("vert.png") ;
    }
    if(x==0)
    {

       niveau[i][j].a=IMG_Load("carre.png") ;
    }
     if(x==5)
       {


       niveau[i][j].a=IMG_Load("violet.png") ;
    }
     if(x==6)
       {


       niveau[i][j].a=IMG_Load("orange.png") ;
    }

    }}






    fclose(M);
 f=fopen("resulta.txt","r");
  fread(&s,sizeof(int),1,f);
fclose(f);
*n=s;
}

void sauvgardeancien2(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[],int n)
{
     FILE* M = NULL,*f=NULL;
int s=n;
    int i,j = 0,x,k,l,m;
M=fopen("niveaux.lvl","w+");
          for(j=0;j<27;j++)
          {
              if(b[1]==t[j])
              {
                  k=j;

              }
              if(b[2]==t[j])
              {
                  l=j;

              }
              if(b[3]==t[j])
              {
                  m=j;
              }
          }
         fputc(k,M);
        fputc(l,M);
        fputc(m,M);

           for(i=0; i<10; i++)
    {


    for(j=0; j<10; j++)
    {
        x=niveau[i][j].b;
       fputc(x,M);
   }
   }
  fclose(M);
  f=fopen("resulta.txt","w+");
  fwrite(&s,sizeof(int),1,f);
  fclose(f);

}

void sauvgardeancien3(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[],cellule mat[][10],SDL_Surface*b2[],int resulta1,int resulta2)
{

     FILE* M=NULL,*f=NULL,*v=NULL;

    int i,j = 0,x,k,l,m;
M=fopen("mat.lvl","w+");
          for(j=0;j<27;j++)
          {
              if(b[1]==t[j])
              {
                  k=j;

              }
              if(b[2]==t[j])
              {
                  l=j;

              }
              if(b[3]==t[j])
              {
                  m=j;
              }
          }
         fputc(k,M);
        fputc(l,M);
        fputc(m,M);

           for(i=0; i<10; i++)
    {


    for(j=0; j<10; j++)
    {
        x=niveau[i][j].b;
       fputc(x,M);
   }
   }
  fclose(M);
  M=fopen("mat2.lvl","w+");
       for(j=0;j<27;j++)
          {
              if(b2[1]==t[j])
              {
                  k=j;

              }
              if(b2[2]==t[j])
              {
                  l=j;

              }
              if(b2[3]==t[j])
              {
                  m=j;
              }
          }
         fputc(k,M);
        fputc(l,M);
        fputc(m,M);

           for(i=0; i<10; i++)
    {


    for(j=0; j<10; j++)
    {
        x=mat[i][j].b;
       fputc(x,M);
   }
   }
  fclose(M);
  f=fopen("premier.txt","w+");
  fwrite(&resulta1,sizeof(resulta1),1,f);
  fclose(f);
   v=fopen("desieme.txt","w+");
  fwrite(&resulta2,sizeof(resulta2),1,v);
  fclose(v);
}

void sauvgardeancien4(cellule niveau[][10],SDL_Surface*b[],SDL_Surface*t[],cellule mat[][10],SDL_Surface*b2[],int*resulta1,int*resulta2)
{
   FILE* M = NULL,*f=NULL,*v=NULL;

    int i = 0, j = 0,x;

M=fopen("mat.lvl","r");
  x=fgetc(M);
        b[1]=t[x];
        x=fgetc(M);
        b[2]=t[x];
       x=fgetc(M);
        b[3]=t[x];
       for(i=0; i<10; i++)
    {


    for(j=0; j<10; j++)
    {
       x=fgetc(M);
       niveau[i][j].b=x;
       if(x==1)
       {


       niveau[i][j].a=IMG_Load("jaune.png") ;
    }
     if(x==2)
       {


       niveau[i][j].a=IMG_Load("bleu.png") ;
    }
     if(x==3)
       {


       niveau[i][j].a=IMG_Load("rouge.png") ;
    }
     if(x==4)
       {


       niveau[i][j].a=IMG_Load("vert.png") ;
    }
    if(x==0)
    {

       niveau[i][j].a=IMG_Load("carre.png") ;
    }
     if(x==5)
       {


       niveau[i][j].a=IMG_Load("violet.png") ;
    }
     if(x==6)
       {


       niveau[i][j].a=IMG_Load("orange.png") ;
    }

    }}






    fclose(M);
    M=fopen("mat2.lvl","r");
  x=fgetc(M);
        b2[1]=t[x];
        x=fgetc(M);
        b2[2]=t[x];
       x=fgetc(M);
        b2[3]=t[x];
       for(i=0; i<10; i++)
    {


    for(j=0; j<10; j++)
    {
       x=fgetc(M);
       mat[i][j].b=x;
       if(x==1)
       {


       mat[i][j].a=IMG_Load("jaune.png") ;
    }
     if(x==2)
       {


       mat[i][j].a=IMG_Load("bleu.png") ;
    }
     if(x==3)
       {


       mat[i][j].a=IMG_Load("rouge.png") ;
    }
     if(x==4)
       {


       mat[i][j].a=IMG_Load("vert.png") ;
    }
    if(x==0)
    {

       mat[i][j].a=IMG_Load("carre.png") ;
    }
     if(x==5)
       {


       mat[i][j].a=IMG_Load("violet.png") ;
    }
     if(x==6)
       {


       mat[i][j].a=IMG_Load("orange.png") ;
    }

    }}






    fclose(M);
     f=fopen("premier.txt","r");
  fread(resulta1,sizeof(*resulta1),1,f);
  fclose(f);
   v=fopen("desieme.txt","r");
  fread(resulta2,sizeof(*resulta2),1,v);
  fclose(v);

}

void attent(cellule c[][10],int *resulta,SDL_Surface*ecran,int *o,int *u, int *w,SDL_Surface*t[],SDL_Surface*b[])
{
    SDL_Surface *replay=NULL,*lecture=NULL,*enregistre=NULL,*lapause=NULL,*tb[6]={NULL},*scs=NULL;
    SDL_Rect prep,plect,penrg,ppause,pbest,p2best[6],psc;
     SDL_Surface *texte=NULL;
      SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    SDL_Event haha;
    int i=0;
    int jp=*resulta;
    joueur spa={0},kk[6]={0};
    TTF_Font *police = NULL;
    char lk[30]="walid",tmp[10]="",scc[20]="";
    police = TTF_OpenFont("angelina.ttf", 22);
    FILE*f=NULL,*G=NULL;
char best[20] = "";
char bestchaine[5][60];
    int may=1,r=*o,p=*u,g=*w,on,j,yop=0,nb;
     psc.x=170;
    psc.y=200;
    sprintf(scc,"score : %d",jp);
    scs=TTF_RenderText_Shaded(police, scc, couleurNoire, couleurBlanche);
p2best[0].x=160+10;
p2best[0].y=340+50+20;
p2best[1].x=160+10;
p2best[1].y=340+50+20+30;
p2best[2].x=160+10;
p2best[2].y=340+50+20+60;
p2best[3].x=160+10;
p2best[3].y=340+50+20+90;
p2best[4].x=160+10;
p2best[4].y=340+50+20+120;

    prep.x=310;
    prep.y=340;
    plect.x=235;
    plect.y=340;
    penrg.x=160;
    penrg.y=340;
    ppause.x=110;
    ppause.y=130;
    lapause=IMG_Load("lapause.png");
    replay=IMG_Load("replay.png");
    lecture=IMG_Load("lecture1.png");
    enregistre=IMG_Load("save.png");
    f=fopen("saved.dat","rb");
    G=fopen("best.dat","rb");
    fread(&spa,sizeof(spa),1,G);//spa.score est le meilleur score

   if(f!=NULL)
   {


    fread(&kk[0],sizeof(joueur),1,f);
    sprintf(best, "BEST : %d", kk[0].score);
   texte = TTF_RenderText_Shaded(police, best, couleurNoire, couleurBlanche);
    i++;
    while(!feof(f))
    {
          fread(&kk[i],sizeof(joueur),1,f);//kk[i] contien le top 5 kk[i].nom fih le nom et kk[i].score
            i++;

    }
    nb=i;
   }
    fclose(f);

    fclose(G);
    pbest.x=220;
    pbest.y=280;
    while(may)
    {


        SDL_WaitEvent(&haha);
   SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        SDL_BlitSurface(lapause, NULL, ecran, &ppause);
        SDL_BlitSurface(lapause, NULL, ecran, &ppause);
        SDL_BlitSurface(replay, NULL, ecran, &prep);
        SDL_BlitSurface(lecture, NULL, ecran, &plect);
        SDL_BlitSurface(enregistre, NULL, ecran, &penrg);

SDL_BlitSurface(scs, NULL, ecran, &psc);
        SDL_BlitSurface(texte, NULL, ecran, &pbest);
        for(i=0;i<5;i++)
        {
            if((strcmp(kk[i].nom,"0")!=0)&&(kk[i].score!=0))
            {


            sprintf(tmp," %d %s",kk[i].score ,kk[i].date);
            strcpy(bestchaine[i],kk[i].nom);
            strcat(bestchaine[i],tmp );

             tb[i]= TTF_RenderText_Shaded(police, bestchaine[i], couleurNoire, couleurBlanche);
            SDL_BlitSurface(tb[i], NULL, ecran, &p2best[i]);
            }
        }


        switch(haha.type)
        {

         case SDL_MOUSEBUTTONDOWN:
            if((haha.motion.x>=160)&&(haha.motion.y>=340)&&(haha.motion.x<210)&&(haha.motion.y<=410))//
            {
                // cest condition donne a b1 son espace  comme un carre si tu appui dessu b1 bouje
                on=1;

            }
            if((haha.motion.x>=235)&&(haha.motion.y>=340)&&(haha.motion.x<305)&&(haha.motion.y<=410))
            {
                on=2;
                lecture=IMG_Load("lecture2.png");
                 SDL_BlitSurface(lecture, NULL, ecran, &plect);
            }
            if((haha.motion.x>=310)&&(haha.motion.y>=340)&&(haha.motion.x<380)&&(haha.motion.y<=410))
            {
                on=3;
            }
            break;
         case SDL_MOUSEBUTTONUP:
             if(on==1)
             {
sauvgardeancien2(c,b,t,jp);

             }
            if(on==2)
            {
                may=0;
            }
            if(on==3)
            {
              *o=0;
              *u=0;
              *w=0;
              *resulta=0;
              b[1]=t[nombreAleatoire(26)];
              b[2]=t[nombreAleatoire(25)];
              b[3]=t[nombreAleatoire(24)];
               for(i=0; i<10; i++)
           {


                        for(j=0; j<10; j++)
                   {
                       c[i][j].a=IMG_Load("carre.png");
                       c[i][j].b=0;

                   }

           }

    may=0;

    }

    break;}

    SDL_Flip(ecran);






    }}


void attent2(cellule c[][10],int *score1,int *score2,SDL_Surface*ecran,int *o,int *u, int *w,SDL_Surface*t[],SDL_Surface*b[],cellule mat[][10],SDL_Surface*b2[])
{
    SDL_Surface *replay=NULL,*lecture=NULL,*enregistre=NULL,*lapause=NULL,*scs=NULL,*scs2=NULL;
    SDL_Rect prep,plect,penrg,ppause,psc,psc2;
    SDL_Event haha;
    int jb=*score2,jk=*score1;
    TTF_Font *police = NULL;
      police = TTF_OpenFont("angelina.ttf", 22);
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    joueur spa;
    char scc[20]="",scc2[20]="";

    psc.x=350;
    psc.y=185;
     psc2.x=350;
    psc2.y=185+22;
     sprintf(scc,"score : %d",jk);
    scs=TTF_RenderText_Shaded(police, scc, couleurNoire, couleurBlanche);
     sprintf(scc2,"score 2 : %d",jb);
    scs2=TTF_RenderText_Shaded(police, scc2, couleurNoire, couleurBlanche);

    FILE*f=NULL,*G=NULL;
    joueur kk[6]={0};
    SDL_Surface *tb[6]={NULL},*texte;
    SDL_Rect pbest,p2best[6];
    char best[20] = "",tmp[10]="";
    int i=0,nb;
char bestchaine[5][60];
    p2best[0].x=psc.x+2;
p2best[0].y=340+50+20;
p2best[1].x=psc.x;
p2best[1].y=340+50+20+30;
p2best[2].x=psc.x;
p2best[2].y=340+50+20+60;
p2best[3].x=psc.x;
p2best[3].y=340+50+20+90;
p2best[4].x=psc.x;
p2best[4].y=340+50+20+120;
    f=fopen("saved.dat","rb");
    G=fopen("best.dat","rb");
    fread(&spa,sizeof(spa),1,G);//spa.score est le meilleur score

   if(f!=NULL)
   {


    fread(&kk[0],sizeof(joueur),1,f);
    sprintf(best, "BEST : %d", kk[0].score);
   texte = TTF_RenderText_Shaded(police, best, couleurNoire, couleurBlanche);
    i++;
    while(!feof(f))
    {
          fread(&kk[i],sizeof(joueur),1,f);//kk[i] contien le top 5 kk[i].nom fih le nom et kk[i].score
            i++;

    }
    nb=i;
   }
    fclose(f);

    fclose(G);
    pbest.x=psc.x;
    pbest.y=280;


    int may=1,r=*o,p=*u,g=*w,on,j,yop=0;
    prep.x=510;
    prep.y=340;
    plect.x=425;
    plect.y=340;
    penrg.x=350;
    penrg.y=340;
    ppause.x=300;
    ppause.y=130;
    lapause=IMG_Load("lapause.png");
    replay=IMG_Load("replay.png");
    lecture=IMG_Load("lecture1.png");
    enregistre=IMG_Load("save.png");

    while(may)
    {
SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

        SDL_WaitEvent(&haha);

        SDL_BlitSurface(lapause, NULL, ecran, &ppause);
        SDL_BlitSurface(lapause, NULL, ecran, &ppause);
        SDL_BlitSurface(replay, NULL, ecran, &prep);
        SDL_BlitSurface(lecture, NULL, ecran, &plect);
        SDL_BlitSurface(enregistre, NULL, ecran, &penrg);
        SDL_BlitSurface(scs, NULL, ecran, &psc);
        SDL_BlitSurface(scs2, NULL, ecran, &psc2);
SDL_BlitSurface(texte, NULL, ecran, &pbest);
        for(i=0;i<5;i++)
        {
            if((strcmp(kk[i].nom,"0")!=0)&&(kk[i].score!=0))
            {


            sprintf(tmp," %d %s",kk[i].score ,kk[i].date);
            strcpy(bestchaine[i],kk[i].nom);
            strcat(bestchaine[i],tmp );

             tb[i]= TTF_RenderText_Shaded(police, bestchaine[i], couleurNoire, couleurBlanche);
            SDL_BlitSurface(tb[i], NULL, ecran, &p2best[i]);
            }
        }
        switch(haha.type)
        {

         case SDL_MOUSEBUTTONDOWN:
            if((haha.motion.x>=350)&&(haha.motion.y>=340)&&(haha.motion.x<425)&&(haha.motion.y<=410))//
            {
                // cest condition donne a b1 son espace  comme un carre si tu appui dessu b1 bouje
                on=1;

            }
            if((haha.motion.x>=425)&&(haha.motion.y>=340)&&(haha.motion.x<510)&&(haha.motion.y<=410))
            {
                on=2;
                lecture=IMG_Load("lecture2.png");
                 SDL_BlitSurface(lecture, NULL, ecran, &plect);
            }
            if((haha.motion.x>=510)&&(haha.motion.y>=340)&&(haha.motion.x<580)&&(haha.motion.y<=410))
            {
                on=3;
            }
            break;
         case SDL_MOUSEBUTTONUP:
             if(on==1)
             {
sauvgardeancien3(c,b,t,mat,b2,jk,jb);

             }
            if(on==2)
            {
                may=0;
            }
            if(on==3)
            {
              *o=0;
              *u=0;
              *w=0;
              *score1=0;
             *score2=0;
              b[1]=t[nombreAleatoire(26)];
               b[2]=t[nombreAleatoire(25)];
                b[3]=t[nombreAleatoire(24)];
                  b2[1]=b[1];
               b2[2]=b[2];
                b2[3]=b[3];
               for(i=0; i<10; i++)
           {


                        for(j=0; j<10; j++)
                   {
                       c[i][j].a=IMG_Load("carre.png");
                       c[i][j].b=0;
                    mat[i][j].a=IMG_Load("carre.png");
                       mat[i][j].b=0;

                   }

           }

    may=0;

    }

    break;}

    SDL_Flip(ecran);






    }}
void part1 (SDL_Surface *ecran)
{
    SDL_Surface *b[4]= {NULL},*t[27]= {NULL},*color[6]={NULL},*texte = NULL,*unepause=NULL,*fin=NULL,*bss=NULL;
    cellule c[10][10];
    int  i,j,k,r,nv1=0,nv2=0,nv3=0,ligne ,colone,resulta=0,h=0,bs=0;
    joueur ll={0};
    SDL_Event event;
    SDL_Rect po,pb1,pb2,pb3,ps,ppause,pfin,pbs;
    TTF_Font *police = NULL;
    char score[20] = "0",moti[30]="",bsc[20]="";
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    joueur a;

     FILE*f=NULL;
     f=fopen("saved.dat","rb");
fread(&a,sizeof(a),1,f);
bs=a.score;
fclose(f);
   sprintf(bsc,"best : %d",bs);
    ps.x=cordopremierecasesurx;
    ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
    pbs.x=ps.x+7*40;
    pbs.y=ps.y;
    po.x=cordopremierecasesurx;//position de la premiere case
    po.y=cordopremierecasesury;
    pfin.x=90;
    pfin.y=317;
    ppause.x=450;
    ppause.y=0;
    int cont=1,on=0,z;
    fin=IMG_Load("finparti.png");
    unepause=IMG_Load("pause2.png");
    color[0]=IMG_Load("jaune.png");
    color[1]=IMG_Load("bleu.png");
    color[2]=IMG_Load("rouge.png");
    color[3]=IMG_Load("vert.png");
    color[4]=IMG_Load("violet.png");
    color[5]=IMG_Load("orange.png");


    ecran=SDL_SetVideoMode(largeurdelafentre,hauteurdelafentre,32,SDL_HWSURFACE|SDL_DOUBLEBUF );

    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));// ecran recois la couleur blanc
 police = TTF_OpenFont("angelina.ttf", 25);
    t[0]=IMG_Load("0m.png");
    t[1]=IMG_Load("1m.png");
    t[2]=IMG_Load("2m.png");
    t[3]=IMG_Load("3m.png");
    t[4]=IMG_Load("4m.png");
    t[5]=IMG_Load("5m.png");
    t[6]=IMG_Load("6m.png");
    t[7]=IMG_Load("7m.png");
    t[8]=IMG_Load("8m.png");
    t[9]=IMG_Load("9m.png");
    t[10]=IMG_Load("10m.png");
    t[11]=IMG_Load("11m.png");
    t[12]=IMG_Load("12m.png");
    t[13]=IMG_Load("13m.png");
    t[14]=IMG_Load("14m.png");
    t[15]=IMG_Load("15m.png");
    t[16]=IMG_Load("16m.png");
    t[17]=IMG_Load("17m.png");
    t[18]=IMG_Load("18m.png");
    t[19]=IMG_Load("19m.png");
    t[20]=IMG_Load("20m.png");
    t[21]=IMG_Load("21m.png");
    t[22]=IMG_Load("22m.png");
    t[23]=IMG_Load("23m.png");
    t[24]=IMG_Load("24m.png");
    t[25]=IMG_Load("25m.png");
    t[26]=IMG_Load("26m.png");


    b[0]=IMG_Load("carre.png");
    nv1=nombreAleatoire(27);
    nv2=nombreAleatoire(26);
    nv3=nombreAleatoire(25);
    b[1]=t[nv1];
    b[2]=t[nv2];
    b[3]=t[nv3];
    for(i=0; i<10; i++)
    {

        po.x=cordopremierecasesurx;
        for(j=0; j<10; j++)
        {
            c[i][j].a=b[0];
            c[i][j].x= po.x;
            c[i][j].y= po.y;
            c[i][j].b=0;
            po.x=po.x+40;

        }
        po.y=po.y+40;
    }

     texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
     bss = TTF_RenderText_Shaded(police, bsc, couleurNoire, couleurBlanche);

    while(cont)
    {
         SDL_PollEvent(&event);

       SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb1.x=c[i][j].x;
                pb1.y=c[i][j].y;
                SDL_BlitSurface(c[i][j].a, NULL, ecran, &pb1);
            }
        }

        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
        SDL_BlitSurface(b[1], NULL, ecran, &pb1);
        pb2.x=cordob2surlaxex;
        pb2.y=cordob2surlaxey;
        SDL_BlitSurface(b[2], NULL, ecran, &pb2);
        pb3.x=cordob3surlaxex;
        pb3.y=cordob3surlaxey;
        SDL_BlitSurface(b[3], NULL, ecran, &pb3);
           unepause=IMG_Load("pause2.png");
 SDL_BlitSurface(unepause, NULL, ecran, &ppause);
        switch(event.type)
        {
        case SDL_QUIT:
            menu(ecran);
            cont=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if((event.motion.x>=50)&&(event.motion.y>=500)&&(event.motion.x<170)&&(event.motion.y<=660)&&(rempliepiece(c,b[1],t)==1))//
            {
                on=1;
            }
            if((event.motion.x>=170)&&(event.motion.y>=500)&&(event.motion.x<290)&&(event.motion.y<=660)&&(rempliepiece(c,b[2],t)==1))
            {
                on=2;
            }
            if((event.motion.x>=290)&&(event.motion.y>=500)&&(event.motion.x<410)&&(event.motion.y<=660)&&(rempliepiece(c,b[3],t)==1))
            {
                on=3;
            }
              if((event.motion.x>=450)&&(event.motion.y>0)&&(event.motion.x<500)&&(event.motion.y<=50))
            {
                on=4;

                unepause=IMG_Load("pause1.png");
                SDL_BlitSurface(unepause, NULL, ecran, &ppause);

            }
            break;
        case SDL_MOUSEMOTION:
            if(on==1)
            {



                pb1.x=event.motion.x;
                pb1.y=event.motion.y;
                SDL_BlitSurface(b[1], NULL, ecran, &pb1);
            }
            if(on==2)
            {
                pb2.x=event.motion.x;
                pb2.y=event.motion.y;
               SDL_BlitSurface(b[2], NULL, ecran, &pb2);
            }
            if(on==3)
            {
                pb3.x=event.motion.x;
                pb3.y=event.motion.y;
                SDL_BlitSurface(b[3], NULL, ecran, &pb3);
            }

            break;
        case SDL_MOUSEBUTTONUP:
            if((on==1)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454)&&(b[1]!=NULL))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
if(verifier(b[1],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,1, c,k,r,t,color);

            nv1=nombreAleatoire(27);
            b[1]=t[nv1];

}else
{
        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
          SDL_BlitSurface(b[1], NULL, ecran, &pb1);
}
            }
            if((on==2)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
    if(verifier(b[2],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,2, c,k,r,t,color);



            nv2=nombreAleatoire(27);
            b[2]=t[nv2];
}else
{
        pb2.y=cordob2surlaxey;
        pb2.x=cordob2surlaxex;
          SDL_BlitSurface(b[2], NULL, ecran, &pb2);
}
            }
            if((on==3)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                    if(verifier(b[3],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,3, c,k,r,t,color);
            nv3=nombreAleatoire(27);
            b[3]=t[nv3];

}else
{
        po.y=cordob3surlaxey;
        po.x=cordob3surlaxex;
          SDL_BlitSurface(b[3], NULL, ecran, &po);
}
            }
              if(on==4)
            {


             attent( c,&resulta,ecran,&nv1,&nv2,&nv3,t,b);

            }
            on=0;
            break;

        }

sprintf(score, "score : %d", resulta);
SDL_FreeSurface(texte);
texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
ps.x=cordopremierecasesurx;
ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte, NULL, ecran, &ps);
SDL_BlitSurface(bss, NULL, ecran, &pbs);



        if(remplie(c,b,t)==0)
            {
               SDL_BlitSurface(fin, NULL, ecran, &pfin);
               SDL_WaitEvent(&event);
        switch(event.type)
        {


            case SDL_KEYDOWN:

            switch (event.key.keysym.sym)

            {

                case SDLK_a: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='q';
              h++;

                break;
                 case SDLK_b: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='b';
                h++;
                break;
                 case SDLK_c: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='c';
                h++;
                break;
                 case SDLK_d: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='d';
                h++;
                break;
                 case SDLK_e: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='e';
                h++;
                break;
                 case SDLK_f: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='f';
                h++;
                break;
                 case SDLK_g: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='g';
                h++;
                break;
                 case SDLK_h: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='h';
                h++;
                break;
                 case SDLK_i: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='i';
                h++;
                break;
                 case SDLK_j: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='j';
                h++;
                break;
                 case SDLK_k: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='k';
                h++;
                break;
                 case SDLK_l: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='l';
                h++;
                break;
                 case SDLK_SEMICOLON: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='m';
                h++;
                break;
                 case SDLK_n: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='n';
                h++;
                break;
                 case SDLK_o: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='o';
                h++;
                break;
                 case SDLK_p: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='p';
                h++;
                break;
                 case SDLK_q: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='a';
                h++;
                break;
                 case SDLK_r: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='r';
                h++;
                break;
                 case SDLK_s: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='s';
                h++;
                break;
                 case SDLK_t: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='t';
                h++;
                break;
                 case SDLK_u: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='u';
                h++;
                break;
                 case SDLK_v: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='v';
                h++;
                break;
                 case SDLK_w: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='z';
                h++;
                break;
                 case SDLK_x: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='x';
                h++;
                break;
                 case SDLK_y: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='y';
                h++;
                break;
                 case SDLK_z: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='w';
                h++;
                break;
                 case SDLK_0: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='0';
                h++;
                break;
                 case SDLK_1: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='1';
                h++;
                break;
                 case SDLK_2: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='2';
                h++;
                break;
                 case SDLK_3: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='3';
                h++;
                break;
                 case SDLK_4: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='4';
                h++;
                break;
                 case SDLK_5: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='5';
                h++;
                break;
                 case SDLK_6: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='6';
                h++;
                break;

                 case SDLK_7: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='7';
                h++;
                break;
                 case SDLK_8: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='8';
                h++;
                break;
                 case SDLK_9: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='9';
                h++;
                break;

                case SDLK_KP_MULTIPLY: /* Appui sur la touche Echap, on arrête le programme */
                   moti[h]='\0';

    ll.score=resulta;
    strcpy(ll.nom,moti);
    saveScore(&ll);
    sauvgarde(ll);
                   menu(ecran);
               cont=0;
                break;

            }

            break;

    }

            }
        SDL_Flip(ecran);
    }
      TTF_CloseFont(police);
    TTF_Quit();
    for (i = 0 ; i < 27; i++)
        SDL_FreeSurface(t[i]);

    for (i = 0 ; i < 6; i++)
        SDL_FreeSurface(color[i]);
        SDL_FreeSurface(unepause);
        SDL_FreeSurface(fin);
        SDL_FreeSurface(texte);
        SDL_FreeSurface(b[0]);



    SDL_Quit();



}
void part1SVG (SDL_Surface *ecran)
{
    SDL_Surface *b[4]= {NULL},*t[27]= {NULL},*color[6]={NULL},*texte = NULL,*unepause=NULL,*fin=NULL,*bss=NULL;
    cellule c[10][10];
    int  i,j,k,r,nv1=0,nv2=0,nv3=0,ligne ,colone,resulta=0,h=0,bs=0;
    joueur ll={0};
    SDL_Event event;
    SDL_Rect po,pb1,pb2,pb3,ps,ppause,pfin,pbs;
    TTF_Font *police = NULL;
    char score[20] = "0",moti[30]="",bsc[20]="";
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    joueur a;

     FILE*f=NULL;
     f=fopen("saved.dat","rb");
fread(&a,sizeof(a),1,f);
bs=a.score;
fclose(f);
   sprintf(bsc,"best : %d",bs);
    ps.x=cordopremierecasesurx;
    ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
    pbs.x=ps.x+7*40;
    pbs.y=ps.y;
    po.x=cordopremierecasesurx;//position de la premiere case
    po.y=cordopremierecasesury;
    pfin.x=90;
    pfin.y=317;
    ppause.x=450;
    ppause.y=0;
    int cont=1,on=0,z;
    fin=IMG_Load("finparti.png");
    unepause=IMG_Load("pause2.png");
    color[0]=IMG_Load("jaune.png");
    color[1]=IMG_Load("bleu.png");
    color[2]=IMG_Load("rouge.png");
    color[3]=IMG_Load("vert.png");
    color[4]=IMG_Load("violet.png");
    color[5]=IMG_Load("orange.png");


    ecran=SDL_SetVideoMode(largeurdelafentre,hauteurdelafentre,32,SDL_HWSURFACE|SDL_DOUBLEBUF );

    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));// ecran recois la couleur blanc
 police = TTF_OpenFont("angelina.ttf", 25);
    t[0]=IMG_Load("0m.png");
    t[1]=IMG_Load("1m.png");
    t[2]=IMG_Load("2m.png");
    t[3]=IMG_Load("3m.png");
    t[4]=IMG_Load("4m.png");
    t[5]=IMG_Load("5m.png");
    t[6]=IMG_Load("6m.png");
    t[7]=IMG_Load("7m.png");
    t[8]=IMG_Load("8m.png");
    t[9]=IMG_Load("9m.png");
    t[10]=IMG_Load("10m.png");
    t[11]=IMG_Load("11m.png");
    t[12]=IMG_Load("12m.png");
    t[13]=IMG_Load("13m.png");
    t[14]=IMG_Load("14m.png");
    t[15]=IMG_Load("15m.png");
    t[16]=IMG_Load("16m.png");
    t[17]=IMG_Load("17m.png");
    t[18]=IMG_Load("18m.png");
    t[19]=IMG_Load("19m.png");
    t[20]=IMG_Load("20m.png");
    t[21]=IMG_Load("21m.png");
    t[22]=IMG_Load("22m.png");
    t[23]=IMG_Load("23m.png");
    t[24]=IMG_Load("24m.png");
    t[25]=IMG_Load("25m.png");
    t[26]=IMG_Load("26m.png");

    b[0]=IMG_Load("carre.png");
    nv1=nombreAleatoire(27);
    nv1=nombreAleatoire(26);
    nv1=nombreAleatoire(25);
    b[1]=t[nv1];
    b[2]=t[nv2];
    b[3]=t[nv3];
    for(i=0; i<10; i++)
    {

        po.x=cordopremierecasesurx;
        for(j=0; j<10; j++)
        {
            c[i][j].a=b[0];
            c[i][j].x= po.x;
            c[i][j].y= po.y;
            c[i][j].b=0;
            po.x=po.x+40;

        }
        po.y=po.y+40;
    }

     texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
     bss = TTF_RenderText_Shaded(police, bsc, couleurNoire, couleurBlanche);
sauvgardeancien1(c,b,t,&resulta);
    while(cont)
    {
         SDL_PollEvent(&event);

       SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb1.x=c[i][j].x;
                pb1.y=c[i][j].y;
                SDL_BlitSurface(c[i][j].a, NULL, ecran, &pb1);
            }
        }

        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
        SDL_BlitSurface(b[1], NULL, ecran, &pb1);
        pb2.x=cordob2surlaxex;
        pb2.y=cordob2surlaxey;
        SDL_BlitSurface(b[2], NULL, ecran, &pb2);
        pb3.x=cordob3surlaxex;
        pb3.y=cordob3surlaxey;
        SDL_BlitSurface(b[3], NULL, ecran, &pb3);
           unepause=IMG_Load("pause2.png");
 SDL_BlitSurface(unepause, NULL, ecran, &ppause);
        switch(event.type)
        {
        case SDL_QUIT:
              menu(ecran);
            cont=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if((event.motion.x>=50)&&(event.motion.y>=500)&&(event.motion.x<170)&&(event.motion.y<=660)&&(rempliepiece(c,b[1],t)==1))//
            {
                on=1;
            }
            if((event.motion.x>=170)&&(event.motion.y>=500)&&(event.motion.x<290)&&(event.motion.y<=660)&&(rempliepiece(c,b[2],t)==1))
            {
                on=2;
            }
            if((event.motion.x>=290)&&(event.motion.y>=500)&&(event.motion.x<410)&&(event.motion.y<=660)&&(rempliepiece(c,b[3],t)==1))
            {
                on=3;
            }
              if((event.motion.x>=450)&&(event.motion.y>0)&&(event.motion.x<500)&&(event.motion.y<=50))
            {
                on=4;

                unepause=IMG_Load("pause1.png");
                SDL_BlitSurface(unepause, NULL, ecran, &ppause);

            }
            break;
        case SDL_MOUSEMOTION:
            if(on==1)
            {



                pb1.x=event.motion.x;
                pb1.y=event.motion.y;
                SDL_BlitSurface(b[1], NULL, ecran, &pb1);
            }
            if(on==2)
            {
                pb2.x=event.motion.x;
                pb2.y=event.motion.y;
               SDL_BlitSurface(b[2], NULL, ecran, &pb2);
            }
            if(on==3)
            {
                pb3.x=event.motion.x;
                pb3.y=event.motion.y;
                SDL_BlitSurface(b[3], NULL, ecran, &pb3);
            }

            break;
        case SDL_MOUSEBUTTONUP:
            if((on==1)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454)&&(b[1]!=NULL))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
if(verifier(b[1],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,1, c,k,r,t,color);

            nv1=nombreAleatoire(27);
            b[1]=t[nv1];

}else
{
        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
          SDL_BlitSurface(b[1], NULL, ecran, &pb1);
}
            }
            if((on==2)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
    if(verifier(b[2],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,2, c,k,r,t,color);



            nv2=nombreAleatoire(27);
            b[2]=t[nv2];
}else
{
        pb2.y=cordob2surlaxey;
        pb2.x=cordob2surlaxex;
          SDL_BlitSurface(b[2], NULL, ecran, &pb2);
}
            }
            if((on==3)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                    if(verifier(b[3],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,3, c,k,r,t,color);
            nv3=nombreAleatoire(27);
            b[3]=t[nv3];

}else
{
        po.y=cordob3surlaxey;
        po.x=cordob3surlaxex;
          SDL_BlitSurface(b[3], NULL, ecran, &po);
}
            }
              if(on==4)
            {


             attent( c,&resulta,ecran,&nv1,&nv2,&nv3,t,b);

            }
            on=0;
            break;

        }

sprintf(score, "score : %d", resulta);
SDL_FreeSurface(texte);
texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
ps.x=cordopremierecasesurx;
ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte, NULL, ecran, &ps);
SDL_BlitSurface(bss, NULL, ecran, &pbs);



        if(remplie(c,b,t)==0)
            {
               SDL_BlitSurface(fin, NULL, ecran, &pfin);
               SDL_WaitEvent(&event);
        switch(event.type)
        {


            case SDL_KEYDOWN:

            switch (event.key.keysym.sym)

            {

                case SDLK_a: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='q';
              h++;

                break;
                 case SDLK_b: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='b';
                h++;
                break;
                 case SDLK_c: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='c';
                h++;
                break;
                 case SDLK_d: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='d';
                h++;
                break;
                 case SDLK_e: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='e';
                h++;
                break;
                 case SDLK_f: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='f';
                h++;
                break;
                 case SDLK_g: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='g';
                h++;
                break;
                 case SDLK_h: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='h';
                h++;
                break;
                 case SDLK_i: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='i';
                h++;
                break;
                 case SDLK_j: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='j';
                h++;
                break;
                 case SDLK_k: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='k';
                h++;
                break;
                 case SDLK_l: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='l';
                h++;
                break;
                 case SDLK_SEMICOLON: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='m';
                h++;
                break;
                 case SDLK_n: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='n';
                h++;
                break;
                 case SDLK_o: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='o';
                h++;
                break;
                 case SDLK_p: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='p';
                h++;
                break;
                 case SDLK_q: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='a';
                h++;
                break;
                 case SDLK_r: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='r';
                h++;
                break;
                 case SDLK_s: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='s';
                h++;
                break;
                 case SDLK_t: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='t';
                h++;
                break;
                 case SDLK_u: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='u';
                h++;
                break;
                 case SDLK_v: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='v';
                h++;
                break;
                 case SDLK_w: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='z';
                h++;
                break;
                 case SDLK_x: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='x';
                h++;
                break;
                 case SDLK_y: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='y';
                h++;
                break;
                 case SDLK_z: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='w';
                h++;
                break;
                 case SDLK_0: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='0';
                h++;
                break;
                 case SDLK_1: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='1';
                h++;
                break;
                 case SDLK_2: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='2';
                h++;
                break;
                 case SDLK_3: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='3';
                h++;
                break;
                 case SDLK_4: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='4';
                h++;
                break;
                 case SDLK_5: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='5';
                h++;
                break;
                 case SDLK_6: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='6';
                h++;
                break;

                 case SDLK_7: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='7';
                h++;
                break;
                 case SDLK_8: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='8';
                h++;
                break;
                 case SDLK_9: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='9';
                h++;
                break;

                case SDLK_KP_MULTIPLY: /* Appui sur la touche Echap, on arrête le programme */
                   moti[h]='\0';
              ll.score=resulta;
    strcpy(ll.nom,moti);
    saveScore(&ll);
    sauvgarde(ll);
                   menu(ecran);
               cont=0;
                break;

            }

            break;

    }

            }
        SDL_Flip(ecran);
    }
      TTF_CloseFont(police);
    TTF_Quit();
    for (i = 0 ; i < 27; i++)
        SDL_FreeSurface(t[i]);
    for (i = 0 ; i < 6; i++)
        SDL_FreeSurface(color[i]);
        SDL_FreeSurface(unepause);
        SDL_FreeSurface(fin);
        SDL_FreeSurface(texte);
        SDL_FreeSurface(b[0]);



    SDL_Quit();



}
void cpytab(int t[][10], cellule c[][10])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            t[i][j]=c[i][j].b;
        }
    }

}
int placervr(int mat[][10],SDL_Surface *b[],int indice,SDL_Surface *t[],int px, int py)
    {

if(b[indice]==t[0])
{
        mat[px][py]=1;
        return(1*10);

}


if(b[indice]==t[1])
{

    mat[px][py]=1;

     mat[px][py+1]=1;
       return(2*10);

}
if(b[indice]==t[2])
{

mat[px][py]=1;

mat[px+1][py]=1;
return(2*10);
}
if(b[indice]==t[3])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;
return(3*10);
}
if(b[indice]==t[4])
{

mat[px][py]=1;

mat[px+1][py]=1;

mat[px+2][py]=1;
return(3*10);
}
if(b[indice]==t[5])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px+1][py+1]=1;
return(3*10);
}
if(b[indice]==t[6])
{

mat[px][py]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;
return(3*10);
}
if(b[indice]==t[7])
{

mat[px][py+1]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;
return(3*10);
}
if(b[indice]==t[8])
{


mat[px][py]=1;

mat[px][py+1]=1;

mat[px+1][py]=1;
return(3*10);
}
if(b[indice]==t[9])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;
return(4*10);
}
if(b[indice]==t[10])
{

mat[px][py]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;

mat[px+2][py]=1;
return(4*10);

}
if(b[indice]==t[11])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px+1][py+1]=1;
return(4*10);

}
if(b[indice]==t[12])
{


mat[px][py+1]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;

mat[px+2][py+1]=1;
return(4*10);
}
if(b[indice]==t[13])
{

mat[px+1][py]=1;

mat[px+1][py+1]=1;

mat[px][py+1]=1;

mat[px+1][py+2]=1;

return(4*10);
}
if(b[indice]==t[14])
{


mat[px][py]=1;

mat[px+1][py]=1;

mat[px+2][py]=1;

mat[px+3][py]=1;
return(4*10);
}
if(b[indice]==t[15])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px][py+3]=1;
return(4*10);
}
if(b[indice]==t[16])
{

mat[px][py]=1;

mat[px+1][py]=1;

mat[px+2][py]=1;

mat[px+3][py]=1;

mat[px+4][py]=1;
return(5*10);
}
if(b[indice]==t[17])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px][py+3]=1;

mat[px][py+4]=1;
return(5*10);
}
if(b[indice]==t[18])
{


mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px+1][py+2]=1;

mat[px+2][py+2]=1;
return(5*10);
}
if(b[indice]==t[19])
{


 mat[px][py]=1;

mat[px+1][py]=1;

mat[px+2][py]=1;

mat[px+2][py+1]=1;

mat[px+2][py+2]=1;
return(5*10);
}
if(b[indice]==t[20])
{


mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px+1][py]=1;

mat[px+2][py]=1;
return(5*10);
}
if(b[indice]==t[21])
{


mat[px+2][py]=1;

mat[px+2][py+1]=1;

mat[px+2][py+2]=1;

mat[px+1][py+2]=1;

mat[px][py+2]=1;
return(5*10);
}
if(b[indice]==t[22])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px+1][py+1]=1;

mat[px+2][py+1]=1;

mat[px+2][py]=1;
return(5*10);
}
if(b[indice]==t[23])
{

mat[px][py]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;

mat[px+1][py+2]=1;

mat[px][py+2]=1;
return(5*10);
}
if(b[indice]==t[24])
{

mat[px][py]=1;

mat[px+1][py]=1;

mat[px+2][py]=1;

mat[px][py+1]=1;

mat[px+2][py+1]=1;
return(5*10);
}
if(b[indice]==t[25])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px+1][py]=1;

mat[px+1][py+2]=1;
return(5*10);
}
if(b[indice]==t[26])
{

mat[px][py]=1;

mat[px][py+1]=1;

mat[px][py+2]=1;

mat[px+1][py]=1;

mat[px+1][py+1]=1;

mat[px+1][py+2]=1;

mat[px+2][py]=1;

mat[px+2][py+1]=1;

mat[px+2][py+2]=1;
return(9*10);
}
    }
int supscorevr(SDL_Surface* b[],int indice,int c[][10],int x,int y,SDL_Surface* t[],SDL_Surface* color[])
{
    int resulta=placervr(c,b,indice,t,x,y);

    int ligne=0,i,j;
 for(i=0; i<10; i++)
        {

            int z=1;
            for(j=0; j<10; j++)
            {
                if(c[i][j]==0)
                {
                    z=0;
                }
            }


            if(z==1)
            {
                ligne++;
             for(j=0; j<10; j++)
            {
                c[i][j]=100;
            }
            }


        }
        int colone=0;
        for(j=0; j<10; j++)
        {

            int z=1;
            for(i=0; i<10; i++)
            {
                if(c[i][j]==0)
                {
                    z=0;
                }
            }
            if(z==1)
            {
                colone++;
             for(i=0; i<10; i++)
            {
                c[i][j]=100;
            }
            }

        }
        if((ligne!=0)||(colone!=0))
        {
         if(((ligne==1)&&(colone==0))||((ligne==0)&&(colone==1)))
         {
             resulta=resulta+100;
         }
        if(((ligne==2)&&(colone==0))||((ligne==0)&&(colone==2)))
         {
             resulta=resulta+300;
         }
         if(((ligne==3)&&(colone==0))||((ligne==0)&&(colone==3)))
         {
             resulta=resulta+600;
         }
         if(((ligne==4)&&(colone==0))||((ligne==0)&&(colone==4)))
         {
             resulta=resulta+1000;
         }
         if(((ligne==5)&&(colone==0))||((ligne==0)&&(colone==5)))
         {
             resulta=resulta+1500;
         }
        }
         for(i=0; i<10; i++)
        {

            for(j=0; j<10; j++)
            {
                if(c[i][j]==100)
                {

                    c[i][j]=0;
                }
            }
        }
    return resulta;
}

void part2 (SDL_Surface* ecran)
{
    SDL_Surface *b[4]= {NULL},*t[27]= {NULL},*color[6]={NULL},*texte = NULL,*lapause=NULL;
    cellule c[10][10],ctmp[10][10];
    int imax=0,jmax=0,imax2=0,jmax2=0,imax3=0,jmax3=0;
    int maxx2,maxx3,on=0;
    int  i,j,k,r,nv1=0,nv2=0,nv3=0,ligne ,colone,resulta=0,d,l,resultatmp=0,maxx=0,x=0,y=0,tempsActuel=0,tempsPrecedent=0,tabvr[10][10],pa=1;
    SDL_Event event;
    SDL_Rect po,pb1,pb2,pb3,ps,ppause;
    TTF_Font *police = NULL;
    char score[20] = "0";
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    ps.x=cordopremierecasesurx;
    ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
    po.x=cordopremierecasesurx;//position de la premiere case
    po.y=cordopremierecasesury;
    ppause.x=450;
    ppause.y=0;
    int cont=1,z;
    color[0]=IMG_Load("jaune.png");
    color[1]=IMG_Load("bleu.png");
    color[2]=IMG_Load("rouge.png");
    color[3]=IMG_Load("vert.png");
    color[4]=IMG_Load("violet.png");
    color[5]=IMG_Load("orange.png");
    lapause=IMG_Load("pause2.png");



    ecran=SDL_SetVideoMode(largeurdelafentre,hauteurdelafentre,32,SDL_HWSURFACE|SDL_DOUBLEBUF );

    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));// ecran recois la couleur blanc
 police = TTF_OpenFont("angelina.ttf", 25);
    t[0]=IMG_Load("0m.png");
    t[1]=IMG_Load("1m.png");
    t[2]=IMG_Load("2m.png");
    t[3]=IMG_Load("3m.png");
    t[4]=IMG_Load("4m.png");
    t[5]=IMG_Load("5m.png");
    t[6]=IMG_Load("6m.png");
    t[7]=IMG_Load("7m.png");
    t[8]=IMG_Load("8m.png");
    t[9]=IMG_Load("9m.png");
    t[10]=IMG_Load("10m.png");
    t[11]=IMG_Load("11m.png");
    t[12]=IMG_Load("12m.png");
    t[13]=IMG_Load("13m.png");
    t[14]=IMG_Load("14m.png");
    t[15]=IMG_Load("15m.png");
    t[16]=IMG_Load("16m.png");
    t[17]=IMG_Load("17m.png");
    t[18]=IMG_Load("18m.png");
    t[19]=IMG_Load("19m.png");
    t[20]=IMG_Load("20m.png");
    t[21]=IMG_Load("21m.png");
    t[22]=IMG_Load("22m.png");
    t[23]=IMG_Load("23m.png");
    t[24]=IMG_Load("24m.png");
    t[25]=IMG_Load("25m.png");
    t[26]=IMG_Load("26m.png");

    b[0]=IMG_Load("carre.png");
    nv1=nombreAleatoire(27);
    nv2=nombreAleatoire(26);
    nv3=nombreAleatoire(25);
    b[1]=t[nv1];
    b[2]=t[nv2];
    b[3]=t[nv3];
    for(i=0; i<10; i++)
    {

        po.x=cordopremierecasesurx;
        for(j=0; j<10; j++)
        {
            c[i][j].a=b[0];
            c[i][j].x= po.x;
            c[i][j].y= po.y;
            c[i][j].b=0;

            po.x=po.x+40;

        }
        po.y=po.y+40;
    }
     texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);

 resulta=0;
 cpytab(tabvr,c);

    while(cont)
    {
        SDL_PollEvent(&event);

       SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb1.x=c[i][j].x;
                pb1.y=c[i][j].y;
                SDL_BlitSurface(c[i][j].a, NULL, ecran, &pb1);


            }
        }

        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
        SDL_BlitSurface(b[1], NULL, ecran, &pb1);
        pb2.x=cordob2surlaxex;
        pb2.y=cordob2surlaxey;
        SDL_BlitSurface(b[2], NULL, ecran, &pb2);
        pb3.x=cordob3surlaxex;
        pb3.y=cordob3surlaxey;
        SDL_BlitSurface(b[3], NULL, ecran, &pb3);
  SDL_BlitSurface(lapause, NULL, ecran, &ppause);

        switch(event.type)
        {
        case SDL_QUIT:
              menu(ecran);
            cont=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
               if((event.motion.x>=450)&&(event.motion.y>0)&&(event.motion.x<500)&&(event.motion.y<=50))
            {
                on=4;
if(pa%2!=0)
                lapause=IMG_Load("pause1.png");
                else
                    lapause=IMG_Load("lecture2.png");
                SDL_BlitSurface(lapause, NULL, ecran, &ppause);

            }
            break;
        case SDL_MOUSEBUTTONUP:
           if(on==4)
            {

if(pa%2!=0)
           lapause=IMG_Load("lecture1.png");
           else
           lapause=IMG_Load("pause2.png");
           pa++;

            }
            on=0;
            break;
        break;
             }


maxx=0;maxx2=0;maxx3=0;
         tempsActuel = SDL_GetTicks();
            cpytab(tabvr,c);
        if ((tempsActuel - tempsPrecedent > 1000) && pa%2!=0 )
        {
            for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b,1,tabvr,i,j,t,color);

if(resultatmp>maxx&&verifier(b[1],c,i,j,t)==1)
{
    maxx=resultatmp;
    imax=i;
    jmax=j;
}
                    cpytab(tabvr,c);

                }
            }




       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b,2,tabvr,i,j,t,color);

if(resultatmp>maxx2&&verifier(b[2],c,i,j,t)==1)
{
    maxx2=resultatmp;
    imax2=i;
    jmax2=j;
}
                    cpytab(tabvr,c);

                }
            }





       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b,3,tabvr,i,j,t,color);

if(resultatmp>maxx3&&verifier(b[3],c,i,j,t)==1)
{
    maxx3=resultatmp;
    imax3=i;
    jmax3=j;
}
                    cpytab(tabvr,c);

                }
            }

            if(maxx>maxx2)
            {
                if(maxx>maxx3)
                {
                    if(verifier(b[1],c,imax,jmax,t)==1)
{
    resulta=resulta+supscore(b,1,c,imax,jmax,t,color);
        nv1=nombreAleatoire(27);
            b[1]=t[nv1];

}

                }
                else
                {
                    if(verifier(b[3],c,imax3,jmax3,t)==1)
{
    resulta=resulta+supscore(b,3,c,imax,jmax,t,color);
      nv3=nombreAleatoire(27);
            b[3]=t[nv3];
}
                }
            }
            else
            {
                if(maxx2>maxx3)
                {
                     if(verifier(b[2],c,imax2,jmax2,t)==1)
{
    resulta=resulta+supscore(b,2,c,imax2,jmax2,t,color);
       nv2=nombreAleatoire(27);
            b[2]=t[nv2];
}

                }
                else
                {
                    if(verifier(b[3],c,imax3,jmax3,t)==1)
{
    resulta=resulta+supscore(b,3,c,imax3,jmax3,t,color);
        nv3=nombreAleatoire(27);
            b[3]=t[nv3];
}
                }
            }






          tempsPrecedent = tempsActuel;
           cpytab(tabvr,c);
        }




sprintf(score, "score : %d", resulta);
SDL_FreeSurface(texte);
texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
ps.x=cordopremierecasesurx;
ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte, NULL, ecran, &ps);
SDL_Flip(ecran);
    }
      TTF_CloseFont(police);
    TTF_Quit();
    SDL_Quit();


}
void part3 (SDL_Surface *ecran)
{
    SDL_Surface *b[4]= {NULL},*t[27]= {NULL},*color[6]={NULL},*texte = NULL,*unepause=NULL,*fin=NULL,*bss=NULL;
    cellule c[10][10];
    int  i,j,k,r,nv1=0,nv2=0,nv3=0,resulta=0,pt=1,h=0,bs=0;
    SDL_Event event;
    SDL_Rect po,pb1,pb2,pb3,ps,ppause,pfin,pbs;
    TTF_Font *police = NULL;
    joueur a;
    char score[20] = "0",bsc[20]="";
    char moti[30]="";
    joueur ll={0};
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    ppause.x=1000;
    ppause.y=0;
    pfin.x=120;
    pfin.y=120;
FILE*f=NULL;
     f=fopen("saved.dat","rb");
if(f!=NULL)
     {
         fread(&a,sizeof(a),1,f);
bs=a.score;
fclose(f);
     }
     else
     {
         bs=0;
     }


   sprintf(bsc,"best : %d",bs);
    ps.x=cordopremierecasesurx;
    ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
    po.x=cordopremierecasesurx;//position de la premiere case
    po.y=cordopremierecasesury;
     pbs.x=ps.x+7*40;
    pbs.y=ps.y;
    int cont=1,on=0;
    color[0]=IMG_Load("jaune.png");
    color[1]=IMG_Load("bleu.png");
    color[2]=IMG_Load("rouge.png");
    color[3]=IMG_Load("vert.png");
    color[4]=IMG_Load("violet.png");
    color[5]=IMG_Load("orange.png");
   fin=IMG_Load("finparti.png");
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    ecran=SDL_SetVideoMode(largeurdelafentre2,hauteurdelafentre2,32,SDL_HWSURFACE|SDL_DOUBLEBUF );
    SDL_WM_SetCaption("block puzzel", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));// ecran recois la couleur blanc
 police = TTF_OpenFont("angelina.ttf", 25);
  unepause=IMG_Load("pause2.png");
    t[0]=IMG_Load("0m.png");
    t[1]=IMG_Load("1m.png");
    t[2]=IMG_Load("2m.png");
    t[3]=IMG_Load("3m.png");
    t[4]=IMG_Load("4m.png");
    t[5]=IMG_Load("5m.png");
    t[6]=IMG_Load("6m.png");
    t[7]=IMG_Load("7m.png");
    t[8]=IMG_Load("8m.png");
    t[9]=IMG_Load("9m.png");
    t[10]=IMG_Load("10m.png");
    t[11]=IMG_Load("11m.png");
    t[12]=IMG_Load("12m.png");
    t[13]=IMG_Load("13m.png");
    t[14]=IMG_Load("14m.png");
    t[15]=IMG_Load("15m.png");
    t[16]=IMG_Load("16m.png");
    t[17]=IMG_Load("17m.png");
    t[18]=IMG_Load("18m.png");
    t[19]=IMG_Load("19m.png");
    t[20]=IMG_Load("20m.png");
    t[21]=IMG_Load("21m.png");
    t[22]=IMG_Load("22m.png");
    t[23]=IMG_Load("23m.png");
    t[24]=IMG_Load("24m.png");
    t[25]=IMG_Load("25m.png");
    t[26]=IMG_Load("26m.png");

    b[0]=IMG_Load("carre.png");
    nv1=nombreAleatoire(27);
    b[1]=t[nv1];
    nv2=nombreAleatoire(26);
    b[2]=t[nv2];
    nv3=nombreAleatoire(25);
    b[3]=t[nv3];
    for(i=0; i<10; i++)
    {

        po.x=cordopremierecasesurx;
        for(j=0; j<10; j++)
        {
            c[i][j].a=b[0];
            c[i][j].x= po.x;
            c[i][j].y= po.y;
            c[i][j].b=0;
            po.x=po.x+40;

        }
        po.y=po.y+40;
    }
     texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);


     // 2

SDL_Surface *b2[4]= {NULL},*texte2 = NULL;
    cellule c2[10][10],ctmp[10][10];
    int imax=0,jmax=0,imax2=0,jmax2=0,imax3=0,jmax3=0;
    int maxx2,maxx3;
    int nv12=0,nv22=0,nv32=0,resulta2,resultatmp=0,maxx=0,tempsActuel=0,tempsPrecedent=0,tabvr[10][10];

SDL_Rect po2,pb12,pb22,pb32,ps2;
    char score2[20] = "0";

    ps2.x=cordopremierecasesurx+500;
    ps2.y=cordopremierecasesury-cordopremierecasesury/2-10;
    po2.x=cordopremierecasesurx+500;//position de la premiere case
    po2.y=cordopremierecasesury;



    b2[0]=b[0];
    b2[1]=b[1];
    b2[2]=b[2];
    b2[3]=b[3];
    for(i=0; i<10; i++)
    {

        po2.x=cordopremierecasesurx+500;
        for(j=0; j<10; j++)
        {
            c2[i][j].a=b2[0];
            c2[i][j].x= po2.x+40;
            c2[i][j].y= po2.y;
            c2[i][j].b=0;
            ctmp[i][j]=c2[i][j];
            po2.x=po2.x+40;

        }
        po2.y=po2.y+40;
    }
     texte2 = TTF_RenderText_Shaded(police, score2, couleurNoire, couleurBlanche);

 resulta2=0;
 cpytab(tabvr,c2);

// end 2
bss = TTF_RenderText_Shaded(police, bsc, couleurNoire, couleurBlanche);
    while(cont)
    {
        SDL_PollEvent(&event);

       SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));



        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb12.x=c2[i][j].x;
                pb12.y=c2[i][j].y;
                SDL_BlitSurface(c2[i][j].a, NULL, ecran, &pb12);


            }
        }

        pb12.y=cordob1surlaxey;
        pb12.x=cordob1surlaxex+500;
        SDL_BlitSurface(b2[1], NULL, ecran, &pb12);
        pb22.x=cordob2surlaxex+500;
        pb22.y=cordob2surlaxey;
        SDL_BlitSurface(b2[2], NULL, ecran, &pb22);
        pb32.x=cordob3surlaxex+500;
        pb32.y=cordob3surlaxey;
        SDL_BlitSurface(b2[3], NULL, ecran, &pb32);

         unepause=IMG_Load("pause2.png");
        SDL_BlitSurface(unepause, NULL, ecran, &ppause);




        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb1.x=c[i][j].x;
                pb1.y=c[i][j].y;
                SDL_BlitSurface(c[i][j].a, NULL, ecran, &pb1);
            }
        }

        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
        SDL_BlitSurface(b[1], NULL, ecran, &pb1);
        pb2.x=cordob2surlaxex;
        pb2.y=cordob2surlaxey;
        SDL_BlitSurface(b[2], NULL, ecran, &pb2);
        pb3.x=cordob3surlaxex;
        pb3.y=cordob3surlaxey;
        SDL_BlitSurface(b[3], NULL, ecran, &pb3);
        SDL_BlitSurface(bss, NULL, ecran, &pbs);
if(pt==1)
{
        switch(event.type)
        {
        case SDL_QUIT:
              menu(ecran);
            cont=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if((event.motion.x>=50)&&(event.motion.y>=500)&&(event.motion.x<170)&&(event.motion.y<=660)&&(rempliepiece(c,b[1],t)==1))//
            {
                on=1;
            }
            if((event.motion.x>=170)&&(event.motion.y>=500)&&(event.motion.x<290)&&(event.motion.y<=660)&&(rempliepiece(c,b[2],t)==1))
            {
                on=2;
            }
            if((event.motion.x>=290)&&(event.motion.y>=500)&&(event.motion.x<410)&&(event.motion.y<=660)&&(rempliepiece(c,b[3],t)==1))
            {
                on=3;
            }
               if((event.motion.x>=1000)&&(event.motion.y>0)&&(event.motion.x<1050)&&(event.motion.y<=50))
            {
                on=4;

                unepause=IMG_Load("pause1.png");
                SDL_BlitSurface(unepause, NULL, ecran, &ppause);

            }
            break;
        case SDL_MOUSEMOTION:
            if(on==1)
            {
                pb1.x=event.motion.x;
                pb1.y=event.motion.y;
                SDL_BlitSurface(b[1], NULL, ecran, &pb1);
            }
            if(on==2)
            {
                pb2.x=event.motion.x;
                pb2.y=event.motion.y;
                SDL_BlitSurface(b[2], NULL, ecran, &pb2);
            }
            if(on==3)
            {
                pb3.x=event.motion.x;
                pb3.y=event.motion.y;
                SDL_BlitSurface(b[3], NULL, ecran, &pb3);
            }
            break;
        case SDL_MOUSEBUTTONUP:
            if((on==1)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454)&&(b[1]!=NULL))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
if(verifier(b[1],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,1, c,k,r,t,color);
            pt=0;

            nv1=nombreAleatoire(27);
            b[1]=t[nv1];


}else
{
        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
          SDL_BlitSurface(b[1], NULL, ecran, &pb1);
}
            }
            if((on==2)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
    if(verifier(b[2],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,2, c,k,r,t,color);
pt=0;

           nv2=nombreAleatoire(27);
            b[2]=t[nv2];

}else
{
        pb2.y=cordob2surlaxey;
        pb2.x=cordob2surlaxex;
          SDL_BlitSurface(b[2], NULL, ecran, &pb2);
}
            }
            if((on==3)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                    if(verifier(b[3],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,3, c,k,r,t,color);
            pt=0;

            nv3=nombreAleatoire(27);
            b[3]=t[nv3];

}else
{
        po.y=cordob3surlaxey;
        po.x=cordob3surlaxex;
          SDL_BlitSurface(b[3], NULL, ecran, &po);
}
            }
            if(on==4)
            {
int ml=resulta;
int mp= resulta2;

            attent2( c,&ml,&mp,ecran,&nv1,&nv2,&nv3,t,b,c2,b2);
resulta=ml;
 resulta2= mp;
            }
            on=0;
            break;

        }

sprintf(score, "score : %d", resulta);
SDL_FreeSurface(texte);
texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
ps.x=cordopremierecasesurx;
ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte, NULL, ecran, &ps);

 if(remplie(c,b,t)==0)
            {
                pt=1;
                SDL_BlitSurface(fin, NULL, ecran, &pfin);
               SDL_WaitEvent(&event);
        switch(event.type)
        {


            case SDL_KEYDOWN:

            switch (event.key.keysym.sym)

            {


                case SDLK_a: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='q';
              h++;

                break;
                 case SDLK_b: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='b';
                h++;
                break;
                 case SDLK_c: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='c';
                h++;
                break;
                 case SDLK_d: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='d';
                h++;
                break;
                 case SDLK_e: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='e';
                h++;
                break;
                 case SDLK_f: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='f';
                h++;
                break;
                 case SDLK_g: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='g';
                h++;
                break;
                 case SDLK_h: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='h';
                h++;
                break;
                 case SDLK_i: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='i';
                h++;
                break;
                 case SDLK_j: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='j';
                h++;
                break;
                 case SDLK_k: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='k';
                h++;
                break;
                 case SDLK_l: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='l';
                h++;
                break;
                 case SDLK_SEMICOLON: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='m';
                h++;
                break;
                 case SDLK_n: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='n';
                h++;
                break;
                 case SDLK_o: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='o';
                h++;
                break;
                 case SDLK_p: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='p';
                h++;
                break;
                 case SDLK_q: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='a';
                h++;
                break;
                 case SDLK_r: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='r';
                h++;
                break;
                 case SDLK_s: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='s';
                h++;
                break;
                 case SDLK_t: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='t';
                h++;
                break;
                 case SDLK_u: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='u';
                h++;
                break;
                 case SDLK_v: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='v';
                h++;
                break;
                 case SDLK_w: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='z';
                h++;
                break;
                 case SDLK_x: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='x';
                h++;
                break;
                 case SDLK_y: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='y';
                h++;
                break;
                 case SDLK_z: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='w';
                h++;
                break;
                 case SDLK_0: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='0';
                h++;
                break;
                 case SDLK_1: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='1';
                h++;
                break;
                 case SDLK_2: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='2';
                h++;
                break;
                 case SDLK_3: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='3';
                h++;
                break;
                 case SDLK_4: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='4';
                h++;
                break;
                 case SDLK_5: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='5';
                h++;
                break;
                 case SDLK_6: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='6';
                h++;
                break;

                 case SDLK_7: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='7';
                h++;
                break;
                 case SDLK_8: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='8';
                h++;
                break;
                 case SDLK_9: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='9';
                h++;
                break;

                case SDLK_KP_MULTIPLY: /* Appui sur la touche Echap, on arrête le programme */
                   moti[h]='\0';
               ll.score=resulta;
    strcpy(ll.nom,moti);
    saveScore(&ll);
    sauvgarde(ll);
                   menu(ecran);
               cont=0;
                break;


            }

            break;

    }

            }




}

else
{





maxx=0;maxx2=0;maxx3=0;
         tempsActuel = SDL_GetTicks();
            cpytab(tabvr,c2);
        if ((tempsActuel - tempsPrecedent > 1000)&& pt==0 )
        {
            for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b2,1,tabvr,i,j,t,color);

if(resultatmp>maxx&&verifier(b2[1],c2,i,j,t)==1)
{
    maxx=resultatmp;
    imax=i;
    jmax=j;
}
                    cpytab(tabvr,c2);

                }
            }




       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b2,2,tabvr,i,j,t,color);

if(resultatmp>maxx2&&verifier(b2[2],c2,i,j,t)==1)
{
    maxx2=resultatmp;
    imax2=i;
    jmax2=j;
}
                    cpytab(tabvr,c2);

                }
            }





       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b2,3,tabvr,i,j,t,color);

if(resultatmp>maxx3&&verifier(b2[3],c2,i,j,t)==1)
{
    maxx3=resultatmp;
    imax3=i;
    jmax3=j;
}
                    cpytab(tabvr,c2);

                }
            }

            if(maxx>maxx2)
            {
                if(maxx>maxx3)
                {
                    if(verifier(b2[1],c2,imax,jmax,t)==1)
{
    resulta2=resulta2+supscore(b2,1,c2,imax,jmax,t,color);
    pt=1;

            b2[1]=t[nombreAleatoire(27)];

}

                }
                else
                {
                    if(verifier(b2[3],c2,imax3,jmax3,t)==1)
{
    resulta2=resulta2+supscore(b2,3,c2,imax,jmax,t,color);
    pt=1;

            b2[3]=t[nombreAleatoire(27)];

}
                }
            }
            else
            {
                if(maxx2>maxx3)
                {
                     if(verifier(b2[2],c2,imax2,jmax2,t)==1)
{
    resulta2=resulta2+supscore(b2,2,c2,imax2,jmax2,t,color);
    pt=1;

            b2[2]=t[nombreAleatoire(27)];

}

                }
                else
                {
                    if(verifier(b2[3],c2,imax3,jmax3,t)==1)
{
    resulta2=resulta2+supscore(b2,3,c2,imax3,jmax3,t,color);
    pt=1;

            b2[3]=t[nombreAleatoire(27)];

}
                }
            }






          tempsPrecedent = tempsActuel;
           cpytab(tabvr,c2);
        }



}
sprintf(score2, "score 2 : %d", resulta2);
SDL_FreeSurface(texte2);
texte2 = TTF_RenderText_Shaded(police, score2, couleurNoire, couleurBlanche);
ps2.x=cordopremierecasesurx+500;
ps2.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte2, NULL, ecran, &ps2);

SDL_Flip(ecran);




    }
      TTF_CloseFont(police);
    TTF_Quit();
    strcpy(ll.nom,moti);
    ll.score=resulta;
    sauvgarde(ll);
    SDL_Quit();


}

void part3SVG (SDL_Surface *ecran)
{
    SDL_Surface *b[4]= {NULL},*t[27]= {NULL},*color[6]={NULL},*texte = NULL,*unepause=NULL,*fin=NULL,*bss=NULL;
    cellule c[10][10];
    int  i,j,k,r,nv1=0,nv2=0,nv3=0,resulta=0,pt=1,h=0,bs=0;
    SDL_Event event;
    SDL_Rect po,pb1,pb2,pb3,ps,ppause,pfin,pbs;
    TTF_Font *police = NULL;
    joueur a;
    char score[20] = "0",bsc[20]="";
    char moti[30]="";
    joueur ll={0};
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    ppause.x=1000;
    ppause.y=0;
    pfin.x=120;
    pfin.y=120;

    ps.x=cordopremierecasesurx;
    ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
    FILE*f=NULL;
     f=fopen("saved.dat","rb");
     if(f!=NULL)
     {
         fread(&a,sizeof(a),1,f);
bs=a.score;
fclose(f);
     }
     else
     {
         bs=0;
     }


   sprintf(bsc,"best : %d",bs);
   pbs.x=ps.x+7*40;
    pbs.y=ps.y;
    po.x=cordopremierecasesurx;//position de la premiere case
    po.y=cordopremierecasesury;
    int cont=1,on=0;
    color[0]=IMG_Load("jaune.png");
    color[1]=IMG_Load("bleu.png");
    color[2]=IMG_Load("rouge.png");
    color[3]=IMG_Load("vert.png");
    color[4]=IMG_Load("violet.png");
    color[5]=IMG_Load("orange.png");
   fin=IMG_Load("finparti.png");
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    ecran=SDL_SetVideoMode(largeurdelafentre2,hauteurdelafentre2,32,SDL_HWSURFACE|SDL_DOUBLEBUF );
    SDL_WM_SetCaption("block puzzel", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));// ecran recois la couleur blanc
 police = TTF_OpenFont("angelina.ttf", 25);
  unepause=IMG_Load("pause2.png");
    t[0]=IMG_Load("0m.png");
    t[1]=IMG_Load("1m.png");
    t[2]=IMG_Load("2m.png");
    t[3]=IMG_Load("3m.png");
    t[4]=IMG_Load("4m.png");
    t[5]=IMG_Load("5m.png");
    t[6]=IMG_Load("6m.png");
    t[7]=IMG_Load("7m.png");
    t[8]=IMG_Load("8m.png");
    t[9]=IMG_Load("9m.png");
    t[10]=IMG_Load("10m.png");
    t[11]=IMG_Load("11m.png");
    t[12]=IMG_Load("12m.png");
    t[13]=IMG_Load("13m.png");
    t[14]=IMG_Load("14m.png");
    t[15]=IMG_Load("15m.png");
    t[16]=IMG_Load("16m.png");
    t[17]=IMG_Load("17m.png");
    t[18]=IMG_Load("18m.png");
    t[19]=IMG_Load("19m.png");
    t[20]=IMG_Load("20m.png");
    t[21]=IMG_Load("21m.png");
    t[22]=IMG_Load("22m.png");
    t[23]=IMG_Load("23m.png");
    t[24]=IMG_Load("24m.png");
    t[25]=IMG_Load("25m.png");
    t[26]=IMG_Load("26m.png");

    b[0]=IMG_Load("carre.png");
    nv1=nombreAleatoire(27);
    b[1]=t[nv1];
    nv2=nombreAleatoire(26);
    b[2]=t[nv2];
    nv3=nombreAleatoire(25);
    b[3]=t[nv3];
    for(i=0; i<10; i++)

    {

        po.x=cordopremierecasesurx;
        for(j=0; j<10; j++)
        {
            c[i][j].a=b[0];
            c[i][j].x= po.x;
            c[i][j].y= po.y;
            c[i][j].b=0;
            po.x=po.x+40;

        }
        po.y=po.y+40;
    }
     texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);


     // 2

SDL_Surface *b2[4]= {NULL},*texte2 = NULL;
    cellule c2[10][10],ctmp[10][10];
    int imax=0,jmax=0,imax2=0,jmax2=0,imax3=0,jmax3=0;
    int maxx2,maxx3;
    int nv12=0,nv22=0,nv32=0,resulta2,resultatmp=0,maxx=0,tempsActuel=0,tempsPrecedent=0,tabvr[10][10];

SDL_Rect po2,pb12,pb22,pb32,ps2;
    char score2[20] = "0";

    ps2.x=cordopremierecasesurx+500;
    ps2.y=cordopremierecasesury-cordopremierecasesury/2-10;
    po2.x=cordopremierecasesurx+500;//position de la premiere case
    po2.y=cordopremierecasesury;



    b2[0]=b[0];
    b2[1]=b[1];
    b2[2]=b[2];
    b2[3]=b[3];
    for(i=0; i<10; i++)
    {

        po2.x=cordopremierecasesurx+500;
        for(j=0; j<10; j++)
        {
            c2[i][j].a=b2[0];
            c2[i][j].x= po2.x+40;
            c2[i][j].y= po2.y;
            c2[i][j].b=0;
            ctmp[i][j]=c2[i][j];
            po2.x=po2.x+40;

        }
        po2.y=po2.y+40;
    }
     texte2 = TTF_RenderText_Shaded(police, score2, couleurNoire, couleurBlanche);

 resulta2=0;
 cpytab(tabvr,c2);
int pl=resulta;
 int ql=resulta2;
  sauvgardeancien4(c,b,t,c2,b2,&pl,&ql);
resulta=pl;
resulta2=ql;
// end 2
bss = TTF_RenderText_Shaded(police, bsc, couleurNoire, couleurBlanche);
    while(cont)
    {
        SDL_PollEvent(&event);

       SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));



        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb12.x=c2[i][j].x;
                pb12.y=c2[i][j].y;
                SDL_BlitSurface(c2[i][j].a, NULL, ecran, &pb12);


            }
        }

        pb12.y=cordob1surlaxey;
        pb12.x=cordob1surlaxex+500;
        SDL_BlitSurface(b2[1], NULL, ecran, &pb12);
        pb22.x=cordob2surlaxex+500;
        pb22.y=cordob2surlaxey;
        SDL_BlitSurface(b2[2], NULL, ecran, &pb22);
        pb32.x=cordob3surlaxex+500;
        pb32.y=cordob3surlaxey;
        SDL_BlitSurface(b2[3], NULL, ecran, &pb32);
   SDL_BlitSurface(bss, NULL, ecran, &pbs);
         unepause=IMG_Load("pause2.png");
        SDL_BlitSurface(unepause, NULL, ecran, &ppause);




        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                pb1.x=c[i][j].x;
                pb1.y=c[i][j].y;
                SDL_BlitSurface(c[i][j].a, NULL, ecran, &pb1);
            }
        }

        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
        SDL_BlitSurface(b[1], NULL, ecran, &pb1);
        pb2.x=cordob2surlaxex;
        pb2.y=cordob2surlaxey;
        SDL_BlitSurface(b[2], NULL, ecran, &pb2);
        pb3.x=cordob3surlaxex;
        pb3.y=cordob3surlaxey;
        SDL_BlitSurface(b[3], NULL, ecran, &pb3);
if(pt==1)
{
        switch(event.type)
        {
        case SDL_QUIT:
              menu(ecran);
            cont=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if((event.motion.x>=50)&&(event.motion.y>=500)&&(event.motion.x<170)&&(event.motion.y<=660)&&(rempliepiece(c,b[1],t)==1))//
            {
                on=1;
            }
            if((event.motion.x>=170)&&(event.motion.y>=500)&&(event.motion.x<290)&&(event.motion.y<=660)&&(rempliepiece(c,b[2],t)==1))
            {
                on=2;
            }
            if((event.motion.x>=290)&&(event.motion.y>=500)&&(event.motion.x<410)&&(event.motion.y<=660)&&(rempliepiece(c,b[3],t)==1))
            {
                on=3;
            }
               if((event.motion.x>=1000)&&(event.motion.y>0)&&(event.motion.x<1050)&&(event.motion.y<=50))
            {
                on=4;

                unepause=IMG_Load("pause1.png");
                SDL_BlitSurface(unepause, NULL, ecran, &ppause);

            }
            break;
        case SDL_MOUSEMOTION:
            if(on==1)
            {
                pb1.x=event.motion.x;
                pb1.y=event.motion.y;
                SDL_BlitSurface(b[1], NULL, ecran, &pb1);
            }
            if(on==2)
            {
                pb2.x=event.motion.x;
                pb2.y=event.motion.y;
                SDL_BlitSurface(b[2], NULL, ecran, &pb2);
            }
            if(on==3)
            {
                pb3.x=event.motion.x;
                pb3.y=event.motion.y;
                SDL_BlitSurface(b[3], NULL, ecran, &pb3);
            }
            break;
        case SDL_MOUSEBUTTONUP:
            if((on==1)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454)&&(b[1]!=NULL))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
if(verifier(b[1],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,1, c,k,r,t,color);
            pt=0;

           nv1=nombreAleatoire(27);
            b[1]=t[nv1];

}else
{
        pb1.y=cordob1surlaxey;
        pb1.x=cordob1surlaxex;
          SDL_BlitSurface(b[1], NULL, ecran, &pb1);
}
            }
            if((on==2)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
    if(verifier(b[2],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,2, c,k,r,t,color);
pt=0;

           nv2=nombreAleatoire(27);
            b[2]=t[nv2];
}else
{
        pb2.y=cordob2surlaxey;
        pb2.x=cordob2surlaxex;
          SDL_BlitSurface(b[2], NULL, ecran, &pb2);
}
            }
            if((on==3)&&(event.motion.x>=50)&&(event.motion.x<=450)&&(event.motion.y>=54)&&(event.motion.y<=454))
            {
                r=((event.motion.x-54)/40);
                k=((event.motion.y-50)/40);
                    if(verifier(b[3],c,k,r,t)==1)
{


            resulta=resulta+supscore(b,3, c,k,r,t,color);
            pt=0;
nv3=nombreAleatoire(27);
            b[3]=t[nv3];

}else
{
        po.y=cordob3surlaxey;
        po.x=cordob3surlaxex;
          SDL_BlitSurface(b[3], NULL, ecran, &po);
}
            }
            if(on==4)
            {
int ml=resulta;
int mp= resulta2;

            attent2( c,&ml,&mp,ecran,&nv1,&nv2,&nv3,t,b,c2,b2);
resulta=ml;
 resulta2= mp;


            }
            on=0;
            break;

        }

sprintf(score, "score : %d", resulta);
SDL_FreeSurface(texte);
texte = TTF_RenderText_Shaded(police, score, couleurNoire, couleurBlanche);
ps.x=cordopremierecasesurx;
ps.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte, NULL, ecran, &ps);

 if(remplie(c,b,t)==0)
            {
                pt=1;
                SDL_BlitSurface(fin, NULL, ecran, &pfin);
               SDL_WaitEvent(&event);
        switch(event.type)
        {


            case SDL_KEYDOWN:

            switch (event.key.keysym.sym)

            {


                case SDLK_a: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='q';
              h++;

                break;
                 case SDLK_b: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='b';
                h++;
                break;
                 case SDLK_c: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='c';
                h++;
                break;
                 case SDLK_d: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='d';
                h++;
                break;
                 case SDLK_e: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='e';
                h++;
                break;
                 case SDLK_f: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='f';
                h++;
                break;
                 case SDLK_g: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='g';
                h++;
                break;
                 case SDLK_h: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='h';
                h++;
                break;
                 case SDLK_i: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='i';
                h++;
                break;
                 case SDLK_j: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='j';
                h++;
                break;
                 case SDLK_k: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='k';
                h++;
                break;
                 case SDLK_l: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='l';
                h++;
                break;
                 case SDLK_SEMICOLON: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='m';
                h++;
                break;
                 case SDLK_n: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='n';
                h++;
                break;
                 case SDLK_o: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='o';
                h++;
                break;
                 case SDLK_p: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='p';
                h++;
                break;
                 case SDLK_q: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='a';
                h++;
                break;
                 case SDLK_r: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='r';
                h++;
                break;
                 case SDLK_s: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='s';
                h++;
                break;
                 case SDLK_t: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='t';
                h++;
                break;
                 case SDLK_u: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='u';
                h++;
                break;
                 case SDLK_v: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='v';
                h++;
                break;
                 case SDLK_w: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='z';
                h++;
                break;
                 case SDLK_x: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='x';
                h++;
                break;
                 case SDLK_y: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='y';
                h++;
                break;
                 case SDLK_z: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='w';
                h++;
                break;
                 case SDLK_0: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='0';
                h++;
                break;
                 case SDLK_1: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='1';
                h++;
                break;
                 case SDLK_2: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='2';
                h++;
                break;
                 case SDLK_3: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='3';
                h++;
                break;
                 case SDLK_4: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='4';
                h++;
                break;
                 case SDLK_5: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='5';
                h++;
                break;
                 case SDLK_6: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='6';
                h++;
                break;

                 case SDLK_7: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='7';
                h++;
                break;
                 case SDLK_8: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='8';
                h++;
                break;
                 case SDLK_9: /* Appui sur la touche Echap, on arrête le programme */
                moti[h]='9';
                h++;
                break;

                case SDLK_KP_MULTIPLY: /* Appui sur la touche Echap, on arrête le programme */
                   moti[h]='\0';
               ll.score=resulta;
    strcpy(ll.nom,moti);
    saveScore(&ll);
    sauvgarde(ll);
                   menu(ecran);
               cont=0;
                break;

            }

            break;

    }

            }




}

else
{





maxx=0;maxx2=0;maxx3=0;
         tempsActuel = SDL_GetTicks();
            cpytab(tabvr,c2);
        if ((tempsActuel - tempsPrecedent > 1000)&& pt==0 )
        {
            for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b2,1,tabvr,i,j,t,color);

if(resultatmp>maxx&&verifier(b2[1],c2,i,j,t)==1)
{
    maxx=resultatmp;
    imax=i;
    jmax=j;
}
                    cpytab(tabvr,c2);

                }
            }




       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b2,2,tabvr,i,j,t,color);

if(resultatmp>maxx2&&verifier(b2[2],c2,i,j,t)==1)
{
    maxx2=resultatmp;
    imax2=i;
    jmax2=j;
}
                    cpytab(tabvr,c2);

                }
            }





       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    resultatmp=supscorevr(b2,3,tabvr,i,j,t,color);

if(resultatmp>maxx3&&verifier(b2[3],c2,i,j,t)==1)
{
    maxx3=resultatmp;
    imax3=i;
    jmax3=j;
}
                    cpytab(tabvr,c2);

                }
            }

            if(maxx>maxx2)
            {
                if(maxx>maxx3)
                {
                    if(verifier(b2[1],c2,imax,jmax,t)==1)
{
    resulta2=resulta2+supscore(b2,1,c2,imax,jmax,t,color);
    pt=1;

            b2[1]=t[nombreAleatoire(27)];

}

                }
                else
                {
                    if(verifier(b2[3],c2,imax3,jmax3,t)==1)
{
    resulta2=resulta2+supscore(b2,3,c2,imax,jmax,t,color);
    pt=1;

            b2[3]=t[nombreAleatoire(27)];

}
                }
            }
            else
            {
                if(maxx2>maxx3)
                {
                     if(verifier(b2[2],c2,imax2,jmax2,t)==1)
{
    resulta2=resulta2+supscore(b2,2,c2,imax2,jmax2,t,color);
    pt=1;

            b2[2]=t[nombreAleatoire(27)];

}

                }
                else
                {
                    if(verifier(b2[3],c2,imax3,jmax3,t)==1)
{
    resulta2=resulta2+supscore(b2,3,c2,imax3,jmax3,t,color);
    pt=1;

            b2[3]=t[nombreAleatoire(27)];

}
                }
            }






          tempsPrecedent = tempsActuel;
           cpytab(tabvr,c2);
        }



}
sprintf(score2, "score 2 : %d", resulta2);
SDL_FreeSurface(texte2);
texte2 = TTF_RenderText_Shaded(police, score2, couleurNoire, couleurBlanche);
ps2.x=cordopremierecasesurx+500;
ps2.y=cordopremierecasesury-cordopremierecasesury/2-10;
SDL_BlitSurface(texte2, NULL, ecran, &ps2);

SDL_Flip(ecran);




    }
      TTF_CloseFont(police);
    TTF_Quit();
    strcpy(ll.nom,moti);
    ll.score=resulta;
    sauvgarde(ll);
    SDL_Quit();


}
void m1(SDL_Surface *ecran)
{
   SDL_Surface *p1s=NULL;
   SDL_Surface *p1s2=NULL;
   SDL_Rect p1p,p1p2;
    TTF_Font *police2 = NULL;
    char p1[]="nouvelle partie ",p12[]="continuer la partie sauvegardé";
    police2= TTF_OpenFont("angelina.ttf", 50);
SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
p1s=TTF_RenderText_Shaded(police2, p1, couleurNoire, couleurBlanche);
p1s2=TTF_RenderText_Shaded(police2, p12, couleurNoire, couleurBlanche);

int continuer=1;
SDL_Event event;

p1p.x=100;
p1p.y=200;
p1p2.x=100;
p1p2.y=300;

     while (continuer)
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
               menu(ecran);
            continuer=0;
                break;
            case SDL_MOUSEBUTTONUP:

                if (event.button.button == SDL_BUTTON_LEFT)
                {

                if(event.button.x>100 && event.button.x<p1s->w+100 && event.button.y>200 && event.button.y<200+p1s->h)

                    part1(ecran);
                    if(event.button.x>100 && event.button.x<p1s2->w+100 && event.button.y>300 && event.button.y<300+p1s2->h)

                    part1SVG(ecran);













        }
 break;
        }

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));



        SDL_BlitSurface(p1s, NULL, ecran, &p1p);
        SDL_BlitSurface(p1s2, NULL, ecran, &p1p2);

        SDL_Flip(ecran);

    }

}
void m3(SDL_Surface *ecran)
{
   SDL_Surface *p1s=NULL;
   SDL_Surface *p1s2=NULL;
   SDL_Rect p1p,p1p2;
    TTF_Font *police2 = NULL;
    char p1[]="nouvelle partie ",p12[]="continuer la partie sauvegardé";
    police2= TTF_OpenFont("angelina.ttf", 50);
SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
p1s=TTF_RenderText_Shaded(police2, p1, couleurNoire, couleurBlanche);
p1s2=TTF_RenderText_Shaded(police2, p12, couleurNoire, couleurBlanche);

int continuer=1;
SDL_Event event;

p1p.x=100;
p1p.y=200;
p1p2.x=100;
p1p2.y=300;

     while (continuer)
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                 menu(ecran);
            continuer=0;
                break;
            case SDL_MOUSEBUTTONUP:

                if (event.button.button == SDL_BUTTON_LEFT)
                {

                if(event.button.x>100 && event.button.x<p1s->w+100 && event.button.y>200 && event.button.y<200+p1s->h)

                    part3(ecran);
                    if(event.button.x>100 && event.button.x<p1s2->w+100 && event.button.y>300 && event.button.y<300+p1s2->h)

                    part3SVG(ecran);













        }
 break;
        }

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));



        SDL_BlitSurface(p1s, NULL, ecran, &p1p);
        SDL_BlitSurface(p1s2, NULL, ecran, &p1p2);

        SDL_Flip(ecran);

    }

}
void menu (SDL_Surface *ecran)
{
    SDL_Surface *texte = NULL,*p1s=NULL,*p2s=NULL,*p3s=NULL;
    SDL_Rect position,p1p,p2p,p3p;
    SDL_Event event;
    TTF_Font *police = NULL,*police2 = NULL;
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
    int continuer = 1;
    int tempsActuel = 0, tempsPrecedent = 0, compteur = 0;
    char titre[20] = "BLOCK PUZZEL",p1[]="classique",p2[]="machine",p3[]="humain vs machine";

ecran = SDL_SetVideoMode(700, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    /* Chargement de la police */
    police = TTF_OpenFont("angelina.ttf", 75);
    police2= TTF_OpenFont("angelina.ttf", 50);

p1s=TTF_RenderText_Shaded(police2, p1, couleurNoire, couleurBlanche);
p2s=TTF_RenderText_Shaded(police2, p2, couleurNoire, couleurBlanche);
p3s=TTF_RenderText_Shaded(police2, p3, couleurNoire, couleurBlanche);
texte = TTF_RenderText_Shaded(police, titre, couleurNoire, couleurBlanche);
position.x =  ecran->w / 2 - texte->w / 2;
position.y = ecran->h / 2 - texte->h / 2-200;
p1p.x=100;
p1p.y=200;
p2p.x=100;
p2p.y=300;
p3p.x=100;
p3p.y=400;
    while (continuer)
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_MOUSEBUTTONUP:

                if (event.button.button == SDL_BUTTON_LEFT)
                {

                if(event.button.x>100 && event.button.x<p1s->w+100 && event.button.y>200 && event.button.y<200+p1s->h)

                   m1(ecran);
                    if(event.button.x>100 && event.button.x<p2s->w+100 && event.button.y>300 && event.button.y<300+p2s->h)

                    part2(ecran);
                    if(event.button.x>100 && event.button.x<p3s->w+100 && event.button.y>400 && event.button.y<400+p1s->h)

                    m3(ecran);


        }
 break;
        }

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));


        SDL_BlitSurface(texte, NULL, ecran, &position);
        SDL_BlitSurface(p1s, NULL, ecran, &p1p);
        SDL_BlitSurface(p2s, NULL, ecran, &p2p);
        SDL_BlitSurface(p3s, NULL, ecran, &p3p);
        SDL_Flip(ecran);

    }

    TTF_CloseFont(police);


    SDL_FreeSurface(texte);

}
