/**
* @file scrolling.c
* @brief background scrolling.
* @author X Team
* @version 1
* @date May 05, 2019
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"struct.h"
/**
* @brief To background scrolling .
* @param evan main character
* @param bckg background
* @param collision
* @return Nothing
*/
void scrolling (hero *evan,background *bckg,int co )
{
	 evan->heromoved=0;
	switch(evan->mouvment)
	{

		case 1: 
			if (co!=2){
			if ((bckg->pos_background2.x<6800)&&(evan->pos_hero2.x>=300))
                		bckg->pos_background2.x=bckg->pos_background2.x+5;
			if (((evan->pos_hero2.x<300)||((bckg->pos_background2.x>=6800))&&(evan->pos_hero2.x<1100)))
				evan->pos_hero2.x=evan->pos_hero2.x+5;
			evan->heromoved=1;
		}
	
		break;
		case 2:
		if (co!=2){
			if (bckg->pos_background2.x>0)
                		bckg->pos_background2.x=bckg->pos_background2.x-5;
	    		if (((bckg->pos_background2.x!=0)&&(evan->pos_hero2.x>=150))||((bckg->pos_background2.x==0)&&(evan->pos_hero2.x=50)))
				evan->pos_hero2.x=evan->pos_hero2.x-5;
			    evan->heromoved=2;
			}	
		break;
		case 3:

		if (evan->pos_hero2.y>50){
			if (bckg->pos_background2.x<6800){
				evan->pos_hero2.y=evan->pos_hero2.y-20;

			}
		}
		break;
	}
	if ((evan->mouvment!=3)&&(co!=10)&&(co!=2)){
		evan->pos_hero2.y=evan->pos_hero2.y+5;
	}
}




