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

double volumePyramide(double hauteur,double largeurBase, double longueurBase=-1.0);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    double hauteur, largeurBase,longueurBase;
	SetConsoleOutputCP(1252);
	//code endesous 
    cout << "Entrez la hauteur , la largeur de la base et la longueur de la base de la PYRAMIDE"<<endl;
    cin>>hauteur>> largeurBase>>longueurBase;

    cout << volumePyramide(hauteur, largeurBase,longueurBase) <<endl;

 
	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

double volumePyramide(double hauteur,double largeurBase, double longueurBase)
{
    return (((largeurBase*longueurBase)*hauteur)/3);
}