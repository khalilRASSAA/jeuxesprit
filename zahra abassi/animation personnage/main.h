#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include <unistd.h>
#include"perso.h"
int animation_perso(hero evan);
void afficher_evan(hero evan,SDL_Surface *ecran);
int mouvment(hero evan,SDL_Event *event);
void initialiser_evan(hero *evan);

#endif
