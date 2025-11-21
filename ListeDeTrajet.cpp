//---------- Réalisation de la classe <ListeDeTrajet> (fichier ListeDeTrajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeDeTrajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
    void ListeDeTrajet::Add (Trajet * newTrajet const);
    // Algorithme :
    //
    {
    }

    void ListeDeTrajet::Print ( ) const;
    // Algorithme :
    //
    {
    }

    void ListeDeTrajet::Search (const Trajet & start, const Trajet & end, ListeDeTrajet & result) const;
    // Algorithme :
    //
    {
    }
    
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ListeDeTrajet::ListeDeTrajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeDeTrajet>" << endl;
#endif
} //----- Fin de ListeDeTrajet


ListeDeTrajet::~ListeDeTrajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeDeTrajet>" << endl;
#endif
} //----- Fin de ~ListeDeTrajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

