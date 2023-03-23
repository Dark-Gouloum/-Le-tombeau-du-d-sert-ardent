#ifndef _JOUEUR_H_
#define _JOUEUR_H_

/**
	* \file lib/joueur.h
	* \brief Définition de l'objet joueur.
	* \author Dylan GRAMMONT
	* \version 0.1
	* \date Jeu. 23 Mars 2023 00:31:27
	*
	* L'objet joueur sert à gére le joueur (c'est le joueur principal.
	*
	*/

// INCLUSION(S) DE(S) BIBLIOTHEQUE(S) NÉCÉSSAIRE(S)
#include "../lib/commun_perso.h"
#include "../lib/liste.h"
#include "../lib/item.h"

// CRÉATION(S) DE(S) CONSTANTE(S) NUMÉRIQUE(S)

// CRÉATION(S) D(ES) ÉNUMÉRATION(S)

// CRÉATION(S) D(ES) STRUCTURE(S) ET D(ES) UNIONS(S)
/** \brief La structure joueur_t.
	* \author Dylan GRAMMONT
	*
	* La structure joueur_t sert à gére le joueur (c'est le joueur principal.
	*
	*/
typedef struct joueur_s {
#include "attributs_perso.h"
	liste_t * listItem;
	int page;
} joueur_t;

// CRÉATION(S) DE(S) CONSTANTE(S) DE STRUCTURE(S)

// CRÉATION(S) DE(S) FONCTION(S)
/**\brief La fonction affichant le nombre d'objet non détruit.
	* \author Dylan GRAMMONT
	*
	* La fonction 'afficherSurvivant_joueur' est prévue pour fonctionner dans le fichier 'projet/test/joueur.c'.
	* Cette fonction affiche le nombre de joueur non-détruit, ainsi que le nombre d'objet inclut dans joueur qui n'ont pas était détruit.
	*
	*/
extern void afficherSurvivant_joueur();

/**\brief La fonction créant un objet joueur_t.
	* \author Dylan GRAMMONT
	* \param[in,out] utilite
	* \return un pointeur sur un joueur_t.
	*
	* La fonction 'creer_joueur' crée un objet joueur.
	*
	*/
extern joueur_t * creer_joueur();

/**	* \brief La fonction charger le joueur depuis fichier text
	* \author Dylan GRAMMONT
	* \param joueur_t
	*/
extern joueur_t * charger_joueur();

/**	* \brief La fonction sauvegarde le joueur dans fichier text
	* \author Dylan GRAMMONT
	* \param joueur_t
	*/
extern err_t sauvegarder_joueur(joueur_t * joueur,int page);

/**	* \brief La fonction supprime un item d'un joueur
	* \author Dylan GRAMMONT
	* \param[in,out] joueur
	* \param[in,out] item
	*/
extern err_t supprimerItem_joueur(joueur_t * joueur, item_t * item);

/**	* \brief La fonction supprime un item d'un joueur
	* \author Dylan GRAMMONT
	* \param[in,out] joueur
	* \param[in,out] item
	*/
extern err_t  ajouterItem_joueur(joueur_t * joueur, item_t * item);

/**	* \brief La fonction affiche les item d'un joueur
	* \author Dylan GRAMMONT
	* \param[in,out] joueur
	*/
extern void afficher_invenventaire(joueur_t * joueur);

// #####-#####-#####-#####-##### FIN PROGRAMMATION #####-#####-#####-#####-##### //

#endif
