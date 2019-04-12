#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

#include"trigo.h"

int main ()
{
	
	int continuer =1;
	double c;
	SDL_Rect posj ;
	SDL_Rect posobj;
	
		c=CollisionTrigoCir(posj,posobj);
		printf("%f\n",c);
	
}



