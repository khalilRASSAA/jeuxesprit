#include "structs.h"
Enemy InitEnemy(Enemy Ennemie,int x, int y)
{

  Ennemie.image2[0]=IMG_Load("sp1.png");
  Ennemie.image2[1]=IMG_Load("sp2.png");
  Ennemie.image2[2]=IMG_Load("sp3.png");
  Ennemie.image[0]=IMG_Load("sp11.png");
  Ennemie.image[1]=IMG_Load("sp22.png");
  Ennemie.image[2]=IMG_Load("sp33.png");
  Ennemie.Hit=IMG_Load("hit.png");
  Ennemie.imageActuel=Ennemie.image[0];
  Ennemie.position.x=x;
  Ennemie.position.y=y;
  Ennemie.positionO=Ennemie.position;
  Ennemie.frame=0;
  Ennemie.direction=0;

  return Ennemie;
}
void  AfficherEnemy(Enemy Ennemie,SDL_Surface *screen)
{
  SDL_BlitSurface(Ennemie.imageActuel,NULL,screen,&Ennemie.position);
}

Enemy AnimateEnemy(Enemy Ennemie,int stat)
{
  if (Ennemie.frame==2) {
    Ennemie.frame=0;
  }
  else
  Ennemie.frame++;
if (Ennemie.direction==0)
{Ennemie.imageActuel=Ennemie.image[Ennemie.frame];}
else
{Ennemie.imageActuel=Ennemie.image2[Ennemie.frame];}
  if(stat==1)
    Ennemie.imageActuel=Ennemie.Hit;
  return Ennemie;

}
Enemy MoveEnemy(Enemy Ennemie,SDL_Rect personnage,int *stat)
{

int distance;

  if(Ennemie.position.x>=personnage.x)
    distance=Ennemie.position.x-personnage.x;
  else
    distance=personnage.x-Ennemie.position.x;
if(distance<50)*stat=1;
else *stat=0;
    if(distance<200)
      {
        if(Ennemie.position.x>=personnage.x)
          Ennemie.direction=0;
        else
          Ennemie.direction=1;
      }
      else
    {  if(Ennemie.positionO.x+100==Ennemie.position.x)
          Ennemie.direction=0;
      if(Ennemie.positionO.x-100==Ennemie.position.x)

        Ennemie.direction=1;}
      if(Ennemie.direction==1)
      {
        Ennemie.position.x+=5;
      }
      if(Ennemie.direction==0)
      {
        Ennemie.position.x-=5;
      }


  return Ennemie;
}

