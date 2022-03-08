#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED
            typedef struct{

            int left,right,jump,acction,down,attack;
            SDL_Surface *personnage; 		 
  	    SDL_Rect rect;
	    float speedX,speedY;
	    int num_image;		
	    int vitesse ;
	    float acceleration ; 
	    SDL_Rect pos_attack;

            }Personne;

 void initPerso(Personne *p);
 void afficherPerso(Personne p,SDL_Surface *screen);
 void deplacerPerso(Personne *p,int dt);
 void saut (Personne* p);



#endif // PERSO_H_INCLUDED
