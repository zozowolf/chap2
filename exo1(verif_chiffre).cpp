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

bool estUnChiffre(int nombre);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code endesous
    int x;
    cout << "Entrez un nombre " << endl;
    cin >> x;
    x= estUnChiffre(x);
    if (x==1)
    {
        cout<<"chiffre"<<endl;
    }
    else
    {
        cout<<"pas un chiffre"<<endl;
    }

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

bool estUnChiffre(int nombre)
{
    if (nombre <= 9 && nombre >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}