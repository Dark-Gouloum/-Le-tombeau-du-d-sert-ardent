/**
	* \file src/bouton.c
	* \brief Définition de l'objet bouton.
	* \author Erwan PECHON
	* \version 0.1
	* \date Mar. 14 Févr. 2023 19:09:04
	*
	* L'objet bouton sert à créer et gérer des boutons.
	*
	*/

// INCLUSION(S) DE(S) BIBLIOTHEQUE(S) NÉCÉSSAIRE(S)
#include <stdlib.h>
#include <stdio.h>

#include "../lib/bouton.h"

// CRÉATION(S) DE(S) CONSTANTE(S) NUMÉRIQUE(S)
static int unsigned cmpt_bouton = 0;

// CRÉATION(S) D(ES) ÉNUMÉRATION(S)

// CRÉATION(S) D(ES) STRUCTURE(S) ET D(ES) UNIONS(S)

// CRÉATION(S) DE(S) CONSTANTE(S) DE STRUCTURE(S)

// CRÉATION(S) DE(S) FONCTION(S)
	// Fonctions spéciale d'un objet bouton

	// Methode commune à tout les objets
static void afficher_bouton( bouton_t *bouton ){
}

static err_t detruire_bouton( bouton_t **bouton ){
	// Suppression des attributs de l'objet bouton

	// Suppression de l'objet bouton
	free( (*bouton) );
	(*bouton) = NULL;

	// Destruction de l'objet bouton réussie
	cmpt_bouton--;
	return(E_OK);
}

extern void afficherSurvivant_bouton( bouton_t *bouton ){
	printf("Il reste %i bouton_t.",cmpt_bouton);
}

extern bouton_t * creer_bouton(){
	// Définission des variables utiles
	char *nomFonction = "creer_bouton : ";

	// Créer l'objet bouton
	bouton_t *bouton = malloc( sizeof(bouton_t) );
	if( !bouton ){ // malloc à échouer :
		printf("%s%smalloc : malloc à échouer, pas assez de place de place disponible en mémoire.\n",MSG_E,nomFonction);
		return (bouton_t*)NULL;
	}

	// Affecter les attributs

	// Affecter les methodes
	bouton->detruire = (err_t (*)(void *))detruire_bouton;
	bouton->afficher = (void (*)(void *))afficher_bouton;

	// Renvoyer le bouton
	cmpt_bouton++;
	return bouton;
}

// #####-#####-#####-#####-##### FIN PROGRAMMATION #####-#####-#####-#####-##### //

