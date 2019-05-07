#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
 #include <unistd.h>
#include"enigme2.h"

void main(){
	SDL_Surface *ecran =NULL;
	enigme2 enig;
	int continuer =1;
	SDL_Event event;
	initialiser_enigme2(&enig);

	SDL_Init(SDL_INIT_VIDEO);
    	ecran = SDL_SetVideoMode(1200, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

	while(continuer){
	afficher_enigme2(enig,ecran);
 	resolution_enigme2(&enig,ecran);
 	if (enig.lost==1){
 		continuer=0;
 	}
 	if (enig.lost==2){
 		break;
 	}
 	SDL_Flip(ecran);
	}

}
