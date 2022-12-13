/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <string>   //entete de caractères de la STL
#include <windows.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

int iglobal = 25;
//=============== Déclaration des fonctions =============
// utile quand les fonctions sont définies après leur appel
//======================================================
void bonjour();
string messagePoli(string message = "BIENVENUE");
string messagePoli(string message, string messageDePolitesse);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    int imain = 4;

    SetConsoleOutputCP(1252);
    // Appel de la fonction bonjour
    bonjour();
    cout << messagePoli("Salut") << endl;

    string strResult;
    strResult = messagePoli("Coucou", " bon apres-midi");
    cout << strResult << endl;

    cout << messagePoli();

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

/*======================================================
Fonction bonjour
========================================================*/
void bonjour()
{
    cout << "BONJOUR" << endl;
    //  cout << imain;//imain inaccessible
    cout << "iglobal = " << iglobal << endl;
}

/*======================================================
Fonction messagePoli
\param message message à rendre poli
\return message qui est poli
========================================================*/
string messagePoli(string message)
{
    message += ", je vous souhaite une bonne journée ";
    return message;
}

string messagePoli(string message, string messageDePolitesse)
{
    message += messageDePolitesse;
    return message;
}