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

#define MIN(x,y) ((x)<(y)?(x):(y))

#define ABS(x) ((x)<0?(x*-1):(x))

using namespace std; // utilisation de l'espace de nommage
					 // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
	SetConsoleOutputCP(1252);
	//code endesous 

    int a=2 , b=3 , x=-5;
    double c=4.5 ; 
    
    
    cout << "minimun entre 2 et 6 est ==> " << MIN(2 , 6) << "\n"<< endl;
    c = MIN(a,b); //change le c 4.5 ==> 2
    cout << "minimun entre 2 et 2 est ==> " << MIN(a,c) << "\n"<< endl;

    c=4.5 ;
    cout <<"valeur absolu de -5 est " << ABS(x) << "\n"<< endl;

    cout <<"valeur absolu de 4.5 est " << ABS(c) << "\n"<< endl;
	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}
