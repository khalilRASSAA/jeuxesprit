#include "structs.h"
int main(int argc, char *argv[])
{SDL_Surface *ecran;
  SDL_Surface *personnage =NULL;
   SDL_Init(SDL_INIT_VIDEO);
   Enemy e;
e=InitEnemy(e,200,250);
ecran = SDL_SetVideoMode(800, 600,32,SDL_HWSURFACE || SDL_DOUBLEBUF||SDL_FULLSCREEN );
	SDL_Rect positiondetective;

positiondetective.y=250;
positiondetective.x=0;

    SDL_Event event;
    int continuer = 1,a;
    SDL_WM_SetCaption("fonction boulbaba", NULL);
personnage=IMG_Load("robot.png");




    while (continuer)
    { SDL_PollEvent(&event);


      
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;

            case SDL_KEYDOWN :

                 switch(event.key.keysym.sym)
                {


                    case SDLK_UP:
positiondetective.x+=30;

                        break;
                    case SDLK_LEFT :

positiondetective.x-=30;

                    break;




                }
                break;


        }
SDL_Delay(90);

e=MoveEnemy(e,positiondetective,&a);
e=AnimateEnemy(e,a);
 SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));

 SDL_BlitSurface(personnage,NULL,ecran, &positiondetective);
  AfficherEnemy(e,ecran);
        SDL_Flip(ecran);
    }

    SDL_FreeSurface(personnage);

    SDL_Quit();

    return EXIT_SUCCESS;


}
