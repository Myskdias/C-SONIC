#ifndef PLATEAU_H
#define PLATEAU_H

#include"Cellule.h"

typedef struct plateau {

    int nbr_ligne;
    int nbr_colonne;
    cell_t** cellules; //faudra le malloc dans le init et le free à la fin du programme
    int nbr_joueur;
    int nbr_herisson_joueur;

} plateau_t;

plateau_t creer_plateau(int nbr_ligne, int nbr_colonne, int nbr_joueur, int nbr_herisson_joueur);

void free_plateau(plateau_t plateau);

#endif//PLATEAU_H