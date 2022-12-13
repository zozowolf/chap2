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

double moyenne(double x, double y, double z);
double moyenne(double x, double y);

/*======================================================
Fonction principal
========================================================*/

int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int nombre, verif; // variable nombre pour le savoir quelle moyenne faire et verif pour faire une répétition en cas d'erreur
    double x, y, z; //variable de la fonction
    do
    {
        verif = 0; //remise a 0 du compteur 
        cout << "Voulez-vous faire la moyenne de 2 ou 3 nombres ?" << endl; //demande du nombre d'argument 
        cin >> nombre;

        if (nombre == 2)
        {
            cout << "Saisir x et y :" << endl; //demande de saisie
            cin >> x >> y;  //entré des valeurs
            cout <<"Moyenne ="<< moyenne(x, y) << endl; //application de la fonction créer
        }
        else if (nombre == 3)
        {
            cout << "Saisir x , y et z:" << endl; //demande de saisie
            cin >> x >> y >> z; //entré des valeurs
            cout <<"Moyenne ="<< moyenne(x, y, z) << endl; //application de la fonction créer
        }
        else
        {
            cout<<"MERCI DE SAISIR 2 OU 3 !"<< endl; //on redemande si le nombre est pas compris n'est pas 2 ou 3 
            verif++; //ajout de 1 en cas d'erreur pour relancer la demande
        }

    } while (verif == 1);

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

double moyenne(double x, double y, double z)
{
    return((x+y+z)/3); //calcule de la moyenne pour 3 arguments
}
double moyenne(double x, double y)
{
        return((x+y)/2); //calcule de la moyenne pour 2 arguments
}