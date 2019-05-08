/**
* @file enigme2.c
* @brief enigma 2.
* @author X Team
* @version 1
* @date May 05, 2019
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"enigme2.h"
/**
* @brief To get color of a position .
* @param surface 
* @param x
* @param y
* @return color
*/
SDL_Color GetPixel(SDL_Surface *surface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;
	char* pPosition = ( char* ) surface->pixels ;
	pPosition += ( surface->pitch * y ) ;
	pPosition += ( surface->format->BytesPerPixel * x ) ;
	memcpy ( &col , pPosition , surface->format->BytesPerPixel ) ;
	SDL_GetRGB ( col , surface->format , &color.r , &color.g , &color.b ) ;
	return ( color ) ;
}
/**
* @brief To write the question .
* @param ecran 
* @param qus the question
* @return nothing
*/
void writeqs(SDL_Surface *ecran,char qus[]){

  
  SDL_Color color;
    color.r = 70 ;
        color.g = 0 ;
        color.b = 0 ;
  TTF_Font *font = NULL;
  TTF_Init();
  SDL_Rect posqus;  
  posqus.x=20;
  posqus.y=20; 
  SDL_Surface *message;
  font=TTF_OpenFont("Comic_Sans_MS_Bold.ttf",17);
  message= TTF_RenderText_Solid(font,qus,color);
  SDL_BlitSurface (message,NULL,ecran,&posqus);
  TTF_Quit();
}
/**
* @brief To write the question .
* @param ecran 
* @param qus the question
* @return nothing
*/
void writeqs2(SDL_Surface *ecran,char qus[]){

  
  SDL_Color color;
    color.r = 70 ;
        color.g = 0 ;
        color.b = 0 ;
  TTF_Font *font = NULL;
  TTF_Init();
  SDL_Rect posqus;  
  posqus.x=20;
  posqus.y=40; 
  SDL_Surface *message;
  font=TTF_OpenFont("Comic_Sans_MS_Bold.ttf",17);
  message= TTF_RenderText_Solid(font,qus,color);
  SDL_BlitSurface (message,NULL,ecran,&posqus);
  TTF_Quit();
}
/**
* @brief To return a number when there is collusion with a color  .
* @param calque 
* @param x position
* @param y position
* @return 1 or 2 or 3 or 0 
*/
int collision_Parfaiteenigme(SDL_Surface *calque,int x,int y){

  SDL_Color col;
  col=GetPixel(calque,x,y);
  printf("%d    %d   %d\n",col.r,col.b,col.g);
  if ((col.r==0)&&(col.b==0)&&(col.g==0))
    return 1;
  else if ((col.r==0)&&(col.b==1)&&(col.g==255))
    return 2;
  else if ((col.r==254)&&(col.b==0)&&(col.g==0))
    return 3;
  else 
    return 0;
}
/**
* @brief to initiate the enigma  .
* @param enig 
* @return nothing 
*/
void initialiser_enigme2(enigme2 *enig){

    enig->afficher_enigme2=IMG_Load("map.jpg");

    enig->calque_enigme2=IMG_Load("calque.jpg");
    enig->imggameover=IMG_Load("gameover.png");

     enig->pos_enigme2.x=0;
     enig->pos_enigme2.y=0;
     enig->start=0;
     enig->x=0;
     enig->y=0;
     enig->lost=0;
}
/**
* @brief to initiate the enigma  .
* @param enig 
* @param ecran
* @return nothing 
*/
void afficher_enigme2(enigme2 enig, SDL_Surface *ecran){
  
  SDL_BlitSurface(enig.afficher_enigme2,NULL,ecran,&(enig.pos_enigme2));
}
/**
* @brief to solve the enigma  .
* @param enig 
* @param ecran 
* @return nothing 
*/
void resolution_enigme2(enigme2 *enig,SDL_Surface *ecran){
int co;
  SDL_Event e;
  SDL_PollEvent(&e);
  char qus[100];
  SDL_GetMouseState(&enig->x,&enig->y);
  printf("%d %d\n",enig->x,enig->y);
  co=collision_Parfaiteenigme(enig->calque_enigme2,enig->x,enig->y);
    printf("%d\n",co);
    if (co==2){
      enig->start=1;
    }
    if (enig->start==0){
        sprintf(qus," click on evan and show ");
        writeqs(ecran,qus);
        sprintf(qus," him the path to dana ");
        writeqs2(ecran,qus);
    }
    else {
          if (co==1){
            SDL_BlitSurface(enig->imggameover,NULL,ecran,&enig->pos_enigme2);
            SDL_Flip(ecran);
            SDL_Delay(2000);
            enig->lost=1;
          }
          else if (co==3){
            printf("you won\n");
            sprintf(qus,"you won");
            writeqs(ecran,qus);
            enig->lost=2;
          }
    }
}
