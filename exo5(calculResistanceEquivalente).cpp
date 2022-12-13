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
double calculResistanceEquivalente(double R1, double R2, char typeAssociation);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    double R1, R2;
    char typeAssociation;
    double resultat;
    SetConsoleOutputCP(1252);
    // code endesous

    cout << "Entrer la premiere resistance , la deuxieme et ensuite S pour serie ou P pour parallele" << endl;

    cin >> R1 >> R2 >> typeAssociation;

    resultat = calculResistanceEquivalente(R1, R2, typeAssociation);

    cout << resultat << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

double calculResistanceEquivalente(double R1, double R2, char typeAssociation)
{
    if (typeAssociation == 'S')
    {
        return (R1 + R2);
    }
    else if (typeAssociation == 'P')
    {
        return (1 / ((1 / R1) + (1 / R2)));
    }
    else
    {
        return (-1);
    }
}