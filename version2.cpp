/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:24/11/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <windows.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction 
========================================================*/

double changeMonnaie(double somme, double tauxChange = 1.04, bool sens = true);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    cout << changeMonnaie(4.75) << endl; //multiplier les 4.75€ par le taux de change de base 1.04
    cout << changeMonnaie(5, 1.41) << endl; //multiplier les 5€ par 1.41
    cout << changeMonnaie(5, 2.13, false) << endl; //diviser les 5€ par 2.13

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

double changeMonnaie(double somme, double tauxChange, bool sens)
{
    //verification si sens vaut true ou false
    if (sens == 1) //si true on multiplie
    {
        return (somme * tauxChange);
    }
    else //si false on divise
    {
        return (somme / tauxChange);
    }
}
