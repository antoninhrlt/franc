// Ce fichier fait partie de "franc"
// Sous la licence MIT
// Droits d'auteur (c) 2022 Antonin Hérault

#ifndef FRANC_BST_FLUX
#define FRANC_BST_FLUX

#include <stdio.h>

// Modes d'ouverture de fichiers
/**
 * Utilisation :
 *  fopen(nom_fichier, <mode> <?BINAIRE>) : Pour un simple mode
 *  fopen(nom_fichier, <mode_BINAIRE>) : Pour les doubles modes
 * Exemples :
 *  fopen("essai.txt", LIRE)
 *  fopen("essai", LIRE BINAIRE)
 *  fopen("essai", LIRE_ET_ECRIRE_BINAIRE)
*/
#define BINAIRE     "b"

#define LIRE        "r"
#define ECRIRE      "w"
#define AJOUTER     "a"

#define LIRE_ET_ECRIRE  "r+"
#define ECRIRE_ET_LIRE  "w+"
#define LIRE_ET_AJOUTER "a+"

#define LIRE_ET_ECRIRE_BINAIRE  "rb+"
#define ECRIRE_ET_LIRE_BINAIRE  "wb+"
#define LIRE_ET_AJOUTER_BINAIRE "ab+"

#define imprimer    printf
#define lire        scanf
#define récupérerc  getc
#define pousserc    putc
#define ouvrir      fopen
#define fermer      fclose
#define supprimer   remove
#define affleurer   fflush

#endif // FRANC_BST_FLUX
