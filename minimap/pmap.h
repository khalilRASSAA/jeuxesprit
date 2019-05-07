
#ifndef PMAP_H_INCLUDED
#define PMAP_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct pmap{
	int nbmoved;
	SDL_Surface *afficher_pmap;
	SDL_Rect pos_pmap;
	SDL_Surface *afficher_pperso;
	SDL_Rect pos_pperso;
}pmap;

	void initialiser_pmap(pmap *pmap);
	void afficher_pmap(pmap *pmap,SDL_Surface *ecran,int mouvment);
#endif
