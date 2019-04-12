#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <time.h>

typedef struct Enemy
{
  SDL_Surface *image[3];
  SDL_Surface *image2[3];
  SDL_Surface *Hit;
  SDL_Surface *imageActuel;
  SDL_Rect position;
  SDL_Rect positionO;
  int frame;
  int direction;

}Enemy;

Enemy AnimateEnemy(Enemy Ennemie,int stat);
Enemy InitEnemy(Enemy Ennemie,int x, int y);
void  AfficherEnemy(Enemy Ennemie,SDL_Surface *screen);
Enemy MoveEnemy(Enemy Ennemie,SDL_Rect personnage,int *stat);

