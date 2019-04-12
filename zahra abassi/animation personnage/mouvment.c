#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"perso.h"

 int mouvment(hero evan,SDL_Event *event){

 	int mouvment;

 	SDL_PollEvent(event);
 	switch (event->type)
        {
        case SDL_QUIT:
           mouvment=0;
            break;
        case SDL_KEYDOWN:
            switch (event->key.keysym.sym)
            {
            case SDLK_ESCAPE:
                mouvment=0;
                break;
            case SDLK_RIGHT:
				mouvment=1;
                //scrolling (hero *evan,background *bckg);
                break;
            case SDLK_LEFT:
            	mouvment=2;
                //scrolling (hero *evan,background *bckg);
                break;
            case SDLK_UP: 
                mouvment=3;  
                 break;
            }
            break;
             default: 	mouvment=9;
 }
 //printf("%d c",mouvment);
 return mouvment;

}
