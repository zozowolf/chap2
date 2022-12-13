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

char maj(char caractere);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    char c;

    SetConsoleOutputCP(1252);
    // code endesous
    cout << "Entrez un caractere " << endl;
    cin >> c;

    c = maj(c);
    cout << c << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

char maj(char caractere)
{
    if (caractere >= 97 && caractere <= 122)
    {
        return (caractere - 32);
    }
    else if (caractere >= 65 && caractere <= 90)
    {
        return(caractere);
    }
    else
    {
        return (caractere=0);
    }
}