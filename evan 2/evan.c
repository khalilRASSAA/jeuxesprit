#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"perso.h"
#include <time.h>
void initialiser_evan(hero *evan){
		
		

		evan->afficher_hero[0]=IMG_Load("1.png");
		evan->afficher_hero[1]=IMG_Load("2.png");
		evan->afficher_hero[2]=IMG_Load("3.png");
		evan->afficher_hero[3]=IMG_Load("4.png");
		evan->afficher_hero[4]=IMG_Load("5.png");
		evan->afficher_hero[5]=IMG_Load("6.png");
		evan->afficher_hero[6]=IMG_Load("7.png");
		evan->afficher_hero[7]=IMG_Load("8.png");
		evan->afficher_hero[8]=IMG_Load("9.png");
			
		evan->afficher_vie[0]=IMG_Load("vie0.png");
		evan->afficher_vie[1]=IMG_Load("vie1.png");
		evan->afficher_vie[2]=IMG_Load("vie2.png");
		evan->afficher_vie[3]=IMG_Load("vie3.png");
	
	evan->vie=3;

	evan->farm=0;
	evan->hit=0;
	
	evan->pos_hero2.x=0;
	evan->pos_hero2.y=0;
	evan->pos_vie.y=0;
	evan->pos_vie.x=0;
}
void afficher_evan(hero evan,SDL_Surface *ecran){
	
	SDL_BlitSurface(evan.afficher_hero[evan.farm],NULL,ecran,&(evan.pos_hero2));
}
