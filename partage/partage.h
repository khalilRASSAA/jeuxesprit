#ifndef PARTAGE_ECRANH_H_INCLUDED
#define PARTAGE_ECRANH_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct background
{
	SDL_Surface *background1;
	int  speed_camera1;
        int  speed_camera2;
	SDL_Rect camera1;
	SDL_Rect camera2;
        SDL_Rect positionback1;
	SDL_Rect positionback2;
}background;


void initialiser_backgroundm(background *bckgm1 , background *bckgm2)
void afficher_backgroundm(background bckgm1,background bckgm2 ,SDL_Surface *ecran)





#endif // PARTAGE_ECRANH_H_INCLUDED
