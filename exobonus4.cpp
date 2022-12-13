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

/*======================================================
Fonction principal
========================================================*/
bool bissextile(int annee);
int main()
{
	SetConsoleOutputCP(1252);
	//code en dessous 
    int annee;

    cout<< "Entrez une annee"<< endl;
    cin>> annee ;

    cout << bissextile(annee)<< endl;
	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

bool bissextile(int annee)
{
    if (annee % 4 == 0 && annee % 100 != 0)
        return true;
    else if (annee % 400 == 0)
    {
       return true; 
    }
    else
    {
        return false;
    }
}