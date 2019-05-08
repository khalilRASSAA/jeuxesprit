/**
* @file enigme2.h
* @author X Team
* @version 1
* @date May 05, 2019
*
*/
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
/**
* @struct enigmes2
* @brief struct for enigme2
*/

typedef struct enigme2{

	SDL_Surface *afficher_enigme2; /*!< Surface. */
	SDL_Rect pos_enigme2; /*!< Rectangle*/
	SDL_Surface *calque_enigme2; /*!< Surface. */  
	SDL_Surface *imggameover; /*!< Surface. */
	int x; /*!< integer. */
	int y; /*!< integer. */
	int color; /*!< integer. */
	int start; /*!< integer. */
	int lost ; /*!< integer. */
}enigme2;

void initialiser_enigme2(enigme2 *enig);
void afficher_enigme2(enigme2 enig, SDL_Surface *ecran);
void resolution_enigme2(enigme2 *enig,SDL_Surface *ecran);


#endif
