#include<stdio.h>
#include <stdlib.h>
#include"Plateau.h"
#include"Cellule.h"

plateau_t creer_plateau(int nbr_ligne, int nbr_colonne, int nbr_joueur, int nbr_herisson_joueur) {
    plateau_t plateau;
    plateau.nbr_ligne = nbr_ligne;
    plateau.nbr_colonne = nbr_colonne;
    plateau.nbr_joueur = nbr_joueur;
    plateau.nbr_herisson_joueur = nbr_herisson_joueur;

    //malloc le tableau double entrée
    plateau.cellules = (cell_t**) (nbr_ligne * sizeof(void*));
    for(int i = 0; i < nbr_ligne; i++) {
        plateau.cellules[i] = malloc(nbr_colonne * sizeof(cell_t));
    }

    return plateau;
}

void free_plateau(plateau_t plateau) {
    for(int i = 0; i < plateau.nbr_ligne; i++) {
        free(plateau.cellules[i]);
    }
    free(plateau.cellules);
}



