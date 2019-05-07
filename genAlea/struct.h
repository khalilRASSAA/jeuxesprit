
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


typedef struct enigme
{
	SDL_Rect posenigme; 
	SDL_Surface *background;
	SDL_Surface *hand2;
	SDL_Surface *hand1;
	SDL_Surface *un;
	SDL_Surface *deux;
	SDL_Surface *answer;
	SDL_Surface *rep1;
	SDL_Surface *rep2;
	SDL_Rect poshand1; 
	SDL_Rect poshand2; 
	SDL_Rect posrep1;
	SDL_Rect posrep2; 
	SDL_Rect posun;
	SDL_Rect posdeux;
	SDL_Rect posanswer; 
	SDL_Rect posquiz;
	SDL_Rect reponse;
	int handclose;
	int reponseplayer;
	int scoreenigme;
	int random;
	int rep;
	int reponseplayerstate;
	int enigmeresolu;
} enigme; 



	void randomquiz(enigme *enig);
	int correctrep(enigme *enig,char nom_fichier[]);
	


#endif
