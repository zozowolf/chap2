/*======================================================
 programme elementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la declaration des fonctions
// d'entree/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <windows.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliotheque standard

bool extract(float totalSecondes, int& heure, int& minutes, int& secondes)
{
    float autre;
    autre = totalSecondes / 3600;
    if (autre >= 1)
    {
        heure = autre;
        autre = autre - heure;

        autre = autre * 60;
        minutes = autre ;
        autre = autre - minutes;

        
        secondes = autre*60;
        
        while (secondes > 59)
        {
            secondes -= 59;
            minutes++;
        }
        while (minutes > 59)
        {
            minutes -= 59;
            heure++;
        }
    }
    else
    {
        autre = totalSecondes / 60;
        heure = 0;
        minutes = autre ;
        autre = autre - minutes;

        autre = autre * 60;
        secondes = autre;

        while (secondes > 59)
        {
            secondes -= 59;
            if (secondes<0)
            {
                secondes=0;
            }
            minutes++;
        }
        while (minutes > 59)
        {
            minutes -= 59;
            if (minutes<0)
            {
                minutes=0;
            }
            heure++;
        }
    }


    if (heure > 24)
    {
        return false;
    }
    else
    {
        return true;
    }
}
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    //code en dessous 
    unsigned long long totalSecondes;
    int h, m, s;
    bool resultat;

    cout << "Saisir le nombre total de secondes ";
    cin >> totalSecondes;

    resultat = extract(totalSecondes, h, m, s);

    if (resultat == 1)
    {
        cout << "Duree superieure à une journee :" << h
            << " heures " << m << " minutes et " << s << " secondes" << endl;
    }
    else
    {
        cout << "Duree inferieure à une journee :" << h
            << " heures " << m << " minutes et " << s << " secondes" << endl;
    }

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return 0;
}