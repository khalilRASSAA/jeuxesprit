/**
* @file pmap.c
* @brief minimap.
* @author X Team
* @version 1
* @date Apr 05, 2019
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"pmap.h"
/**
* @brief To initialize the minimap .
* @param pmap the minimap
* @return Nothing
*/
void initialiser_pmap(pmap *pmap){

	pmap->afficher_pmap=NULL;
	pmap->afficher_pmap=IMG_Load("pmap.png");

	pmap->pos_pmap.x=800;
	pmap->pos_pmap.y=20;


	pmap->afficher_pperso=NULL;
	pmap->afficher_pperso=IMG_Load("pperso.png");

	pmap->pos_pperso.x=805;
	pmap->pos_pperso.y=23;
	pmap->nbmoved=0;


}
/**
* @brief To show the minimap .
* @param pmap the minimap
* @param ecran the screen 
* @param mouvment left or right
* @return Nothing
*/
void afficher_pmap(pmap *pmap,SDL_Surface *ecran,int mouvment){


	SDL_BlitSurface(pmap->afficher_pmap,NULL,ecran,&pmap->pos_pmap);

	SDL_BlitSurface(pmap->afficher_pperso,NULL,ecran,&pmap->pos_pperso);
	if (mouvment==1)
		pmap->nbmoved++;
	if (mouvment==2)
		pmap->nbmoved--;

		if (pmap->nbmoved==9){
		pmap->pos_pperso.x+=2;
		pmap->nbmoved=0;
}
	if (pmap->nbmoved==-9){
		pmap->pos_pperso.x-=2;
		pmap->nbmoved=0;
	}

}
