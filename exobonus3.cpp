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
bool estRoutable(unsigned long octet1 , unsigned long octet2 , unsigned long octet3 , unsigned long octet4);
/*======================================================
Fonction principal
========================================================*/
int main()
{
	unsigned long octet1, octet2, octet3, octet4;
	SetConsoleOutputCP(1252);
	//code en dessous 
	cout << "Entrez octet1 / octet2 / octet3 / octet4" << endl;
    cin >> octet1 >> octet2 >> octet3 >> octet4;

	cout<< estRoutable(octet1 , octet2 , octet3 ,  octet4) << endl;
	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

bool estRoutable(unsigned long octet1 , unsigned long octet2 , unsigned long octet3 , unsigned long octet4)
{
	if (octet1==10 & octet2>=0 & octet2<=255 & octet3>=0 & octet3<=255 & octet4>=0 & octet4<=255)
	{
		return false;
	}
	else if (octet1==172 & octet2>=16 & octet2<=31 & octet3>=0 & octet3<=255 & octet4>=0 & octet4<=255)
	{
		return false;
	}
	else if (octet1==192 & octet2==168 & octet3>=0 & octet3<=255 & octet4>=0 & octet4<=255)
	{
		return false;
	}
	else
	{
		return true;
	}

}