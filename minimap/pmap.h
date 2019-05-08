/**
* @file pmap.h
* @brief minimap.
* @author X Team
* @version 1
* @date Apr 05, 2019
*
*/
#ifndef PMAP_H_INCLUDED
#define PMAP_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
/**
* @struct pmap
* @brief struct for minimap
*/
typedef struct pmap{
	int nbmoved; /*!< integer. */
	SDL_Surface *afficher_pmap; /*!< Surface. */
	SDL_Rect pos_pmap; /*!< Rectangle*/
	SDL_Surface *afficher_pperso; /*!< Surface. */
	SDL_Rect pos_pperso; /*!< Rectangle*/
}pmap;

	void initialiser_pmap(pmap *pmap);
	void afficher_pmap(pmap *pmap,SDL_Surface *ecran,int mouvment);
#endif
