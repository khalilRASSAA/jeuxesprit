/**
* @file gesenigme.c
* @brief randomize enigma.
* @author X Team
* @version 1
* @date May 05, 2019
*
*/
#include<stdio.h>
#include<stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"struct.h"
/**
* @brief To randomize enigma .
* @param enig the enigma
* @return Nothing
*/
void randomquiz(enigme *enig){

	srand(time(NULL));  
	enig->random=(rand()%3+1);  

}
/**
* @brief To get the right answer for the random enigma .
* @param enig the enigma
* @param nom_fichier the name of txt file
* @return right answer
*/
int correctrep(enigme *enig,char nom_fichier[]){
	char qs[6];
	char qs2[6];
		FILE* f=NULL;
		f=fopen(nom_fichier,"r");
		sprintf(qs2,"quiz%d",enig->random);
		if(f!=NULL){
			do{
				fscanf(f,"%s %d",qs,&enig->reponseplayer);
			}while(((enig->reponseplayer!= EOF)&&(strcmp(qs2,qs))!=0));
		fclose(f);
	}
	return enig->reponseplayer;
}
