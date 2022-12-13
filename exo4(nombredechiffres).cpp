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

int nombrechiffres(long long n);
/*======================================================
Fonction principal
========================================================*/
int main()
{
	long long nombre;
	SetConsoleOutputCP(1252);
	//code endesous 
	cout << "Entrez un nombre"<< endl;
	cin >> nombre ;

	cout << nombrechiffres(nombre)<<endl;

	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

int nombrechiffres(long long n)
{
	int i=0;
	while (n!=0)
	{
		n/=10;
		i++;
	}
	return i ;
}