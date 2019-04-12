#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"perso.h"
//#include"main.h"

void main (){
	SDL_Surface *ecran =NULL;
	hero evan ;
	int continuer =1;
	SDL_Init(SDL_INIT_VIDEO);
	initialiser_evan(&evan);
	evan.farm=0;
	SDL_Event event;
	int c;
	int x;
	ecran = SDL_SetVideoMode(1200, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	while(continuer){
		SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
		evan.mouvment=mouvment(evan,&event);
		afficher_evan(evan,ecran);
		evan.farm=animation_perso(evan);

		SDL_Flip(ecran);
	
}
}



