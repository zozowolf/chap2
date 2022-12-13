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
double calculTTC(double ht, double tva = 20);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    double ht, tva;
    char choix;

    SetConsoleOutputCP(1252);
    // code endesous
    cout << "Saisir le prix hors taxe" << endl;
    cin >> ht;
    cout << "Veux-tu une TVA standard (o/n) ? " << endl;
    cin >> choix;

    switch (choix)
    {
    case 'o':
    case 'O':
        cout << "Prix TTC= " << calculTTC(ht);
        break;

    case 'n':
    case 'N':
        cout << "Combien de tva ?" << endl;
        cin >> tva;
        cout << "Prix TTC= " << calculTTC(ht, tva);
        break;
    }

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
double calculTTC(double ht, double tva)
{
    return (ht + ((ht * tva) / 100));
}