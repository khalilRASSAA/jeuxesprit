#include <stdio.h>
#include "SDL/SDL.h"
#include <string.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include "sauvegarde.h"
void main()
{

char fich[]="sauvegarde.bin";
   
	 
    FILE *f;


     
	SDL_Surface *ecran =NULL;
	hero evan,evan1,evan2 ;
	int continuer =1;
	objet chouka;
	
	background bckg;
	
	int continuerenig=1;
	
	
	
	background bckgm1,bckgm2;
	
	 sauvegarde (fich);
        lire (fich);
	

   

	fclose(f);
}
