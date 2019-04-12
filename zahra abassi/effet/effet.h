#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#include <SDL/SDL_ttf.h>
 #include <unistd.h>



typedef struct effet{

	SDL_Surface *afficher_effet;
	SDL_Rect pos_effet;
}effet;


void initialiser_effet(effet *fly);
void afficher_effet(effet *fly,SDL_Surface *ecran);





#endif
