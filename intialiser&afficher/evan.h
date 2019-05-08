/**
* @file evan.h
* @brief initiate and show main character.
* @author X Team
* @version 1
* @date May 05, 2019
*
*/
#ifndef EVAN_H_INCLUDED
#define EVAN_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include <time.h>
#include<SDL/SDL_ttf.h>
#include <unistd.h>

/**
* @struct hero
* @brief struct for main character
*/
typedef struct hero
{
	int mouvment; /*!< integer. */
	SDL_Rect pos_hero[9]; /*!< Rectangle*/
	SDL_Surface *afficher_hero[9]; /*!< Surface. */
	SDL_Surface *afficher_herod[9]; /*!< Surface. */
	SDL_Rect pos_hero2; /*!< Rectangle*/
	int farm; /*!< integer. */
	int vie; /*!< integer. */
	SDL_Surface *afficher_vie[3]; /*!< Surface. */
	int score; /*!< integer. */
	SDL_Surface *afficher_score; /*!< Surface. */
	SDL_Rect pos_vie; /*!< Rectangle*/
	int hit; /*!< integer. */
	int heromoved; /*!< integer. */

	float vx; /*!< fload. */
	float vy; /*!< fload. */
	float x; /*!< fload. */
	float y; /*!< fload. */
	
}hero;
	 void initialiser_evan(hero *evan);
	 void afficher_evan(hero *evan,SDL_Surface *ecran);
#endif
