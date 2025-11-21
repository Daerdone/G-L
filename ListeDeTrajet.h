//---------- Interface de la classe <ListeDeTrajet> (fichier ListeDeTrajet.h) ----------------
#if ! defined ( ListeDeTrajet_H )
#define ListeDeTrajet_H

//--------------------------------------------------- Interfaces utilisées

#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

typedef struct elem {
    Trajet * value;
    elem * next;
} elem;

//------------------------------------------------------------------------
// Rôle de la classe <ListeDeTrajet>
//
//
//------------------------------------------------------------------------

class ListeDeTrajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Add (Trajet * newTrajet const);
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Print ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Search (const Trajet & start, const Trajet & end, ListeDeTrajet & result) const;
    // Mode d'emploi :
    //      result est une ListeDeTrajet déjà allouée
    // Contrat :
    // 

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeDeTrajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ListeDeTrajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    elem * listTrajet;

};

//-------------------------------- Autres définitions dépendantes de <ListeDeTrajet>

#endif // ListeDeTrajet_H

