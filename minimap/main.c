#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"pmap.h"

void main(){
	SDL_Surface *ecran =NULL;
	pmap pmap;
	int continuer =1;
	SDL_Event event;
	initialiser_pmap(&pmap);
	int mouvment;

	SDL_Init(SDL_INIT_VIDEO);
    	ecran = SDL_SetVideoMode(1200, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

	while(continuer){
	afficher_pmap(&pmap,ecran,mouvment);

 	SDL_PollEvent(&event);
 	switch (event.type)
        {
        case SDL_QUIT:
           mouvment=0;
            break;
	 break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
                break;
            case SDLK_RIGHT:
		mouvment=1;
                break;
            case SDLK_LEFT:
            	mouvment=2;
                break;
            }
            break;
             default: 	mouvment=9;
 }
 SDL_Flip(ecran);
	}

}
