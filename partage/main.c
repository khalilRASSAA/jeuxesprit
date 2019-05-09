#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"partage.h"

void main ()
{
	SDL_Surface *ecran =NULL;
	
	initialiser_backgroundm(&bckgm1 ,&bckgm2);
	int continuer =1;
	SDL_Init(SDL_INIT_VIDEO);
	
	
	SDL_Event event;
	
	
	double c;
	int x;
	ecran = SDL_SetVideoMode(1200, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	while(continuer){
		SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
		
		afficher_backgroundm(bckgm1,bckgm2 ,&ecran);
		
		
		SDL_Flip(ecran);
		
	
}



