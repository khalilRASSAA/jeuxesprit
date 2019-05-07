
#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include <unistd.h>


typedef struct enigme2{

	SDL_Surface *afficher_enigme2;
	SDL_Rect pos_enigme2;
	SDL_Surface *calque_enigme2;
	SDL_Surface *imggameover;
	int x;
	int y;
	int color;
	int start;
	int lost ;
}enigme2;

void initialiser_enigme2(enigme2 *enig);
void afficher_enigme2(enigme2 enig, SDL_Surface *ecran);
void resolution_enigme2(enigme2 *enig,SDL_Surface *ecran);


#endif