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
void hanoi(int n, int depart, int arrivee);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    int n, depart, arrivee;
    SetConsoleOutputCP(1252);
    // code en dessous
    cout << "Entrez le nombre de disque a deplacer" << endl;
    cin >> n;

    cout << "choisir la tour de depart (0, 1 ou 2)" << endl;
    cin >> depart;
    do{

    cout << "choisir la tour d'arrivee (0, 1 ou 2)" << endl;
    cin >> arrivee;
    
    }while(depart==arrivee);

    hanoi(n, depart, arrivee);

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

void hanoi(int n, int depart, int arrivee)
{
    int intermediaire ;
    intermediaire = ((depart+arrivee)-3)*-1 ;


    if (n > 0)
    {
        hanoi(n - 1, depart, intermediaire);
        
        cout << "Deplacement d un disque de " << depart << " vers " << arrivee << endl;
        
        hanoi(n - 1, intermediaire, arrivee);
    }
    else
    {
        return;
    }
}
