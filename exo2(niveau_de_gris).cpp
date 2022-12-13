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
unsigned niveauDeGris(unsigned rouge, unsigned vert, unsigned bleu);

int main()
{
    unsigned rouge,vert, bleu;

	SetConsoleOutputCP(1252);
	//code endesous 
    cout<< "Entrez les niveaux des 3 couleurs"<< endl;
    cin >> rouge >> vert >> bleu ;
	if ( rouge<=255 && vert<=255 && bleu<=255)
	{
		cout<< niveauDeGris(rouge,vert,bleu)<<endl;
	}
	else
	{
		cout<< "faux"<<endl;
	}
    


	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

unsigned niveauDeGris(unsigned rouge, unsigned vert, unsigned bleu)
{
    return (rouge+vert+bleu)/3;
}