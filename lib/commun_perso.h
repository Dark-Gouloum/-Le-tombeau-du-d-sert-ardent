#ifndef _PERSONNAGE_H_
#define _PERSONNAGE_H_

/**
	* \file lib/commun_perso.h
	* \brief Définition de l'objet personnage.
	* \author Dylan GRAMMONT
	* \version 0.1
	* \date Mer. 22 Mars 2023 23:59:23
	*
	* L'objet personnage sert à gérer les personnages du jeu.
	*
	*/

// INCLUSION(S) DE(S) BIBLIOTHEQUE(S) NÉCÉSSAIRE(S)
#include "commun.h"

// CRÉATION(S) DE(S) CONSTANTE(S) NUMÉRIQUE(S)

// CRÉATION(S) D(ES) ÉNUMÉRATION(S)

// CRÉATION(S) D(ES) STRUCTURE(S) ET D(ES) UNIONS(S)
/** \brief La structure personnage_t.
	* \author Dylan GRAMMONT
	*
	* La structure personnage_t sert à gérer les personnages du jeu.
	*
	*/
typedef struct personnage_s {
#include "attributs_perso.h"
} personnage_t;

// CRÉATION(S) DE(S) CONSTANTE(S) DE STRUCTURE(S)

// CRÉATION(S) DE(S) FONCTION(S)
/**	* \brief La fonction qui attribu les stat a un objet personnage_t.
	* \author Dylan GRAMMONT
	* \param[in,out] personnage
	*
	*/
extern void attribuer_personnage(void *personnage, int force, int intelligence, int PV, int Armure, int critique, int agilite, char * nom);

/**	* \brief La fonction affichant un personnage.
	*  @param in Un pointeur sur le personnage à afficher.
	*  @param in Le type du personnage à afficher (par défaut = "personnage").
	*
	* La fonction affichant un personnage.
	*/
extern void afficher_personnage(void *personnage , char *type );
// #####-#####-#####-#####-##### FIN PROGRAMMATION #####-#####-#####-#####-##### //

#endif
