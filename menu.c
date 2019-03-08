#include "menu.h"
int isMouseEvent(const SDL_Event* event)
{
    if (event->type == SDL_MOUSEMOTION)
        return 0;
    return 1;
}
int main(){
	SDL_Surface *ecran= NULL,*background=NULL,*bplay=NULL,*beplay=NULL,*droit=NULL,*droite=NULL,*gauche=NULL,*gauchee=NULL,*besetting=NULL,*bsetting=NULL,*bquit=NULL,*bequit=NULL;
	SDL_Rect positionecran,positionbplay,positiondroit,positiongauche;
	SDL_Event e;
	int continuer=1;
	int p=1,po=1;
	int x,y,b=0;
	Mix_Music *son;
	
	Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
    	Mix_OpenAudio(48000, AUDIO_S16SYS, 1, 2048);
	Mix_VolumeMusic(MIX_MAX_VOLUME/2);
	son=Mix_LoadMUS("switchoff.wav");
	//Mix_PlayChannel(son,-1);
	//Mix_PlayMusic(son,-1);
	background=IMG_Load("background.png");
	bplay=IMG_Load("play.png");
	beplay=IMG_Load("playe.png");
	gauche=IMG_Load("g1.png");
	droit=IMG_Load("d1.png");
	gauchee=IMG_Load("g2.png");
	droite=IMG_Load("d2.png");
	bsetting=IMG_Load("setting.png");
	besetting=IMG_Load("settinge.png");
	bquit=IMG_Load("quit.png");
	bequit=IMG_Load("quite.png");
	
	positionbplay.x=320;
	positionbplay.y=180;	
	
	positiondroit.x=600;
	positiondroit.y=255;
	
	positiongauche.x=240;
	positiongauche.y=250;
	
	positionecran.x=0;
	positionecran.y=0;
	int d;

	SDL_Init(SDL_INIT_VIDEO);
    	ecran = SDL_SetVideoMode(900, 600, 32, SDL_HWSURFACE );
	
	
	
	while (continuer){



		
		SDL_WaitEvent(&e);
		//SDL_SetEventFilter(isMouseEvent);
		//SDL_PollEvent(&e);
		if (e.type == SDL_QUIT)
            		continuer=0;
		SDL_GetMouseState(&x,&y);

		

	if(po==2){
		       if ((340<=x)&&(x<=602)&&(y<=464)&&(198<=y)){
		
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(droit, NULL, ecran, &positiondroit);	
			SDL_BlitSurface(besetting,NULL,ecran,&positionbplay);
			SDL_BlitSurface(gauche, NULL, ecran, &positiongauche);
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
		}
	
		else if ((619<=x)&&(x<=688)&&(y<=384)&&(274<=y)){
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bsetting,NULL,ecran,&positionbplay);
			SDL_BlitSurface(droite, NULL, ecran, &positiondroit);
			SDL_BlitSurface(gauche, NULL, ecran, &positiongauche);
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
			b=1;
		}
		else if ((260<=x)&&(x<=324)&&(y<=381)&&(274<=y)){
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bsetting,NULL,ecran,&positionbplay);
			SDL_BlitSurface(droit, NULL, ecran, &positiondroit);
			SDL_BlitSurface(gauchee, NULL, ecran, &positiongauche);	
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
			b=2;
			
		}
		else{	
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bsetting,NULL,ecran,&positionbplay);
			SDL_BlitSurface(droit, NULL, ecran, &positiondroit);
			SDL_BlitSurface(gauche, NULL, ecran, &positiongauche);
			
			b=0;
			
		}
			}

	else if (po==1){
		       if ((340<=x)&&(x<=602)&&(y<=464)&&(198<=y)){
		
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(droit, NULL, ecran, &positiondroit);	
			SDL_BlitSurface(beplay,NULL,ecran,&positionbplay);
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
		}
	
		else if ((619<=x)&&(x<=688)&&(y<=384)&&(274<=y)){
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bplay,NULL,ecran,&positionbplay);
			SDL_BlitSurface(droite, NULL, ecran, &positiondroit);
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
			b=1;
		}
		else{	
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bplay,NULL,ecran,&positionbplay);
			SDL_BlitSurface(droit, NULL, ecran, &positiondroit);
			
			b=0;
		}
	}
	
	else if (po==3){
		       if ((340<=x)&&(x<=602)&&(y<=464)&&(198<=y)){
		
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bequit,NULL,ecran,&positionbplay);
			SDL_BlitSurface(gauche, NULL, ecran, &positiongauche);
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
			b=5;
		}
		else if ((260<=x)&&(x<=324)&&(y<=381)&&(274<=y)){
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bquit,NULL,ecran,&positionbplay);
			SDL_BlitSurface(gauchee, NULL, ecran, &positiongauche);
			//Mix_PlayChannel(-1,son,0);
			//Mix_PlayMusic(son,0);
			b=2;
		}
		else{	
			SDL_BlitSurface(background, NULL, ecran, &positionecran);
			SDL_BlitSurface(bquit,NULL,ecran,&positionbplay);
			SDL_BlitSurface(gauche, NULL, ecran, &positiongauche);
			b=0;
		}
	}
	
	SDL_Flip(ecran);
		printf("%d \t %d \n",x,y);

		
	
        switch (e.type)
        {
        case SDL_QUIT:
            continuer=0;
            break;
        case SDL_KEYDOWN:
            switch (e.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                continuer=0;
                break;
            case SDLK_RIGHT:
			Mix_PlayMusic(son,0);
		if(po==1){
    			po=2;
			SDL_BlitSurface(droite, NULL, ecran, &positiondroit);
			SDL_Flip(ecran);
			usleep(300000);
			
		break;
		}
		else if (po==2){
			po=3;  
			SDL_BlitSurface(droite, NULL, ecran, &positiondroit);
			SDL_Flip(ecran);
			usleep(300000);
		}         
                break;
            case SDLK_LEFT:
			Mix_PlayMusic(son,0);
		if (po==2){		
	                po=1;
			SDL_BlitSurface(gauchee, NULL, ecran, &positiongauche);
			SDL_Flip(ecran);
			usleep(300000);
		break;
		}
		else if(po==3)
			po=2;
			SDL_BlitSurface(gauchee, NULL, ecran, &positiongauche);
			SDL_Flip(ecran);
			usleep(300000);
                break;
            	}
		break;        
        	case SDL_MOUSEBUTTONUP:   
			Mix_PlayMusic(son,0);            
       			if((b==1)&&(po==1))
				po=2;
			else if ((b==1)&&(po==2))
				po=3;
			else if ((b==2)&&(po==2))
				po=1;
			else if ((b==2)&&(po==3))
				po=2;
			else if ((b==5)&&(po==3))
				continuer=0;
                                                  
                    break;
	}		
   }
	SDL_FreeSurface(background);
	SDL_FreeSurface(bplay);
	SDL_FreeSurface(beplay);
	
  	
	return 0;
}

