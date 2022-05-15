// Ce fichier fait partie de "franc"
// Sous la licence MIT
// Droits d'auteur (c) 2022 Antonin Hérault

#include <franc/tout.h>
#include <franc/bst/flux.h>
#include <franc/bst/bible.h>
#include <franc/bst/chaîne.h>

entier principale() {
    caractère* prénom = allouer(taillede(caractère) * 8);
    copier_chaîne(prénom, "Antonin");
    
    imprimer("%s\n", prénom);
    
    libérer(prénom); 

    renvoyer 0;
}
