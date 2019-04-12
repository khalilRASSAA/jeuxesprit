#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
 #include <unistd.h>

typedef struct hero
{
	int mouvment;
	SDL_Rect pos_hero[9];
	SDL_Surface *afficher_hero[9];
	SDL_Rect pos_hero2;
	int farm;
	int vie;
	SDL_Surface *afficher_vie;
	int score;
	SDL_Surface *afficher_score;
	SDL_Rect pos_vie;
	
}hero;
void initialiser_evan(hero *evan);
int animation_perso(hero evan);
void afficher_evan(hero evan,SDL_Surface *ecran);
int mouvment(hero evan,SDL_Event *event);

#endif
