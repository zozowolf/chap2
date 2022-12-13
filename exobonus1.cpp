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
int factoriel(int x);

int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int x;
    cout << "Entrez un nombre entier positif " << endl;
    cin >> x;

    cout << factoriel(x) << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

int factoriel(int x)
{

    if (x <= 1)
        return 1;
    else
        return (x * factoriel(x - 1));
}