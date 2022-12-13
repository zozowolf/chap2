/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <windows.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
unsigned long classe(unsigned long octet1, unsigned long octet2, unsigned long octet3, unsigned long octet4);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    unsigned long octet1, octet2, octet3, octet4;
    SetConsoleOutputCP(1252);
    // code en dessous
    cout << "Entrez octet1 / octet2 / octet3 / octet4" << endl;
    cin >> octet1 >> octet2 >> octet3 >> octet4;

    cout << classe(octet1, octet2, octet3, octet4) << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

unsigned long classe(unsigned long octet1, unsigned long octet2, unsigned long octet3, unsigned long octet4)
{
    if(octet1>0 & octet1<127)
    {
        return ('A');
    }
    else if(octet1>128 & octet1<191)
    {
        return ('B');
    }
    else if(octet1>192 & octet1<223)
    {
        return ('C');
    }
    else if(octet1>224 & octet1<239)
    {
        return ('D');
    }
    else if(octet1>240 & octet1<255)
    {
        return ('E');
    }
    else
    {
        return 0;
    }
        
}
