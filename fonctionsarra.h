#ifndef FONCTIONSARRA_H_INCLUDED
#define FONCTIONSARRA_H_INCLUDED
#include<SDL/SDL_image.h>
#include<SDL/SDL.h>
#include <time.h>


Typedef struct ennemi 
{
    SDL_Surface* image;
    SDL_Rect pos;
    SDL_Event event;
    int damage,state,direction;
}Ennemi;



void initEnnemi(Ennemi* e);
void afficherEnnemi(Ennemi e, SDL_Surface* screen);
void animerEnnemi(Ennemi* e);
void deplacer(Ennemi* e);
int collisionBB(SDL_Rect posp, SDL_Rect pose);
void deplacerIA(Ennemi* e , SDL_Rect posePerso);
#endif
