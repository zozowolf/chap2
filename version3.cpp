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
#include <math.h> //bibliothéque pour pouvoir utiliser la fonction log 

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction 
========================================================*/

int getCidr(unsigned long long nombreHotes);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    unsigned long long nombreHotes;
    int restart, resultat; //variable pour pouvoir verifier si le cidr est valide ou pas et une autre pour faire une répétition en cas d'erreur
    do
    {
        restart = 0; //remise a 0 du compteur 
        cout << "Saisir le nombre d'hotes : " << endl; //demande du nombre d'hotes
        cin >> nombreHotes;
        resultat = getCidr(nombreHotes); //on rentre le resultat du cidr pour le verifier 
        if (resultat >= 1 && resultat <= 30) //verif si resultat du cidr est compris entre 1 et 30
        {
            cout << "Le cidr que vous pouvez utiliser est " << resultat << endl;
            restart++; //ajout de 1 en cas de bon cidr pour sortir de la boucle
        }
        else
        {
            cout << "Impossible de definir ce d'hotes en IPV4" << endl;
        }
    } while (restart != 1);

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

int getCidr(unsigned long long nombreHotes)
{
    return (32 - ((log(nombreHotes + 2) / log(2)))); //calcule du cidr
}
