#include <stdlib.h>
#include <stdio.h>
#include "partage.h"
;
void initialiser_backgroundm(background *bckgm1 , background *bckgm2)
{


	bckgm1->calque_background=NULL;
	bckgm1->calque_background=IMG_Load("calquebackground.png");

	bckgm1->afficher_background=NULL;
	bckgm1->afficher_background=IMG_Load("background.jpg");
	bckgm1->pos_background.x=0;
	bckgm1->pos_background.y=0;
	bckgm1->pos_background2.x=0;
	bckgm1->pos_background2.y=0;
	bckgm1->pos_background2.h=600;
	bckgm1->pos_background2.w=600;


	bckgm2->calque_background=NULL;
	bckgm2->calque_background=IMG_Load("calquebackground.png");

	bckgm2->afficher_background=NULL;
	bckgm2->afficher_background=IMG_Load("background.jpg");
	bckgm2->pos_background.x=601;
	bckgm2->pos_background.y=0;
	bckgm2->pos_background2.x=0;
	bckgm2->pos_background2.y=0;
	bckgm2->pos_background2.h=600;
	bckgm2->pos_background2.w=600;
	
	
}
void afficher_backgroundm(background bckgm1,background bckgm2 ,SDL_Surface *ecran)
{
	SDL_BlitSurface(bckgm1.afficher_background,&(bckgm1.pos_background2),ecran,&(bckgm1.pos_background));
	SDL_BlitSurface(bckgm2.afficher_background,&(bckgm2.pos_background2),ecran,&(bckgm2.pos_background));

}
