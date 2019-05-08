#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"struct.h"

Enemy InitEnemy(Enemy Ennemie,int x, int y)
{
  Ennemie.image[0]=IMG_Load("rpg1.png");
  Ennemie.image[1]=IMG_Load("rpg2.png");
  Ennemie.image[2]=IMG_Load("rpg3.png");
  Ennemie.Hit=IMG_Load("rpg4.png");

   Ennemie.image2[0]=IMG_Load("rpd1.png");
  Ennemie.image2[1]=IMG_Load("rpd2.png");
  Ennemie.image2[2]=IMG_Load("rpd3.png");

  Ennemie.follow=IMG_Load("grr.png");
  Ennemie.posfollow.x=x-100;
  Ennemie.posfollow.y=y;
  Ennemie.imageActuel=Ennemie.image[0];
  Ennemie.position.x=x;
  Ennemie.position.y=y;
  Ennemie.positionO=Ennemie.position;
  Ennemie.frame=0;
  Ennemie.direction=0;
  Ennemie.died=0;
  return Ennemie;
}

void  AfficherEnemy(Enemy Ennemie,SDL_Surface *screen,SDL_Rect personnage)
{
  int distance;
  distance=Ennemie.position.x-personnage.x;
  Ennemie.posfollow.x=Ennemie.position.x;
  Ennemie.posfollow.y=Ennemie.position.y-100;
  SDL_BlitSurface(Ennemie.imageActuel,NULL,screen,&Ennemie.position);
  if(distance<300){
    SDL_BlitSurface(Ennemie.follow,NULL,screen,&Ennemie.posfollow);
  }
}
Enemy AnimateEnemy(Enemy Ennemie,int stat)
{
  if (Ennemie.frame==2) {
    Ennemie.frame=0;
  }
  else
  Ennemie.frame++;
	if (Ennemie.direction==1)
 	 	Ennemie.imageActuel=Ennemie.image[Ennemie.frame];
	else if(Ennemie.direction==0)
	 	 Ennemie.imageActuel=Ennemie.image2[Ennemie.frame];
  if(stat==1)
    Ennemie.imageActuel=Ennemie.Hit;
  return Ennemie;

}



Enemy MoveEnemy(Enemy Ennemie,SDL_Rect personnage,int *stat,int mouvment)
{

int distance;

  if(Ennemie.position.x>=personnage.x)
    distance=Ennemie.position.x-personnage.x;
  else
    distance=personnage.x-Ennemie.position.x;
if(distance<50)*stat=1;
else *stat=0;
    if(distance<300)
      {
        if(Ennemie.position.x>=personnage.x)
          Ennemie.direction=0;
        else
          Ennemie.direction=1;
      }

      else
    {  if(Ennemie.positionO.x+200<=Ennemie.position.x)
          Ennemie.direction=0;

      if(Ennemie.positionO.x-200>=Ennemie.position.x)

        Ennemie.direction=1;}


      if(Ennemie.direction==1)
      {
        Ennemie.position.x+=4;
      }
      if(Ennemie.direction==0)
      {
        Ennemie.position.x-=4;
      }
      //printf("%d\n",distance);
      //printf("%d\n dir",distance);
      if(mouvment==1){
      	Ennemie.position.x-=5;
      	Ennemie.positionO.x-=5;
      }
      if (mouvment==2)	{

      	Ennemie.position.x+=5;
      	Ennemie.positionO.x+=5;
      }
      if ((mouvment==3)&&(personnage.y>50)){
         // Ennemie.position.x-=50;
       // Ennemie.positionO.x-=50;
}
  return Ennemie;

}

Enemy diedennemie(Enemy Ennemie,int coe){

  if (coe==1){

    Ennemie.image[0]=NULL;
    Ennemie.image[1]=NULL;
    Ennemie.image[2]=NULL;
    Ennemie.Hit=NULL;

    Ennemie.image2[0]=NULL;
    Ennemie.image2[1]=NULL;
    Ennemie.image2[2]=NULL;
    Ennemie.died=1;
    Ennemie.follow=NULL;
  }
  return Ennemie;
}