/**
* @file background.h
* @brief tache background.
* @author AZIZ KRAIEM
* @version 0.1
* @date Apr 12, 2022
*/

#ifndef BACKGROUND_H
#define BACKGROUND_H
#define SCREEN_W 900
#define SCREEN_H 900
#include <SDL/SDL.h>


/**
* @struct Background
* @brief struct for backround
*/
struct background{
SDL_Surface *backgroundImg;   /*!< Surface. */
SDL_Rect backgroundPos;       /*!< Rectangle*/
SDL_Rect camera[2];           /*!< Rectangle*/
SDL_Rect posEcran2;           /*!< Rectangle*/
};
typedef struct background background;
struct Personne

{
    SDL_Rect posPerso;
    SDL_Surface  *image;
    int direction ;
};
typedef struct Personne Personne ;


typedef struct
{
    SDL_Surface *spriteSheet; // 0: dead 1: right 2:left
    SDL_Rect Clips[5];
    int side; // 1: right 2: left 0: dead
    int frames;
    int clipLoaded;
} animation;

typedef struct
{
    SDL_Rect pos;
    animation animation;
 
}kraiem;


typedef struct
{
    SDL_Rect pos;
    animation animation;
 
}kraiem1;



int collisionPP(Personne p, SDL_Surface *Masque);



void animerCoin(kraiem  *c);
void afficherCoin( kraiem c, SDL_Surface *screen);
void initCoin(kraiem *c);

void initCoin1( kraiem1 *c1);
void animerCoin1(kraiem1  *c1);
void afficherCoin1( kraiem1 c1, SDL_Surface *screen);



void init_Back(background * b);
void afficher_Back(background b, SDL_Surface * screen);

void init_Back_pe(background * b);
void afficher_Back_pe(background b, SDL_Surface * screen);


void scrolling (background * b,int direction,int numBACK);
#endif
