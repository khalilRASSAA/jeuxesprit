
#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
 #include <unistd.h>


typedef struct Enemy
{
  SDL_Surface *image[3];
  SDL_Surface *image2[3];
  SDL_Surface *Hit;
  SDL_Surface *follow;
  SDL_Surface *imageActuel;
  SDL_Rect posfollow;
  SDL_Rect position;
  SDL_Rect positionO;
  int frame;
  int direction;
  int died;

}Enemy;

typedef struct hero
{
	int mouvment;
	SDL_Rect pos_hero[9];
	SDL_Surface *afficher_hero[9];
	SDL_Surface *afficher_herod[9];
	SDL_Rect pos_hero2;
	int farm;
	int vie;
	SDL_Surface *afficher_vie[3];
	int score;
	SDL_Surface *afficher_score;
	SDL_Rect pos_vie;
	int hit;
	int heromoved;

	float vx;
	float vy;
	float x;
	float y;
}hero;
typedef struct objet{

	SDL_Surface *afficher_objet;
	SDL_Rect pos_objet;
}objet;

typedef struct effet{

	SDL_Surface *afficher_effet;
	SDL_Rect pos_effets;
}effet;
typedef struct background{

	SDL_Surface *afficher_background;
	SDL_Rect pos_background;
	SDL_Rect pos_background2;
	SDL_Surface *calque_background;
}background;
/**
* @struct enigme
* @brief struct for enigme
*/

typedef struct enigme
{
	SDL_Rect posenigme;   /*!< Surface. */
	SDL_Surface *background;  /*!< Surface. */
	SDL_Surface *hand2;  /*!< Surface. */
	SDL_Surface *hand1;  /*!< Surface. */
	SDL_Surface *un;  /*!< Surface. */
	SDL_Surface *deux; /*!< Surface. */
	SDL_Surface *answer;  /*!< Surface. */
	SDL_Surface *rep1;  /*!< Surface. */
	SDL_Surface *rep2;  /*!< Surface. */
	SDL_Rect poshand1;  /*!< Rectangle*/
	SDL_Rect poshand2;  /*!< Rectangle*/
	SDL_Rect posrep1;   /*!< Rectangle*/
	SDL_Rect posrep2;  /*!< Rectangle*/
	SDL_Rect posun;  /*!< Rectangle*/
	SDL_Rect posdeux;  /*!< Rectangle*/
	SDL_Rect posanswer;  /*!< Rectangle*/
	SDL_Rect posquiz;  /*!< Rectangle*/
	SDL_Rect reponse;  /*!< Rectangle*/
	int handclose;    /*!< integer */
	int reponseplayer; /*!< integer */
	int scoreenigme; /*!< integer */
	int random;  /*!< integer */
	int rep;  /*!< integer */
	int reponseplayerstate;  /*!< integer */
	int enigmeresolu;  /*!< integer */
} enigme; 

/**
* @struct menu
* @brief struct for menu
*/
typedef struct menu{
	SDL_Surface *background; /*!< Surface. */
	SDL_Surface *bplay;  	/*!< Surface. */
	SDL_Surface *beplay;	/*!< Surface. */
	SDL_Surface *droit;		/*!< Surface. */
	SDL_Surface *droite;	/*!< Surface. */
	SDL_Surface *gauche;	/*!< Surface. */
	SDL_Surface *gauchee;	/*!< Surface. */
	SDL_Surface *msetting;	/*!< Surface. */	
	SDL_Surface *besetting;	/*!< Surface. */
	SDL_Surface *bsetting;	/*!< Surface. */
	SDL_Surface *bquit;		/*!< Surface. */
	SDL_Surface *bequit;	/*!< Surface. */
	SDL_Rect positionecran;	 /*!< Rectangle*/
	SDL_Rect positionbplay;	 /*!< Rectangle*/
	SDL_Rect positiondroit;	 /*!< Rectangle*/
	SDL_Rect positiongauche;	 /*!< Rectangle*/
	SDL_Surface *sousmenuquit;
	SDL_Rect positionsousmenuquit;	 /*!< Rectangle*/

	SDL_Surface *sousmenukey1;	/*!< Surface. */
	SDL_Surface *sousmenukey2;	/*!< Surface. */
	SDL_Surface *sousmenuoff1;	/*!< Surface. */
	SDL_Surface *sousmenuoff2;	/*!< Surface. */
	SDL_Surface *sousmenuon1;	/*!< Surface. */
	SDL_Surface *sousmenuon2;	/*!< Surface. */
	SDL_Surface *sousmenucont1;	/*!< Surface. */
	SDL_Surface *sousmenucont2;	/*!< Surface. */
	SDL_Rect positionsouskey;	 /*!< Rectangle*/
	SDL_Rect positionsousoff;	 /*!< Rectangle*/
	SDL_Rect positionsouson;	 /*!< Rectangle*/
	SDL_Rect positionsouscont;	 /*!< Rectangle*/
	int sousetatsound;	/*!< integer */
	int sousetatcontrole;	/*!< integer */

	int action;	/*!< integer */
	int boutoneffet;	/*!< integer */
	int po;	/*!< integer */
	Mix_Music *son;	/*!< music */
	Mix_Music *music;
	
} menu;
typedef struct pmap{
	int nbmoved;
	SDL_Surface *afficher_pmap;
	SDL_Rect pos_pmap;
	SDL_Surface *afficher_pperso;
	SDL_Rect pos_pperso;
}pmap;

typedef struct enigme2{

	SDL_Surface *afficher_enigme2;
	SDL_Rect pos_enigme2;
	SDL_Surface *calque_enigme2;
	SDL_Surface *imggameover;
	int x;
	int y;
	int color;
	int start;
	int lost ;
}enigme2;


	void initialiser_enigme2(enigme2 *enig2);
	void afficher_enigme2(enigme2 enig2, SDL_Surface *ecran);
	void resolution_enigme2(enigme2 *enig2,SDL_Surface *ecran);

	int affcihiersousmenuingame(menu *menu,SDL_Surface *ecran);
	void afficher_sousmenuingame(menu *menu,SDL_Surface *ecran,int x,int y);

	void initialiser_pmap(pmap *pmap);
	void afficher_pmap(pmap *pmap,SDL_Surface *ecran,int mouvment);

	void affichiervie(hero evan, SDL_Surface *ecran);
	int gestionvie(hero *evan,SDL_Surface *ecran);

	int controle_menu ();
	void initialiser_menu(menu *menu);
	int affcihier(menu *menu,SDL_Surface *ecran);
	void affichier_quit(menu *menu,SDL_Surface *ecran,int x,int y);
	void afficher_setting(menu *menu,SDL_Surface *ecran,int x,int y);

	void initialiser_background(background *bckg);
 	void afficher_background(background bckg,SDL_Surface *ecran);
	void initialiser_evan(hero *evan);
	void afficher_evan(hero evan,SDL_Surface *ecran);
	
	void scrolling (hero *evan,background *bckg, int co);
	int animation_perso(hero evan);
	int mouvment(hero evan,SDL_Event *event);
	void initialiser_objet(objet *chouka);
	void afficher_objet(objet *chouka,SDL_Surface *ecran, hero evan);

	void affichier_enigme(enigme *enig,SDL_Surface *ecran);
	void writeqs(SDL_Surface *ecran);
	void resenigme(enigme *enig,SDL_Surface *ecran);
	void randomquiz(enigme *enig);
	int correctrep(enigme *enig,char nom_fichier[]);
	int verifenig(enigme *enig);
	int Collision_Bounding_Box (hero evan ,objet chouka );

	Enemy InitEnemy(Enemy Ennemie,int x, int y);
	void  AfficherEnemy(Enemy Ennemie,SDL_Surface *screen,SDL_Rect personnage);
	Enemy AnimateEnemy(Enemy Ennemie,int stat);
	Enemy MoveEnemy(Enemy Ennemie,SDL_Rect personnage,int *stat,int mouvment);

	int collision_Parfaite(SDL_Surface *calque,SDL_Surface *perso,SDL_Rect posperso,SDL_Rect posmap);
	int mouvment2(hero evan,SDL_Event *event);
	int animation_perso2(hero evan);

	void initialiser_effet(effet *fly);
	void afficher_effet(effet *fly,SDL_Surface *ecran);

	int mouvmentarduino(hero evan,FILE *f);

	Enemy diedennemie(Enemy Ennemie,int coe);

	int collision_Parfaiteennemie(SDL_Surface *calque,SDL_Rect posennemie,SDL_Rect posmap);


	void sauvegarde (char fich[]);


	void initialiser_backgroundm(background *bckgm1 , background *bckgm2);
	void afficher_backgroundm(background bckgm1,background bckgm2 ,SDL_Surface *ecran);
	void initialiser_evanm(hero *evan1,hero *evan2);
	void afficher_evanm(hero evan1,hero evan2,SDL_Surface *ecran);
	//void scrollingm(hero *evan,background *bckg,int co );
	void scrollingm1(hero *evan,background *bckg,int co );
	void scrollingm2(hero *evan,background *bckg,int co );
	int collision_Parfaitem1(SDL_Surface *calque,SDL_Surface *perso,SDL_Rect posperso,SDL_Rect posmap);
	int collision_Parfaitem2(SDL_Surface *calque,SDL_Surface *perso,SDL_Rect posperso,SDL_Rect posmap);
	SDL_Color GetPixel(SDL_Surface *surface,int x,int y);
	extern hero evan;
	extern Enemy Ennemie;
	extern background bckg;
	/*extern pmap pmap;*/

#endif
