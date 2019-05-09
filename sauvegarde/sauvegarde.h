
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


typedef struct hero
{
	int mouvment;
	SDL_Rect pos_hero[9];
	SDL_Surface *afficher_hero;
	SDL_Rect pos_hero2;
	int farm;
	int vie;
	SDL_Surface *afficher_vie;
	int score;
	SDL_Surface *afficher_score;
	SDL_Rect pos_vie;
	
}hero;
typedef struct objet{

	SDL_Surface *afficher_objet;
	SDL_Rect pos_objet;
}objet;
typedef struct background{

	SDL_Surface *afficher_background;
	SDL_Rect pos_background;
	SDL_Rect pos_background2;
}background;

objet chouka;
	
	background bckg;
Enemy e;
hero evan;

void sauvegarde (char fich[20]);
void lire (char fich[20]);



#endif
