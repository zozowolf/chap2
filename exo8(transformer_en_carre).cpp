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
double transformerEnCarre(double xmin, double &xmax, double ymin, double &ymax)
{
    double y, x;
    y = ymax - ymin;
    x = xmax - xmin;
    if (x > y)
    {
        y = (ymax - ymin);
        xmax = y + xmin;
    }
    else if (y > x)
    {
        x = (xmax - xmin);
        ymax = x + ymin;
    }
}
/*======================================================
Fonction principal
========================================================*/
int main()
{
    double xmin, xmax, ymin, ymax;

    SetConsoleOutputCP(1252);
    // code endesous
    cout << "Entrer xmin, xmax, ymin, ymax de votre rectangle " << endl;
    cin >> xmin >> xmax >> ymin >> ymax;

    transformerEnCarre(xmin, xmax, ymin, ymax);
    cout <<"xmin= "<< xmin << "," <<"xmax= "<< xmax << "," <<"ymin= "<< ymin << "," <<"ymax= "<<ymax  << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
